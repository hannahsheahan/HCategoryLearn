using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu()]
public class ShapeSettings : ScriptableObject
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>

    public float planetRadius = 2;
    public NoiseLayer[] noiseLayers;

    [System.Serializable]
    public class NoiseLayer
    {
        public bool enabled = true;
        public bool useFirstLayerAsMask;   // determines whether spikey mountains can appear in seas or have to come out of lower level noise 
        public NoiseSettings noiseSettings;
    }

}
