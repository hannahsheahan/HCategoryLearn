using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GaussianSummaryStats 
{
    public float mean;
    public float stdev;

    // ********************************************************************** //

    public GaussianSummaryStats(float mn=0f, float std=0f) 
    {
        mean = mn;
        stdev = std;
    }

    // ********************************************************************** //

}
