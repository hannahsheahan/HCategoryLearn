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

    public AllPlanetData allExistingPlanets;     public PlanetData planetData;     private string dataAsJson;     public string filePath = "/Users/hannahsheahan/Documents/Postdoc/Experiments/hCategoryLearn/StimulusSet/";     public string planetPath;
    private string recordFilePath;
    private Timer savingTimer; 
    private bool startGenerativeProcess = false;
    private int settingsIndex = 0;
    private bool settingsNotLoaded = true;
    private bool readyForSaving = false;
    private bool finishedSaving = true;
    private bool startedSaving = false;
    private bool finished = false;

    private ScreenRecorder recorder;
    public GameObject camera;
     private System.Random rnd = new System.Random();
    // ********************************************************************** //

    void Awake() 
    { 
        particleLauncher = gameObject.GetComponent(typeof(ParticleLauncher)) as ParticleLauncher;
        tintColor = new Color();
        meanColor = new Color();
        savingTimer = new Timer();

        recorder = camera.GetComponent<ScreenRecorder>();

        shapeSampleStats = new ShapeSamplingStatistics();
        particleSampleStats = new ParticleSamplingStatistics();
        colourSampleStats = new ColourSamplingStatistics();


        // Read in the existing record of planet details
        recordFilePath = filePath + "stimulusLookup.json";         if (File.Exists(recordFilePath))         {             Debug.Log("Opening record of generated planets.");             LoadExistingPlanets(recordFilePath);         }
        else 
        {
            allExistingPlanets.allPlanetData = new List<PlanetData>();
            allExistingPlanets.planetColours = new Color[allExistingPlanets.nLevels];
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
        Initialize(reset);
        GenerateMesh();
        GenerateColours();
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

    // ********************************************************************** //      string PlanetIDGenerator(int ndigits=5)      {         // Create a random code of N digits in length         int code = rnd.Next(0, (int)Math.Pow(10, ndigits-1));          // This will specify a subject-unique (probably) confirmation code for them to enter after finishing experiment to show completion         string IDcode = code.ToString();          while (IDcode.Length < 7)       // pad the code string with zeros until its 7 digits         {             IDcode = "0" + IDcode;         }          // convert the planet ID number to real planet information code         string planetName = "planet";         planetName = planetName + "_" + IDcode;          return planetName;     }      // ********************************************************************** //      void SavePlanet()      {
        // Take a screenshot of this new planet and save it to file
        string planetName = PlanetIDGenerator(5);         planetPath = filePath + planetName + ".jpg";         recorder.CaptureScreenshot(planetName);
        Debug.Log("Saving image to .jpg file and details to .json file.");          // Add all the details about this random planet to the stimulus set .json file         planetData = CurrentPlanetSettings(planetName); 
        // Add new planet to the List of all existing planets (could be 100k objects in this list, so beware performance HRS)         allExistingPlanets.allPlanetData.Add(planetData);          // convert the data to JSON format         dataAsJson = JsonUtility.ToJson(allExistingPlanets);          File.WriteAllText(recordFilePath, dataAsJson);
             }      // ********************************************************************** //      string GetDateTime()      {         DateTime dateTime = DateTime.Now;              string stringDateTime = dateTime.ToString("dd-MM-yy", DateTimeFormatInfo.InvariantInfo) + '_' + dateTime.ToString("t", DateTimeFormatInfo.InvariantInfo);         stringDateTime = stringDateTime.Replace("/", "-");   // make sure you don't have conflicting characters for writing to web server         stringDateTime = stringDateTime.Replace(":", "-");             return stringDateTime;     }      // ********************************************************************** //      public void LoadExistingPlanets(string filepath)     {         // may need to write an exception case here HRS         string json = File.ReadAllText(filepath);         allExistingPlanets = JsonUtility.FromJson<AllPlanetData>(json);          Debug.Log("Just loaded data from " + allExistingPlanets.allPlanetData.Count + " generated planets.");     }      // ********************************************************************** //      public PlanetData CurrentPlanetSettings(string planetName)      {         // This function generates local variable copies of the settings that we want to save for this planet          planetData = new PlanetData();              // new to create a new object to store this planet's parameters         planetData.planetName = planetName;         planetData.generationDateTime = GetDateTime();         planetData.planetColour = tintColor;
        planetData.saturation = saturation;         planetData.shapeNoiseLayers = shapeSettings.noiseLayers;          // The particle systems settings         planetData.sunRadius = particleLauncher.sunRadius;         planetData.ringRadius = particleLauncher.ringRadius;         planetData.dustAmount = particleLauncher.dustAmount;         planetData.ringThickness = particleLauncher.ringThickness;         planetData.atmosphereAmount = particleLauncher.atmosphereAmount;          return planetData;     }

    // ********************************************************************** //

   void Update() 
   {
        if (!finished) 
        { 
            if (!startedSaving) // check for a trigger from the thread starting
            { 
                startedSaving = recorder.threadAlive;
            }

            // loop through all the settings we want to save
            //if (settingsIndex < (Math.Pow(3,7)))  // 7 features to vary across
            if (settingsIndex < 3)  // 7 features to vary across
            {
                if (readyForSaving)  // this imposes a 1 frame delay between procedural generation (so that generation of everything is complete) and saving (yay!)
                {
                    Debug.Log("save planet");
                    SavePlanet();
                    readyForSaving = false;
                    settingsIndex++;
                }

                if (!startGenerativeProcess & settingsNotLoaded)
                {
                    Debug.Log("load all settings");
                    LoadSettings();  // first time around only
                    settingsNotLoaded = false;
                } 
                else
                {
                    if (startGenerativeProcess) 
                    { 
                        if (recorder.threadStarted & (!recorder.threadAlive) )
                        {
                            recorder.threadStarted = false;
                            Debug.Log("load NEXT settings");
                            LoadNextSettings(settingsIndex);
                            Debug.Log("generate next planet");
                            GeneratePlanet(true);
                            readyForSaving = true;
                            finishedSaving = false;
                        }
                    }
                }
            }
            else if (!finished) // write a message when we're done
            {
                Debug.Log("Done!");
                finished = true;
            }
        }
    }

    // ********************************************************************** //

    public void GenerateStimulusSet() 
    {
        startGenerativeProcess = true;
        Debug.Log("Generation process started at: " + GetDateTime());
        Debug.Log("Generating full stimulus set...");
    }

    // ********************************************************************** //

    public void LoadSettings()
    {
        // This function will go through all the planet stimulus settings we want a sample of, generate that planet then save it
        // Define the gaussian distribution means for each level (save these to file too)
        float[] meanRingRadii = new float[] { 0.4f, 1.35f, 2.1f };
        float[] meanMooninesses = new float[] { 0.4f, 2.3f, 4f };
        float[] meanSunRadii = new float[] { 0.06f, 0.3f, 0.7f };
        Color[] meanPlanetColours = new Color[] { new Color(200f / 255f, 100f / 255f, 0f), new Color(0f, 200f / 255f, 100f / 255f), new Color(100f / 255f, 0f, 200f / 255f) };  // orange, green, purple
        float[] meanMountainRoughnesses = new float[] { 0.4f, 1.7f, 9f };
        float[] meanMountainHeights = new float[] { 0.0001f, 0.1f, 0.3f };
        float[] meanAtmosphereStrengths = new float[] { 10f, 150f, 400f };

        // Define normal dist. standard deviations for each parameter
        float ringStd = 0.1f;
        float moonStd = 0.1f;
        float sunStd = 0.03f;
        float colourStd = 0.1f;
        float roughnessStd = 0.1f;
        float heightStd = 0.008f;
        float atmosphereStd = 10f;

        // Ensure that we generate samples from a consistent set of distributions every time we append to this file
        // if there is an existing set of settings, then continue sampling from those original settings in file
        if (allExistingPlanets.allPlanetData.Count == 0) 
        { 
            for (int i=0; i < allExistingPlanets.nLevels; i++) 
            {
                // set the sampling parameters for saving to file
                allExistingPlanets.ringRadii[i].mean = meanRingRadii[i];
                allExistingPlanets.sunRadii[i].mean = meanSunRadii[i];
                allExistingPlanets.mooninesses[i].mean = meanMooninesses[i];
                allExistingPlanets.atmosphereLevels[i].mean = meanAtmosphereStrengths[i];
                allExistingPlanets.mountainHeights[i].mean = meanMountainHeights[i];
                allExistingPlanets.mountainRoughnesses[i].mean = meanMountainRoughnesses[i];
                allExistingPlanets.planetColours[i] = meanPlanetColours[i];

                allExistingPlanets.ringRadii[i].stdev = ringStd;
                allExistingPlanets.sunRadii[i].stdev = sunStd;
                allExistingPlanets.mooninesses[i].stdev = moonStd;
                allExistingPlanets.atmosphereLevels[i].stdev = atmosphereStd;
                allExistingPlanets.mountainHeights[i].stdev = heightStd;
                allExistingPlanets.mountainRoughnesses[i].stdev = roughnessStd;
                allExistingPlanets.colourStd = colourStd;
            }
        }
        settingsNotLoaded = false;
    }

    // ********************************************************************** //

    void LoadNextSettings(int count) 
    {
        Debug.Log("planet index: " + count);

        Color colour = allExistingPlanets.planetColours[count % 3];
        GaussianSummaryStats height = allExistingPlanets.mountainHeights[(int)(Math.Floor(count/3f)%3)];
        GaussianSummaryStats roughness = allExistingPlanets.mountainRoughnesses[(int)(Math.Floor(count / (3f*3f)) % 3)];
        GaussianSummaryStats ringradius = allExistingPlanets.ringRadii[(int)(Math.Floor(count / (3f * 3f * 3f)) % 3)];
        GaussianSummaryStats mooniness = allExistingPlanets.mooninesses[(int)(Math.Floor(count / (3f * 3f * 3f * 3f)) % 3)];
        GaussianSummaryStats atmosphere = allExistingPlanets.atmosphereLevels[(int)(Math.Floor(count / (3f * 3f * 3f * 3f * 3f)) % 3)];
        GaussianSummaryStats sunradius = allExistingPlanets.sunRadii[(int)(Math.Floor(count / (3f * 3f * 3f * 3f * 3f * 3f)) % 3)];


        // for testing perception of individual levels while keeping all other parameters constant
        /*
        Color colour = allExistingPlanets.planetColours[0];
        GaussianSummaryStats height = allExistingPlanets.mountainHeights[0];
        GaussianSummaryStats roughness = allExistingPlanets.mountainRoughnesses[0];
        GaussianSummaryStats ringradius = allExistingPlanets.ringRadii[0];
        GaussianSummaryStats mooniness = allExistingPlanets.mooninesses[0];
        GaussianSummaryStats atmosphere = allExistingPlanets.atmosphereLevels[0];
        GaussianSummaryStats sunradius = allExistingPlanets.sunRadii[count % 3];
        */

        colourSampleStats = new ColourSamplingStatistics();
        colourSampleStats.setMean = true;
        colourSampleStats.meanColour = colour;
        colourSampleStats.stdev = allExistingPlanets.colourStd;

        shapeSampleStats = new ShapeSamplingStatistics();
        shapeSampleStats.setMean = true;

        shapeSampleStats.meanBaseRoughness = roughness.mean;
        shapeSampleStats.stdBaseRoughness = roughness.stdev;

        shapeSampleStats.meanStrength = height.mean;
        shapeSampleStats.stdStrength = height.stdev;

        particleSampleStats = new ParticleSamplingStatistics();
        particleSampleStats.setMean = true;

        particleSampleStats.meanRingRadius = ringradius.mean;
        particleSampleStats.stdRingRadius = ringradius.stdev;

        particleSampleStats.meanMooniness = mooniness.mean;
        particleSampleStats.stdMooniness = mooniness.stdev;

        particleSampleStats.meanAtmosphere = atmosphere.mean;
        particleSampleStats.stdAtmosphere = atmosphere.stdev;

        particleSampleStats.meanSunRadius = sunradius.mean;
        particleSampleStats.stdSunRadius = sunradius.stdev;
    }

    // ********************************************************************** //

}

