using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColourSamplingStatistics 
{
    // Container class to hold the mean and std info for when sampling from planet colour levels
    public bool setMean = false;   // true: sample a colour from this parameterised gaussian. false: use a totally random colour                        

    public int colourLevel;
    public Color meanColour;
    public float stdev;
}
