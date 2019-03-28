using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinMax
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>

    public float Min { get; private set; }
    public float Max { get; private set; }

    public MinMax()
    {
        Min = float.MaxValue;
        Max = float.MinValue;
    }

    public void AddValue(float v) 
    {
     
        // set some bounds on minimum and maximum values for your mountain-height dependent shader
        if (v > Max) 
        {
            Max = v;
        }

        if (v < Min) 
        {
            Min = v;
        }
    } 


}
