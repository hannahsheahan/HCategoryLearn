using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RigidNoiseFilter :INoiseFilter
{
    NoiseSettings.RigidNoiseSettings settings;
    Noise noise = new Noise();    // this is a class which creates n-D simplex noise (3D in our case)

    // ********************************************************************** //

    public RigidNoiseFilter(NoiseSettings.RigidNoiseSettings settings)
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
        float weight = 1;

        for (int i = 0; i < settings.numLayers; i++)
        {
            // with each additional noise layer, the
            float v = 1-Mathf.Abs(noise.Evaluate(point * frequency + settings.centre));
            v *= v;
            v *= weight;   // this will create increasing levels of detail as the layers build
            weight = Mathf.Clamp01(v * settings.weightMultiplier);

            noiseValue += v * amplitude;
            frequency *= settings.roughness;    // frequency will increase with each layer when roughness >1
            amplitude *= settings.persistence;  // amplitude will decrease when persistence is <1
        }

        noiseValue = noiseValue - settings.minValue;  // this line enables us to have noise recede into sphere so only some parts of noise are visible i.e. creates mountains
        return noiseValue * settings.strength;
    }

    // ********************************************************************** //

}
