using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeSamplingStatistics 
{
    // Container class to hold the mean and std info for when sampling from planet shape levels
    public bool setMean = false;   // true: sample from these parameterised gaussian. false: use totally random settings                        

    public int mountainHeightLevel;
    public float meanStrength;
    public float stdStrength;

    public int mountainRoughnessLevel;
    public float meanBaseRoughness;
    public float stdBaseRoughness;

}
