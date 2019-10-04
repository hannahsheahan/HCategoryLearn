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
        this.settings = reset ? RandomizeShapeSettings(settings) : settings;       // generate a new random planet
        noiseFilters = new INoiseFilter[settings.noiseLayers.Length];

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
        // Planet physical shape settings
        settings.planetRadius = 1f;

        for (int i = 0; i < settings.noiseLayers.Length; i++)
        {
            ShapeSettings.NoiseLayer noiseLayer = settings.noiseLayers[i];
            noiseLayer.enabled = true;
            noiseLayer.useFirstLayerAsMask = true;

            // ***HRS these are for playing with so that we are modifying values in reasonable-looking ranges across the features that we want
            switch (noiseLayer.noiseSettings.filterType) 
            {
                case NoiseSettings.FilterType.Simple: 

                    // constant feature values
                    noiseLayer.noiseSettings.simpleNoiseSettings.persistence = 0.6f;                              //  keep this fixed around .5f
                    noiseLayer.noiseSettings.simpleNoiseSettings.minValue = 0.95f;                                //  keep this fixed around .95f, because the height-based colours start fucking up
                    noiseLayer.noiseSettings.simpleNoiseSettings.numLayers = 4;                                    

                    // variable feature values
                    noiseLayer.noiseSettings.simpleNoiseSettings.strength = 0.2f * (i + 1); // RandomNumberInRange(0.05f, 0.3f) * (i+1);
                    noiseLayer.noiseSettings.simpleNoiseSettings.baseRoughness = RandomNumberInRange(0.7f, 1.1f) * (i+1); // we may want to keep this one fixed around 1f
                    noiseLayer.noiseSettings.simpleNoiseSettings.roughness = 2.2f;  // RandomNumberInRange(1f, 3.0f);       // looks nice around 2.2f

                    // change the position of the noise on the planet (almost the same as creating new noise object, if we do this for each layer independently its fine
                    noiseLayer.noiseSettings.simpleNoiseSettings.centre.x = RandomNumberInRange(-.5f, .5f);
                    noiseLayer.noiseSettings.simpleNoiseSettings.centre.y = RandomNumberInRange(-.5f, .5f);
                    noiseLayer.noiseSettings.simpleNoiseSettings.centre.z = RandomNumberInRange(-.5f, .5f);
                    break;

                case NoiseSettings.FilterType.Rigid:

                    // constant feature values
                    noiseLayer.noiseSettings.rigidNoiseSettings.persistence = 0.5f;                              //  keep this fixed around .5f
                    noiseLayer.noiseSettings.rigidNoiseSettings.minValue = 0.95f;                                //  keep this fixed around .95f, because the height-based colours start fucking up
                    noiseLayer.noiseSettings.rigidNoiseSettings.numLayers = 4;  

                    // variable feature values
                    noiseLayer.noiseSettings.rigidNoiseSettings.strength = RandomNumberInRange(0.05f, 0.4f) * (i + 1);      // height of mountains
                    noiseLayer.noiseSettings.rigidNoiseSettings.baseRoughness =  RandomNumberInRange(0.8f, 1.5f) * (i + 1); // roughness of mountains
                    noiseLayer.noiseSettings.rigidNoiseSettings.roughness = 2.2f;  // RandomNumberInRange(1f, 3.0f);       // looks nice around 2.2f

                    // change the position of the noise on the planet (almost the same as creating new noise object, if we do this for each layer independently its fine
                    noiseLayer.noiseSettings.rigidNoiseSettings.centre.x = RandomNumberInRange(-.5f, .5f);
                    noiseLayer.noiseSettings.rigidNoiseSettings.centre.y = RandomNumberInRange(-.5f, .5f);
                    noiseLayer.noiseSettings.rigidNoiseSettings.centre.z = RandomNumberInRange(-.5f, .5f);
                    break;
            }
        }

        return settings;
    }

    // ********************************************************************** //

    public float RandomNumberInRange(double minimum, double maximum)
    {
        return (float)(rand.NextDouble() * (maximum - minimum) + minimum);
    }

    // ********************************************************************** //

}
