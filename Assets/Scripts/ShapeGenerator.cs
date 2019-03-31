using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class ShapeGenerator 
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>


    ShapeSettings settings;
    INoiseFilter[] noiseFilters;   // holds any of the noise filters we might create (i.e. either SimpleNoiseFilters or RigidNoiseFilters)
    public MinMax elevationMinMax;

    public System.Random rand = new System.Random();  // Randomisation of planet settings

    // ********************************************************************** //

    public void UpdateSettings(ShapeSettings settings, bool reset) 
    {
        // ***HRS to be coded (eventually once this works put in one line)
        if (reset)
        {
            // note that when we use ShapeSettings in the shapeGenerator we actually always modify the scriptable objects single set of settings, not an instance of those settings. So it modifies the whole thing.
            // What does this mean then? Basically that the GUI values overwrite the code defaults. How about we create a script that has a set of values and they get set here.

            this.settings = RandomizeShapeSettings(settings);
            //this.settings.planetRadius = 2f;  // oh shit it works.
        }
        else 
        { 
            this.settings = settings;
        }

        noiseFilters = new INoiseFilter[settings.noiseLayers.Length];
        Debug.Log("there are " + settings.noiseLayers.Length + " noiseLayers");

        for (int i = 0; i < noiseFilters.Length; i++) 
        {
            noiseFilters[i] = NoiseFilterFactory.CreateNoiseFilter(settings.noiseLayers[i].noiseSettings);
        }
        elevationMinMax = new MinMax();
    }

    // ********************************************************************** //

    public float CalculateUnscaledElevation(Vector3 pointOnUnitSphere) 
    {
        float firstLayerValue = 0;
        float elevation = 0;

        if (noiseFilters.Length > 0) 
        {
            firstLayerValue = noiseFilters[0].Evaluate(pointOnUnitSphere);
            if (settings.noiseLayers[0].enabled) 
            {
                elevation = firstLayerValue;
            }
        }

        for (int i = 1; i < noiseFilters.Length; i++) 
        {
            if (settings.noiseLayers[i].enabled) 
            {
                float mask = (settings.noiseLayers[i].useFirstLayerAsMask) ? firstLayerValue : 1;
                elevation += noiseFilters[i].Evaluate(pointOnUnitSphere) * mask;
            }
        }
        elevationMinMax.AddValue(elevation);
        return elevation;
    }

    // ********************************************************************** //

    public float GetScaledElevation(float unscaledElevation) 
    {
        float elevation = Mathf.Max(0, unscaledElevation);
        elevation = settings.planetRadius * (1 + elevation);
        return elevation;
    }

    // ********************************************************************** //

    public ShapeSettings RandomizeShapeSettings(ShapeSettings settings) 
    {
        settings.planetRadius = RandomNumberInRange(0.5f,2f);
        /*
        public NoiseLayer[] noiseLayers;

        [System.Serializable]
        public class NoiseLayer
        {
            public bool enabled = true;
            public bool useFirstLayerAsMask;   // determines whether spikey mountains can appear in seas or have to come out of lower level noise 
            public NoiseSettings noiseSettings;
        }
        */

        return settings;
    }

    // ********************************************************************** //

    public float RandomNumberInRange(double minimum, double maximum)
    {
        return (float)(rand.NextDouble() * (maximum - minimum) + minimum);
    }

    // ********************************************************************** //

}
