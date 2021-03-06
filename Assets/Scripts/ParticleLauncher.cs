﻿using System.Collections;
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

    public ParticleSettings swirlSettings;          // Note: unlike ColorSettings and ShapeSettings, ParticleSettings is a monobehaviour not a scriptable object (so it can take specific particle systems)
    public ParticleSettings ringSettings;
    public ParticleSettings atmosphereSettings;
    public ParticleSettings largerAtmosphereSettings;
    public ParticleSettings sunSettings;
    public ParticleSettings sunGlowSettings;
    public ParticleSettings sunSwirlSettings;
    public ParticleSettings dustSettings;
    public GameObject sunSphere;
    public Light sunLight;

    GradientColorKey[] colorKey;
    GradientAlphaKey[] alphaKey;

    // Parameters of our particle systems
    Color tintColor;   // is passed from the planet ColourSettings
    public float sunRadius;
    public float ringRadius;
    public float dustAmount;
    public float ringThickness;
    public float atmosphereAmount;
    public float ringTransparency;

    public int sunLevel;
    public int ringLevel;
    public int dustLevel;
    public int atmosphereLevel;


    public System.Random rand = new System.Random();  // Randomisation of planet settings
    public int test;


    // ********************************************************************** //

    public void UpdateSettings(Color colour, bool reset, ParticleSamplingStatistics particleSampleStats) 
    {
        if (reset) 
        { 
            RandomizeParticleSettings(particleSampleStats);
        }

        // later put this in a loop over different particle systems so it doesn't repeat code (***HRS to do)

        // Planet particle systems
        swirlSettings = SetParticleSettings(colour, "swirl", swirlSettings);
        ringSettings = SetParticleSettings(colour, "ring", ringSettings);
        atmosphereSettings = SetParticleSettings(colour, "atmosphere", atmosphereSettings);
        largerAtmosphereSettings = SetParticleSettings(colour, "largerAtmosphere", largerAtmosphereSettings);
        dustSettings = SetParticleSettings(colour, "dust", dustSettings);

        // Sun particle systems
        sunSettings = SetParticleSettings(colour, "sunsurface", sunSettings);
        sunGlowSettings = SetParticleSettings(colour, "sunredglow", sunGlowSettings);
        sunSwirlSettings = SetParticleSettings(colour,  "sunswirls", sunSwirlSettings);
        sunSettings = SetParticleSettings(colour, "sunsphere", sunSettings);

    }

    // ********************************************************************** //

    public ParticleSettings SetParticleSettings(Color colour, string type, ParticleSettings settings)
    {
        tintColor = colour;
        bool prewarm = true;

        ParticleSystem.MainModule mainModule = settings.ParticleSystem.main;
        ParticleSystem.ShapeModule shape = settings.ParticleSystem.shape;
        ParticleSystem.EmissionModule emission = settings.ParticleSystem.emission;
        ParticleSystem.TrailModule trails = settings.ParticleSystem.trails;
        sunRadius = Math.Max(0f, sunRadius);

        switch (type) 
        {
            case "ring":
                //prewarm = false; // it's quite cool seeing the rings start spinning, but not when we collect static images
                shape.radius = ringRadius;
                shape.radiusThickness = ringThickness;
                //settings.colourGradient = SetColourSolid(colour, 0.3f, 0.9f);
                //mainModule.startColor = SetMinMaxGradient(colour, 0.3f, 0.5f, colour, 0.3f, 0.8f);
                //trails.colorOverLifetime = SetMinMaxGradient(colour, 0.8f, 1f, colour, 0.4f, 0.5f);
                mainModule.startColor = SetMinMaxGradient(colour, 0.3f, 0.5f, colour, 0.3f, 0.8f);
                trails.colorOverLifetime = SetMinMaxGradient(colour, 0.8f, 1f, colour, 0.4f, 0.7f);


                break;

            case "swirl":
                //settings.colourGradient = SetColourGradient();
                //shape.radius = ringRadius;
                //shape.scale = new Vector3(1.3f-ringThickness*.3f, 1f, ringThickness);
                float normalisedAtmosphere = atmosphereAmount / 400f;
                mainModule.startColor = SetMinMaxGradient(colour, 0.3f, 0.6f, colour, 0.2f, 0.7f);
                trails.colorOverTrail = SetMinMaxGradient(Color.white, normalisedAtmosphere, 0.2f, Color.white, normalisedAtmosphere, 0.9f);

                break;

            case "atmosphere":
                //settings.colourGradient = SetColourSolid(colour, 0.2f, 0.2f);
                mainModule.prewarm = true;
                mainModule.startColor = SetMinMaxGradient(colour, 0.2f, 0.7f, colour, 0.2f, 0.7f); // fixed
                emission.rateOverTime = atmosphereAmount;
                break;

            case "largerAtmosphere":
                emission.rateOverTime = atmosphereAmount/15f;
                break;

            case "dust":
                // these are actually moons now
                //shape.donutRadius = dustAmount;
                mainModule.startSize = new ParticleSystem.MinMaxCurve(dustAmount / 100f, dustAmount / 60f);
                emission.rateOverTime = dustAmount * 5f;
                break;

            case "sunsurface":
                //sun.transform = sunPosition;
                mainModule.startColor = SetColourSolid(new Color(1f, 1f, .5f), 0.8f, 1f);//-sunRadius);
                // adjust the glowing size and the size of the bits of glow accordingly
                shape.radius = SetSunRadius(sunRadius);
                mainModule.startSize = SetSunParticleSize(sunRadius * 2f);
                break;

            case "sunsphere":
                // change the size of the sun
                sunSphere.transform.localScale = new Vector3(sunRadius * 1.8f, sunRadius * 1.8f, sunRadius * 1.8f);

                // also scale the intensity of the light source with size of sun so that it reflects off the main planet
                double lightScale = (double)(sunRadius * 10f);
                sunLight.intensity = (float)Math.Pow(lightScale, 2.5);
                sunLight.range = sunRadius * 100f;
                break;

            case "sunredglow":
                // adjust the glowing size and the size of the bits of glow accordingly
                shape.radius = SetSunRadius(sunRadius*1.1f);
                mainModule.startSize = SetSunParticleSize(sunRadius*1.1f);
                break;

            case "sunswirls":
                // adjust the glowing size and the size of the bits of glow accordingly
                shape.radius = SetSunRadius(sunRadius*1.2f);
                mainModule.startSize = SetSunParticleSize(sunRadius*1.8f);
                break;
        }

        UpdateParticles(settings, prewarm);
        return settings;
    }

    // ********************************************************************** //
   
    public void UpdateParticles(ParticleSettings settings, bool prewarm)
    {
        ClearParticles(settings);
        var main = settings.ParticleSystem.main;
        main.prewarm = prewarm ? true : false ;
        settings.ParticleSystem.Play();
    }

    // ********************************************************************** //

    public void ClearParticles(ParticleSettings settings)
    {
        settings.ParticleSystem.Stop(); 
        settings.ParticleSystem.Clear();
    }
    // ********************************************************************** //

    public float RandomNumberInRange(double minimum, double maximum)
    {
        return (float)(rand.NextDouble() * (maximum - minimum) + minimum);
    }

    // ********************************************************************** //

    public float GaussianRandom(float mean, float std)
    {
        // code from https://stackoverflow.com/questions/218060/random-gaussian-variables
        double u1 = 1.0 - rand.NextDouble(); //uniform(0,1] random doubles
        double u2 = 1.0 - rand.NextDouble();
        double randStdNormal = Math.Sqrt(-2.0 * Math.Log(u1)) * Math.Sin(2.0 * Math.PI * u2); //random normal(0,1)
        double randNormal = mean + std * randStdNormal;                                       //random normal(mean,stdDev^2)
        return (float)randNormal;
    }

    // ********************************************************************** //

    private Color RandomColour()
    {
        return new Color(RandomNumberInRange(0.1f, 1f), RandomNumberInRange(0.1f, 1f), RandomNumberInRange(0.1f, 1f));  // defaults to alpha=1
    }

    // ********************************************************************** //

    private Gradient SetGradient()
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

    private Gradient SetColourSolid(Color colour, float alpha, float damper=0f)
    {
        // Note: a higher value of damper makes the colour more grey
        Gradient gradient;
        gradient = new Gradient();

        Color color = new Color(colour.r - (colour.r - 0.5f) * damper, colour.g - (colour.g - 0.5f) * damper, colour.b - (colour.b - 0.5f) * damper, alpha);
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

    private void RandomizeParticleSettings(ParticleSamplingStatistics particleSampleStats) 
    {

        // Sample particle settings from specified distributions
        if (particleSampleStats.setMean)
        {
            // parameter values
            ringRadius = GaussianRandom(particleSampleStats.meanRingRadius, particleSampleStats.stdRingRadius);
            sunRadius = GaussianRandom(particleSampleStats.meanSunRadius, particleSampleStats.stdSunRadius);
            atmosphereAmount = GaussianRandom(particleSampleStats.meanAtmosphere, particleSampleStats.stdAtmosphere);
            dustAmount = GaussianRandom(particleSampleStats.meanMooniness, particleSampleStats.stdMooniness);
            ringThickness = 0.2f;  // constant

            // levels
            sunLevel = particleSampleStats.sunLevel;
            ringLevel = particleSampleStats.ringLevel;
            dustLevel = particleSampleStats.mooninessLevel;
            atmosphereLevel = particleSampleStats.atmosphereLevel;
        }
        else
        {   // Completely randomise all particle settings 
            ringRadius = RandomNumberInRange(0.8f, 2f);
            ringThickness = 0.2f; //RandomNumberInRange(0.1f, 0.3f);  // becomes hard perceptually at small ring radius, so keep fixed for now
            atmosphereAmount = RandomNumberInRange(10f, 300f);
            sunRadius = RandomNumberInRange(0.02f, 0.55f);
            dustAmount = RandomNumberInRange(0f,3f);
        }
    }

    // ********************************************************************** //

    private float SetSunRadius(float radius)
    {
        // Set the radius of the emission shape for this particle system
        return radius;
    }

    // ********************************************************************** //

    private ParticleSystem.MinMaxCurve SetSunParticleSize(float radius) 
    {
        // the size of the glowing bits need to be scaled to the sun size to look good 
        return new ParticleSystem.MinMaxCurve(radius * 0.5f, radius);

    }

    // ********************************************************************** //

    private ParticleSystem.MinMaxGradient SetMinMaxGradient(Color colourA, float alphaA, float damperA, Color colourB, float alphaB, float damperB) 
    {
        // The higher the value of the damper, the less saturated the colour will be
        Color minColour = new Color(colourA.r - (colourA.r - 0.5f) * damperA, colourA.g - (colourA.g - 0.5f) * damperA, colourA.b - (colourA.b - 0.5f) * damperA, alphaA);
        Color maxColour = new Color(colourB.r - (colourB.r - 0.5f), colourB.g - (colourB.g - 0.5f) , colourB.b - (colourB.b - 0.5f), alphaB);

        return new ParticleSystem.MinMaxGradient(minColour, maxColour);
    }

    // ********************************************************************** //

}
