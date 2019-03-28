using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColourGenerator
{
    ColourSettings settings;
    Texture2D texture;
    const int textureResolution = 50;
    INoiseFilter biomeNoiseFilter;

    // ********************************************************************** //

    public void UpdateSettings(ColourSettings settings)
    {
        this.settings = settings;
        if (texture == null || texture.height != settings.biomeColourSettings.biomes.Length)
        { 
            texture = new Texture2D(textureResolution, settings.biomeColourSettings.biomes.Length);
        }
        biomeNoiseFilter = NoiseFilterFactory.CreateNoiseFilter(settings.biomeColourSettings.noise);
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
            for (int i = 0; i < textureResolution; i++) 
            {
                Color gradientCol = biome.gradient.Evaluate(i / (textureResolution - 1f));
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


}
