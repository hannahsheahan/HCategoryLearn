using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class ColourGenerator
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>

    ColourSettings settings;
    Texture2D texture;
    const int textureResolution = 50;
    INoiseFilter biomeNoiseFilter;

    GradientColorKey[] oceanColorKey;
    GradientAlphaKey[] oceanAlphaKey;
    public Color tintColor;
    public Color darkColor;

    public System.Random rand = new System.Random();  // Randomisation of planet settings

    // ********************************************************************** //

    public void UpdateSettings(ColourSettings settings, bool reset)
    {
        this.settings = reset ? RandomizeColourSettings(settings) : settings;       // generate a new random planet
        if (texture == null || texture.height != settings.biomeColourSettings.biomes.Length)
        { 
            texture = new Texture2D(textureResolution*2, settings.biomeColourSettings.biomes.Length, TextureFormat.RGBA32, false);  // first half of this is the ocean, second half is the biomes/icy north pole etc
        }
        biomeNoiseFilter = NoiseFilterFactory.CreateNoiseFilter(settings.biomeColourSettings.noise);
        tintColor = settings.biomeColourSettings.biomes[0].tint;
    }

    // ********************************************************************** //

    public void UpdateElevation(MinMax elevationMinMax) 
    {
        settings.planetMaterial.SetVector("_elevationMinMax", new Vector4(elevationMinMax.Min, elevationMinMax.Max));
    }

    // ********************************************************************** //

    // Note: this biome stuff get a bit complex, but for our purposes we can just alter the color tint and tint percent (or keep tint percent fixed)
    public float BiomePercentFromPoint(Vector3 pointOnUnitSphere) 
    {
        float heightPercent = (pointOnUnitSphere.y + 1) / 2f;
        heightPercent += (biomeNoiseFilter.Evaluate(pointOnUnitSphere) - settings.biomeColourSettings.noiseOffset) * settings.biomeColourSettings.noiseStrength;
        float biomeIndex = 0;
        int numBiomes = settings.biomeColourSettings.biomes.Length;
        float blendRange = settings.biomeColourSettings.blendAmount / 2f + 0.001f;   // this offset is here to make sure that we're never dividing by zero - there is sensitive InverseLerp behaviour if this goes to 0

        for (int i=0; i < numBiomes; i++) 
        {
            float dst = heightPercent - settings.biomeColourSettings.biomes[i].startHeight;
            float weight = Mathf.InverseLerp(-blendRange, blendRange, dst);  // blends between -blendRange and +blendRange offset by the distnace dst. Blend will be 1 (solide colour) above the blendRange
            biomeIndex *= (1 - weight);   // stop biomeIndex getting too large, so if weight is 1 this means completely this one colour
            biomeIndex += i * weight;
        }

        return biomeIndex / Mathf.Max(1, numBiomes - 1);
    }

    // ********************************************************************** //

    public void UpdateColours() 
    {
        Color[] colours = new Color[texture.width * texture.height];

        int colourIndex = 0;
        foreach (var biome in settings.biomeColourSettings.biomes) 
        { 
            for (int i = 0; i < textureResolution * 2; i++) 
            {
                Color gradientCol;

                // this sets the first half of the texture to the gradient for the ocean depth, and the second half for the biome/icy poles
                if (i < textureResolution) 
                {
                    gradientCol = settings.oceanColour.Evaluate(i / (textureResolution - 1f));
                }
                else 
                {
                    gradientCol = biome.gradient.Evaluate((i - textureResolution) / (textureResolution - 1f));
                }

                Color tintCol = biome.tint;
                colours[colourIndex] = gradientCol * (1 - biome.tintPercent) + tintCol * biome.tintPercent;  // take the tint colour if the tint percent is high
                colourIndex++;
             }
        }
        texture.SetPixels(colours);
        texture.Apply();
        settings.planetMaterial.SetTexture("_texture", texture);
    }

    // ********************************************************************** //

    public ColourSettings RandomizeColourSettings(ColourSettings settings)
    {
        //Note: at the moment this is just changing the colour tint strength on the biome tip I think?? check

        tintColor = RandomColour();
        darkColor = new Color(tintColor.r * .5f, tintColor.g * .5f, tintColor.b * .5f);

        settings.oceanColour = RandomOceanGradient();

        // a gradient colour tint for the terrain/mountains
        settings.biomeColourSettings.biomes[0].gradient = RandomMountainGradient();

        for (int i = 0; i < settings.biomeColourSettings.biomes.Length; i++)
        {
            ColourSettings.BiomeColourSettings.Biome biome = settings.biomeColourSettings.biomes[i];

            // an overall colour tint
            biome.tintPercent = RandomNumberInRange(0.0f,0.2f);  // ***HRS can probs get rid of this later
            biome.tint = tintColor;
        }
        return settings;
    }

    // ********************************************************************** //

    public float RandomNumberInRange(double minimum, double maximum)
    {
        return (float)(rand.NextDouble() * (maximum - minimum) + minimum);
    }

    // ********************************************************************** //

    private Color RandomColour()
    {
        return new Color(RandomNumberInRange(0.1f,1f), RandomNumberInRange(0.1f, 1f), RandomNumberInRange(0.1f, 1f));  // defaults to alpha=1
    }

    // ********************************************************************** //

    private Gradient RandomOceanGradient()
    {
        // This will create an ocean colour that is tinted according to the overall planet tint colour
        Gradient gradient;
        Color mediumColor;
        Color verydarkColor;

        gradient = new Gradient();  // later try just modifying the original gradient instead of creating new one each time
        verydarkColor = new Color(darkColor.r * .3f, darkColor.g * .3f, darkColor.b * .3f);  // change the medium colour a bit to make more interesting
        mediumColor = new Color(tintColor.r * .7f, tintColor.g * .7f, tintColor.b * .9f);  // change the medium colour a bit to make more interesting

        // Populate the color keys at the relative time 0 and 1 (0 and 100%)
        oceanColorKey = new GradientColorKey[4];

        oceanColorKey[0].color = verydarkColor;  // create dark parts in the depths of the sea
        oceanColorKey[0].time = 0.0f;
        oceanColorKey[1].color = verydarkColor;
        oceanColorKey[1].time = 0.3f;
        oceanColorKey[2].color = darkColor;
        oceanColorKey[2].time = 0.8f;
        oceanColorKey[3].color = mediumColor;
        oceanColorKey[3].time = 1f;

        // Populate the alpha  keys at relative time 0 and 1  (0 and 100%)
        oceanAlphaKey = new GradientAlphaKey[2];
        oceanAlphaKey[0].alpha = 1.0f;
        oceanAlphaKey[0].time = 0.0f;
        oceanAlphaKey[1].alpha = 1.0f;
        oceanAlphaKey[1].time = 1.0f;

        gradient.SetKeys(oceanColorKey, oceanAlphaKey);

        return gradient;
    }

    // ********************************************************************** //

    private Gradient RandomMountainGradient()
    {
        // This will create an ocean colour that is tinted according to the overall planet tint colour
        Gradient gradient;
        Color brownColor;
        Color whiteColor;
        Color lightColor;

        gradient = new Gradient();  // later try just modifying the original gradient instead of creating new one each time
        brownColor = new Color(tintColor.r * .9f, tintColor.g * .8f, tintColor.b * .5f);      // a bit of brownish to make a bit to make more interesting
        lightColor = new Color(Math.Min(tintColor.r * 1.2f,1f), Math.Min(tintColor.r * 1.2f, 1f), Math.Min(tintColor.r * 1.2f, 1f));   // make sure we keep valid colour values
        whiteColor = new Color(1f, 1f, 1f);

        // Populate the color keys at the relative time 0 and 1 (0 and 100%)
        oceanColorKey = new GradientColorKey[5];

        oceanColorKey[0].color = darkColor;  // create dark parts in the depths of the sea
        oceanColorKey[0].time = 0.0f;
        oceanColorKey[1].color = tintColor;
        oceanColorKey[1].time = 0.35f;
        oceanColorKey[2].color = brownColor;
        oceanColorKey[2].time = 0.7f;
        oceanColorKey[3].color = lightColor;
        oceanColorKey[3].time = 0.9f;
        oceanColorKey[4].color = whiteColor;  // create snowy mountains
        oceanColorKey[4].time = 1f;

        // Populate the alpha  keys at relative time 0 and 1  (0 and 100%)
        oceanAlphaKey = new GradientAlphaKey[2];
        oceanAlphaKey[0].alpha = 1.0f;
        oceanAlphaKey[0].time = 0.0f;
        oceanAlphaKey[1].alpha = 1.0f;
        oceanAlphaKey[1].time = 1.0f;

        gradient.SetKeys(oceanColorKey, oceanAlphaKey);

        return gradient;
    }

    // ********************************************************************** //

    public Color GetTintColor() 
    {
        return tintColor;    
    }

    // ********************************************************************** //

}
