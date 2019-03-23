using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class NoiseSettings
{

    public enum FilterType { Simple, Rigid};
    public FilterType filterType;

    [ConditionalHide("filterType", 0)]
    public SimpleNoiseSettings simpleNoiseSettings;
    [ConditionalHide("filterType", 1)] 
    public RigidNoiseSettings rigidNoiseSettings;


    // Create different modifiable parameters in our GUI depending on whether its
    // a simple noise filter (SimpleNoiseSettings) or rigid noise filter (RigidNoiseSettings)

    // ********************************************************************** //

    [System.Serializable]
    public class SimpleNoiseSettings 
    {
        public float strength = 1;
        [Range(1, 8)]
        public int numLayers = 1;
        public float baseRoughness = 1;
        public float roughness = 2;
        public float persistence = 0.5f;
        public Vector3 centre;
        public float minValue;
    }

    // ********************************************************************** //

    [System.Serializable]
    public class RigidNoiseSettings : SimpleNoiseSettings 
    {
        public float weightMultiplier = .8f;
    }

    // ********************************************************************** //

}
