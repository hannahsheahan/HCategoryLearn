﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleNoiseFilter : INoiseFilter
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>
     
    NoiseSettings.SimpleNoiseSettings settings; 
    Noise noise = new Noise();    // this is a class which creates n-D simplex noise (3D in our case)

    // ********************************************************************** //

    public SimpleNoiseFilter(NoiseSettings.SimpleNoiseSettings settings) 
    {
        this.settings = settings;
    }

    // ********************************************************************** //

    public float Evaluate(Vector3 point) 
    {
        // uses the magic from the Noise() simplex noise class
        float noiseValue = 0; //(noise.Evaluate(point * settings.roughness + settings.centre) + 1) * .5f;

        float frequency = settings.baseRoughness;
        float amplitude = 1;

        for (int i = 1; i < settings.numLayers; i++) 
        {
            // with each additional noise layer, the
            float v = noise.Evaluate(point * frequency + settings.centre);
            noiseValue += (v + 1) * .5f * amplitude;
            frequency *= settings.roughness;    // frequency will increase with each layer when roughness >1
            amplitude *= settings.persistence;  // amplitude will decrease when persistence is <1
        }

        noiseValue = noiseValue - settings.minValue;  // this line enables us to have noise recede into sphere so only some parts of noise are visible i.e. creates mountains
        return noiseValue * settings.strength;
    }

    // ********************************************************************** //

}
