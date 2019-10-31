using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class GaussianSummaryStats 
{
    /// <summary>
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 18/10/2019
    /// </summary>

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
