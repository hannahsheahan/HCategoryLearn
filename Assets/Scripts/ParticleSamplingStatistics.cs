using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleSamplingStatistics 
{
    // Container class to hold the mean and std info for when sampling from planet particle system levels
    public bool setMean = false;   // true: sample from these parameterised gaussian. false: use totally random settings                        

    public int ringLevel;
    public float meanRingRadius;
    public float stdRingRadius;

    public int mooninessLevel;
    public float meanMooniness;
    public float stdMooniness;

    public int atmosphereLevel;
    public float meanAtmosphere;
    public float stdAtmosphere;

    public int sunLevel;
    public float meanSunRadius;
    public float stdSunRadius;


}
