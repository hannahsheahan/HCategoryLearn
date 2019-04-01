using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class ColourSettings : ScriptableObject
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>

    public Material planetMaterial;
    public BiomeColourSettings biomeColourSettings;
    public Gradient oceanColour;            // Note: I'm surprised that the oceanColour saves when its not serializable?

    [System.Serializable]
    public class BiomeColourSettings 
    {
        // this will create a gradient of colour on the planet itself
        public Biome[] biomes;
        public NoiseSettings noise;
        public float noiseOffset;
        public float noiseStrength;
        [Range(0, 1)]
        public float blendAmount;

        [System.Serializable]
        public class Biome 
        {
            public Gradient gradient;
            public Color tint; // this will produce an overall tint for the planet is what we will edit in the random planet generation
            [Range(0,1)]
            public float startHeight;
            [Range(0,1)]
            public float tintPercent;   // how much the overall colour affects the colour. We should probs keep this fixed or we could in theory use this to modify saturation of colour
        }
    }
}
