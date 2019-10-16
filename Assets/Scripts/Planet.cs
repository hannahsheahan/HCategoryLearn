using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Globalization;

public class Planet : MonoBehaviour
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>
    /// 

    [Range(2,256)]    // constrains the size of 'resolution' in the GUI
    public int resolution = 100;
    public bool autoUpdate = true;

    public ShapeSettings shapeSettings;
    public ColourSettings colourSettings;
    public Color meanColor;

    [HideInInspector]
    public bool shapeSettingsFoldout;
    [HideInInspector]
    public bool colourSettingsFoldout;

    ShapeGenerator shapeGenerator = new ShapeGenerator();
    ColourGenerator colourGenerator = new ColourGenerator();
    ParticleLauncher particleLauncher;

    [SerializeField, HideInInspector]
    MeshFilter[] meshFilters;
    TerrainFace[] terrainFaces;
    private int cubeFaces = 6;
    private Color tintColor;
    private float saturation;
    private float sunSize;
    private float ringSize;

    ColourSamplingStatistics colourSampleStats;
    ParticleSamplingStatistics particleSampleStats;
    ShapeSamplingStatistics shapeSampleStats;

    public AllPlanetData allExistingPlanets;     public PlanetData planetData;     private string dataAsJson;     public string filePath = "/Users/hannahsheahan/Documents/Postdoc/Experiments/hCategoryLearn/StimulusSet/";     private string recordFilePath;      private System.Random rnd = new System.Random();
    // ********************************************************************** //

    void Awake() 
    { 
        particleLauncher = gameObject.GetComponent(typeof(ParticleLauncher)) as ParticleLauncher;
        tintColor = new Color();
        meanColor = new Color();

        // Read in the existing record of planet details
        recordFilePath = filePath + "stimulusLookup.json";         if (File.Exists(recordFilePath))         {             Debug.Log("Opening record of generated planets.");             LoadExistingPlanets(recordFilePath);         }
        else 
        {
            allExistingPlanets.allPlanetData = new List<PlanetData>();
        }
    }

    // ********************************************************************** //

    void Initialize(bool reset=false)
    {
        shapeGenerator.UpdateSettings(shapeSettings, reset, shapeSampleStats);
        colourGenerator.UpdateSettings(colourSettings, reset, colourSampleStats);
        tintColor = colourGenerator.GetTintColor();
        saturation = colourGenerator.GetSaturation();
        particleLauncher.UpdateSettings(tintColor, reset, particleSampleStats);

        // only create new meshFilters when you need them
        if (meshFilters == null || meshFilters.Length == 0) 
        {
            meshFilters = new MeshFilter[cubeFaces];
        }
        terrainFaces = new TerrainFace[cubeFaces];

        Vector3[] directions = { Vector3.up, Vector3.down, Vector3.left, Vector3.right, Vector3.forward, Vector3.back };  // one for each of the cube faces

        for (int i = 0; i < cubeFaces; i++) 
        {
            if (meshFilters[i] == null) 
            { 
                GameObject meshObj = new GameObject("mesh");
                meshObj.transform.parent = transform;

                meshObj.AddComponent<MeshRenderer>();
                meshFilters[i] = meshObj.AddComponent<MeshFilter>();
                meshFilters[i].sharedMesh = new Mesh();
            }

            meshFilters[i].GetComponent<MeshRenderer>().sharedMaterial = colourSettings.planetMaterial;

            terrainFaces[i] = new TerrainFace(shapeGenerator, meshFilters[i].sharedMesh, resolution, directions[i]);
        }
    }

    // ********************************************************************** //

    public void GeneratePlanet(bool reset=false) 
    {
        GenerateStimulusSet();
        Initialize(reset);
        GenerateMesh();
        GenerateColours();
        SavePlanet();
    }

    // ********************************************************************** //

    public void OnShapeSettingsUpdated() 
    {
        if (autoUpdate) 
        { 
            Initialize();
            GenerateMesh();
        }
    }

    // ********************************************************************** //

    public void OnColourSettingsUpdated() 
    {
        if (autoUpdate)
        {
            Initialize();
            GenerateColours();
        }
    }

    // ********************************************************************** //

    void GenerateMesh() 
    { 
        // Just generate the mesh for every face of the terrain
        foreach (TerrainFace face in terrainFaces) 
        {
            face.ConstructMesh();
        }

        colourGenerator.UpdateElevation(shapeGenerator.elevationMinMax);

    }

    // ********************************************************************** //

    void GenerateColours() 
    {
        colourGenerator.UpdateColours();

        // recolour the biomes
        foreach (TerrainFace face in terrainFaces)
        {
            face.UpdateUVs(colourGenerator);
        }
    }


    // ********************************************************************** //      string PlanetIDGenerator(int ndigits=5)      {         // Create a random code of N digits in length         int code = rnd.Next(0, (int)Math.Pow(10, ndigits-1));          // This will specify a subject-unique (probably) confirmation code for them to enter after finishing experiment to show completion         string IDcode = code.ToString();          while (IDcode.Length < 7)       // pad the code string with zeros until its 7 digits         {             IDcode = "0" + IDcode;         }          // convert the planet ID number to real planet information code         string planetName = "planet";         planetName = planetName + "_" + IDcode;          return planetName;     }      // ********************************************************************** //      void SavePlanet()      {          // Take a screenshot of this new planet and save it to file         string planetName = PlanetIDGenerator(5);         string planetPath = filePath + planetName + ".jpg";         ScreenCapture.CaptureScreenshot(planetPath);         Debug.Log("Saving image to .jpg file.");          // Add all the details about this random planet to the stimulus set .json file         planetData = CurrentPlanetSettings(planetName);         // Add new planet to the List of all existing planets (could be 100k objects in this list, so beware performance HRS)         allExistingPlanets.allPlanetData.Add(planetData);          // convert the data to JSON format         Debug.Log("Saving image details to .json file.");         dataAsJson = JsonUtility.ToJson(allExistingPlanets);          File.WriteAllText(recordFilePath, dataAsJson);      }      // ********************************************************************** //      string GetDateTime()      {         DateTime dateTime = DateTime.Now;              string stringDateTime = dateTime.ToString("dd-MM-yy", DateTimeFormatInfo.InvariantInfo) + '_' + dateTime.ToString("t", DateTimeFormatInfo.InvariantInfo);         stringDateTime = stringDateTime.Replace("/", "-");   // make sure you don't have conflicting characters for writing to web server         stringDateTime = stringDateTime.Replace(":", "-");             return stringDateTime;     }      // ********************************************************************** //      public void LoadExistingPlanets(string filepath)     {         // may need to write an exception case here HRS         string json = File.ReadAllText(filepath);         allExistingPlanets = JsonUtility.FromJson<AllPlanetData>(json);          Debug.Log("Just loaded data from " + allExistingPlanets.allPlanetData.Count + " generated planets.");     }      // ********************************************************************** //      public PlanetData CurrentPlanetSettings(string planetName)      {         // This function generates local variable copies of the settings that we want to save for this planet          planetData = new PlanetData();              // new to create a new object to store this planet's parameters         planetData.planetName = planetName;         planetData.generationDateTime = GetDateTime();         planetData.planetColour = tintColor;
        planetData.saturation = saturation;         planetData.shapeNoiseLayers = shapeSettings.noiseLayers;          // The particle systems settings         planetData.sunRadius = particleLauncher.sunRadius;         planetData.ringRadius = particleLauncher.ringRadius;         planetData.dustAmount = particleLauncher.dustAmount;         planetData.ringThickness = particleLauncher.ringThickness;         planetData.atmosphereAmount = particleLauncher.atmosphereAmount;          return planetData;     }

    // ********************************************************************** //

    private void GenerateStimulusSet()
    {
        // This function will go through all the planet stimulus settings we want a sample of, generate that planet then save it

        // Define the gaussian distribution means for each level (save these to file too)
        float[] ringRadii = new float[] { 0.9f, 1.4f, 2f };
        float[] mooninesses = new float[] { 2f, 14f, 40f};
        float[] sunRadii = new float[] { 0.1f, 0.35f, 0.8f };
        Color[] planetColours = new Color[] { new Color(200f/255f, 100f/255f, 0f), new Color(0f, 200f/255f, 100f/255f), new Color(100f/255f, 0f, 200f/255f) };  // orange, green, purple
        float[] mountainRoughnesses = new float[] {0.4f, 1.7f, 9f };
        float[] mountainHeights = new float[] { 0.0001f, 0.1f, 0.3f};
        float[] atmosphereStrengths = new float[] { 10f, 150f, 300f };

        // Define normal dist. standard deviations for each parameter
        float ringStd = 0.1f;
        float moonStd = 2f;
        float sunStd  = 0.05f;
        float colourStd = 0.1f;
        float roughnessStd = 0.1f;
        float heightStd = 0.008f;
        float atmosphereStd = 10f;



        //foreach (Color colour in planetColours) 
        //{
        colourSampleStats = new ColourSamplingStatistics();

        Color colour = planetColours[1];
        colourSampleStats.meanColour = colour;
        colourSampleStats.stdev = colourStd; 
        colourSampleStats.setMean = true;
        //}

        //foreach (float radius in ringRadii) 
        //{ 
        particleSampleStats = new ParticleSamplingStatistics();

        float ringRadius = ringRadii[1];
        particleSampleStats.meanRingRadius = ringRadius;
        particleSampleStats.stdRingRadius = ringStd;

        float moons = mooninesses[1];
        particleSampleStats.meanMooniness = moons;
        particleSampleStats.stdMooniness = moonStd;

        float atmosphere = atmosphereStrengths[1];
        particleSampleStats.meanAtmosphere = atmosphere;
        particleSampleStats.stdAtmosphere = atmosphereStd;

        float sunRadius = sunRadii[1];
        particleSampleStats.meanSunRadius = sunRadius;
        particleSampleStats.stdSunRadius = sunStd;


        shapeSampleStats = new ShapeSamplingStatistics();

        float roughness = mountainRoughnesses[1];
        shapeSampleStats.meanBaseRoughness = roughness;
        shapeSampleStats.stdBaseRoughness = roughnessStd;

        float height = mountainHeights[1];
        shapeSampleStats.meanStrength = height;
        shapeSampleStats.stdStrength = heightStd;

    //}

    //GeneratePlanet(true);

}

    // ********************************************************************** //

}
