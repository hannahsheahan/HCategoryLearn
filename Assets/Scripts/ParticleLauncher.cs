using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class ParticleLauncher : MonoBehaviour
{
    /// <summary>
    /// This script control parameters of different particle systems used for atmospheric planet effects.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 04/04/2019
    /// 
    /// </summary>

    public ParticleSettings ringSettings;          // Note: unlike ColorSettings and ShapeSettings, ParticleSettings is a monobehaviour not a scriptable object (so it can take specific particle systems)
    public ParticleSettings atmosphereSettings;

    GradientColorKey[] colorKey;
    GradientAlphaKey[] alphaKey;
    Color tintColor;

    public System.Random rand = new System.Random();  // Randomisation of planet settings
    public int test;


    // ********************************************************************** //

    public void UpdateSettings(Color colour, bool reset) 
    {

        if (reset)
        {
            // loop through all the particleSettings instances we have and set these up (***HRS to do)

            ringSettings = RandomizeParticleSettings(colour, ringSettings);       // generate a new random atmosphere and orbitals
        
        }

        // later put this in a loop over different particle systems so it doesn't repeat code (***HRS to do)

        // clear the current particle systems
        ClearParticles(ringSettings);
        //ClearParticles(atmosphereSettings);

        ringSettings = SetParticleSettings(colour, ringSettings);
        UpdateParticles(ringSettings); 

        //atmosphereSettings = SetAtmosphereSettings(colour, atmosphereSettings);
        //UpdateParticles(atmosphereSettings);


    }

    // ********************************************************************** //

    public ParticleSettings SetParticleSettings(Color colour, ParticleSettings settings)
    {
        tintColor = colour;
        settings.colourGradient = SetColorGradient();
        
        return settings;
    }

    // ********************************************************************** //

    public ParticleSettings SetAtmosphereSettings(Color colour, ParticleSettings settings)
    {
        tintColor = colour;
        settings.colourGradient = SetAtmosphereColor();

        return settings;
    }

    // ********************************************************************** //

    public ParticleSettings RandomizeParticleSettings(Color colour, ParticleSettings settings)
    {

        // not sure what to do with this yet, but ultimately it will modify the number of orbitals etc

        return settings;
    }

    // ********************************************************************** //

    public void UpdateParticles(ParticleSettings settings)
    {
        var main = settings.particleSystem.main;
        main.startColor = settings.colourGradient;
        settings.particleSystem.Play();
    }

    // ********************************************************************** //

    public void ClearParticles(ParticleSettings settings)
    {
        settings.particleSystem.Clear();
    }
    // ********************************************************************** //

    public float RandomNumberInRange(double minimum, double maximum)
    {
        return (float)(rand.NextDouble() * (maximum - minimum) + minimum);
    }

    // ********************************************************************** //

    private Color RandomColour()
    {
        return new Color(RandomNumberInRange(0.1f, 1f), RandomNumberInRange(0.1f, 1f), RandomNumberInRange(0.1f, 1f));  // defaults to alpha=1
    }

    // ********************************************************************** //

    private Gradient SetColorGradient()
    {
        Gradient gradient;

        gradient = new Gradient();  // later try just modifying the original gradient instead of creating new one each time

        // Populate the color keys at the relative time 0 and 1 (0 and 100%)
        colorKey = new GradientColorKey[2];

        colorKey[0].color = tintColor;  
        colorKey[0].time = 0.0f;
        colorKey[1].color = tintColor;
        colorKey[1].time = 1.0f;

        // Populate the alpha  keys at relative time 0 and 1  (0 and 100%)
        alphaKey = new GradientAlphaKey[2];
        alphaKey[0].alpha = 1.0f;
        alphaKey[0].time = 0.0f;
        alphaKey[1].alpha = 0.2f;
        alphaKey[1].time = 1.0f;

        gradient.SetKeys(colorKey, alphaKey);

        return gradient;
    }

    // ********************************************************************** //

    private Gradient SetAtmosphereColor()
    {
        Gradient gradient;
        gradient = new Gradient();
        float alpha = 0.2f;
        
        Color color = new Color(tintColor.r, tintColor.g, tintColor.b, alpha);
        colorKey = new GradientColorKey[2];

        colorKey[0].color = color;
        colorKey[0].time = 0.0f;
        colorKey[1].color = color;
        colorKey[1].time = 1.0f;

        // Populate the alpha  keys at relative time 0 and 1  (0 and 100%)
        alphaKey = new GradientAlphaKey[2];
        alphaKey[0].alpha = alpha;
        alphaKey[0].time = 0.0f;
        alphaKey[1].alpha = alpha;
        alphaKey[1].time = 1.0f;

        gradient.SetKeys(colorKey, alphaKey);

        return gradient;

    }
    // ********************************************************************** //

}
