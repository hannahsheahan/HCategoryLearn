using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Linq;
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
    private int colourLevel;
    private float saturation;
    private float sunSize;
    private float ringSize;
    public int[] featureorder;
    public string datasetForm;
    private float mountainHeight;
    private float mountainRoughness;

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
    public int numPlanets;  

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

        // Our sampling settings
        datasetForm = "hierarchy";  // "flat", "singlefeature", "hierarchy"
        numPlanets = 8 * 200;  // how many planets to generate in this simulation
        featureorder = new int[] { 0, 1, 2, 3, 4, 5, 6 };
        //featureorder = RandomPermutation(featureorder);  // the random ordering of features in the hierarchy

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
        colourLevel = colourGenerator.GetColourLevel();
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

    // ********************************************************************** //      string PlanetIDGenerator(int ndigits=5)      {         // Create a random code of N digits in length         int code = rnd.Next(0, (int)Math.Pow(10, ndigits-1));          // This will specify a subject-unique (probably) confirmation code for them to enter after finishing experiment to show completion         string IDcode = code.ToString();          while (IDcode.Length < 7)       // pad the code string with zeros until its 7 digits         {             IDcode = "0" + IDcode;         }          // convert the planet ID number to real planet information code         string planetName = "planet";         planetName = planetName + "_" + IDcode + "_" + GetDateTime();          return planetName;     }      // ********************************************************************** //      void SavePlanet()      {
        // Take a screenshot of this new planet and save it to file
        string planetName = PlanetIDGenerator(5);         planetPath = filePath + planetName + ".jpg";         recorder.CaptureScreenshot(planetName);
        Debug.Log("Saving image to .jpg file and details to .json file.");          // Add all the details about this random planet to the stimulus set .json file         planetData = CurrentPlanetSettings(planetName); 
        // Add new planet to the List of all existing planets (could be 100k objects in this list, so beware performance HRS)         allExistingPlanets.allPlanetData.Add(planetData);          // convert the data to JSON format         dataAsJson = JsonUtility.ToJson(allExistingPlanets);          File.WriteAllText(recordFilePath, dataAsJson);
             }      // ********************************************************************** //      string GetDateTime()      {         DateTime dateTime = DateTime.Now;              string stringDateTime = dateTime.ToString("dd-MM-yy", DateTimeFormatInfo.InvariantInfo) + '_' + dateTime.ToString("T", DateTimeFormatInfo.InvariantInfo);         stringDateTime = stringDateTime.Replace("/", "-");   // make sure you don't have conflicting characters for writing to web server         stringDateTime = stringDateTime.Replace(":", "-");             return stringDateTime;     }      // ********************************************************************** //      public void LoadExistingPlanets(string filepath)     {         // may need to write an exception case here HRS         string json = File.ReadAllText(filepath);         allExistingPlanets = JsonUtility.FromJson<AllPlanetData>(json);          Debug.Log("Just loaded data from " + allExistingPlanets.allPlanetData.Count + " generated planets.");     }      // ********************************************************************** //      public PlanetData CurrentPlanetSettings(string planetName)      {         // This function generates local variable copies of the settings that we want to save for this planet          planetData = new PlanetData();              // new to create a new object to store this planet's parameters
        planetData.planetName = planetName;         planetData.generationDateTime = GetDateTime();         planetData.planetColour = tintColor;
        planetData.saturation = saturation;
        planetData.mountainHeight = shapeGenerator.mountainHeight;
        planetData.mountainRoughness = shapeGenerator.mountainRoughness;
         // The particle systems settings         planetData.sunRadius = particleLauncher.sunRadius;         planetData.ringRadius = particleLauncher.ringRadius;         planetData.dustAmount = particleLauncher.dustAmount;         planetData.atmosphereAmount = particleLauncher.atmosphereAmount; 
        // Particle systems levels
        planetData.colourLevel = colourLevel;
        planetData.sunLevel = particleLauncher.sunLevel;
        planetData.ringLevel = particleLauncher.ringLevel;
        planetData.dustLevel = particleLauncher.dustLevel;
        planetData.atmosphereLevel = particleLauncher.atmosphereLevel;
        planetData.mountainHeightLevel = shapeSettings.mountainHeightLevel;
        planetData.mountainRoughnessLevel = shapeSettings.mountainRoughnessLevel;
         return planetData;     }

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
           // if (settingsIndex < (Math.Pow(3,7)))  // 7 features to vary across
           //  if (settingsIndex < 3)  // for testing percetion of levels of an individual feature (along with lines ~410)
           if (settingsIndex < numPlanets) // for generating a single hierarchy of level 3
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
                if (datasetForm == "heirarchy") 
                {
                    Debug.Log("featureorder: ");
                    foreach (int feature in featureorder) 
                    {
                        Debug.Log(feature);
                    }
                }
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
        float[] meanMooninesses = new float[] { 0.4f, 2.3f, 5f };
        float[] meanSunRadii = new float[] { 0.06f, 0.3f, 0.7f };
        //Color[] meanPlanetColours = new Color[] { new Color(200f / 255f, 100f / 255f, 0f), new Color(0f, 200f / 255f, 100f / 255f), new Color(100f / 255f, 0f, 200f / 255f) };  // orange, green, purple
        Color[] meanPlanetColours = new Color[] { new Color(200f / 255f, 100f / 255f, 0f), new Color(200f / 255f, 100f / 255f, 0f), new Color(200f / 255f, 100f / 255f, 0f) };  // always orange now
        float[] meanMountainRoughnesses = new float[] { 0.4f, 1.7f, 9f };
        float[] meanMountainHeights = new float[] { 0.0001f, 0.2f, 0.4f };
        float[] meanAtmosphereStrengths = new float[] { 10f, 150f, 400f };
        float[] meanSaturations = new float[] { 0.05f, 0.5f, 0.95f };

        // Define normal dist. standard deviations for each parameter
        float stdMultiplier = 3.0f; // for making the task harder by blurring the category lines
        float ringStd = 0.15f * stdMultiplier;
        float moonStd = 0.1f * stdMultiplier;
        float sunStd = 0.04f * stdMultiplier;
        float colourStd = 0.05f * stdMultiplier;   // this is now for the saturation
        float roughnessStd = 0.1f * stdMultiplier;
        float heightStd = 0.008f * stdMultiplier;
        float atmosphereStd = 10f * stdMultiplier;

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
                allExistingPlanets.saturationLevels[i].mean = meanSaturations[i];

                allExistingPlanets.ringRadii[i].stdev = ringStd;
                allExistingPlanets.sunRadii[i].stdev = sunStd;
                allExistingPlanets.mooninesses[i].stdev = moonStd;
                allExistingPlanets.atmosphereLevels[i].stdev = atmosphereStd;
                allExistingPlanets.mountainHeights[i].stdev = heightStd;
                allExistingPlanets.mountainRoughnesses[i].stdev = roughnessStd;
                allExistingPlanets.colourStd = colourStd;
                allExistingPlanets.saturationLevels[i].stdev = colourStd;
            }
        }
        settingsNotLoaded = false;
    }

    // ********************************************************************** //

    bool LessThanHalfOfX(float index, float x) 
    {
        // This function returns a bool answer to the question "is i less than or equal to half of x"
        // indices are indexed 0-(x-1), so bias the case of i==x/2 to return true
        float epsilon = 0.0001f;
        return (index+epsilon) < (x/2f);
    }

    // ********************************************************************** //

    int[] RandomPermutation(int[] inputarray) 
    {
        List<int> listToSample = inputarray.OfType<int>().ToList();
        int[] newarray = new int[inputarray.Length];
        int index;

        for (int i = 0; i < inputarray.Length; i++) 
        {
            // take a random sample of our mutable list without replacement
            index = rnd.Next(0, listToSample.Count);
            newarray[i] = listToSample[index];

            // remove the sampled element from the list we just sampled from
            listToSample.RemoveAt(index);
        }

        return newarray;
    }
    // ********************************************************************** //

    void LoadNextSettings(int count) 
    {
        Debug.Log("planet index: " + count);

        int colourindex;
        int heightindex;
        int roughnessindex;
        int ringindex;
        int mooninessindex;
        int atmosphereindex;
        int sunindex;

        const int LOW_LEVEL = 0;
        const int NULL_LEVEL = 1;
        const int HIGH_LEVEL = 2;

        switch (datasetForm) 
        {
            case "flat":
                // for generating a full data set (non hierarchical, all combinations)
                colourindex     = count % 3;
                heightindex     = (int)(Math.Floor(count / 3f) % 3);
                roughnessindex  = (int)(Math.Floor(count / (3f * 3f)) % 3);
                ringindex       = (int)(Math.Floor(count / (3f * 3f * 3f)) % 3);
                mooninessindex  = (int)(Math.Floor(count / (3f * 3f * 3f * 3f)) % 3);
                atmosphereindex = (int)(Math.Floor(count / (3f * 3f * 3f * 3f * 3f)) % 3);
                sunindex        = (int)(Math.Floor(count / (3f * 3f * 3f * 3f * 3f * 3f)) % 3);
                break;

            case "singlefeature":
                // for testing perception of individual levels while keeping all other parameters constant. Whichever one you want to alter, make =(count%3)
                colourindex = 0;
                heightindex = 0;
                roughnessindex = 0;
                ringindex = count % 3;
                mooninessindex = 0;
                atmosphereindex = 0;
                sunindex = 0;
                break;

            case "heirarchy":
                // for generating a single hierarchical dataset of level 3 (8 planets)
                // note that the -1, 0 and +1 levels in the RSA matrix correspond to 0, 1 and 2 index levels of each feature respectively.
                // the numbers 0-6 here correspond to the ordering: 
                // [0] colourindex 
                // [1] roughnessindex 
                // [2] heightindex 
                // [3] ringindex
                // [4] mooninessindex
                // [5] atmosphereindex
                // [6] sunindex
                // such that e.g. for featureorder = { 6, 0, 1, 2, 3, 4, 5 }; the 6th element of featureorder is always the sunindex, with takes the position of feature 5 in the hierarchy
                //           e.g. the 0th element of featureorder corresponds to the colourindex, which takes the position of the 6th feature in the hierarchy
                //int[] featureorder = { 0, 1, 2, 3, 4, 5, 6 };  // HRS can also make a function that uses a random permutation but keep fixed for now

                int[] featureindex = new int[featureorder.Length];

                // Populate the feature index array to be equal to the null level so that it makes setting the hierarchy easier
                for (int i=0; i < featureindex.Length; i++)
                {
                    featureindex[i] = NULL_LEVEL;
                }

                // set the hierarchy logic - yes this could be simplified for better coding practice HRS
                if (numPlanets % 8 != 0) 
                {
                    Debug.Log("Warning: generating a number of planets that will not correctly fill the 3 level hierarchy. Check numPlanets.");
                }

                float x = 8f;
                count = count % 8;
                float rightsidecount = count;
                featureindex[0] = LessThanHalfOfX((float)count, x) ? LOW_LEVEL: HIGH_LEVEL;
                if (featureindex[0] == LOW_LEVEL)  // fill in the left side of the tree from root, N0
                {
                    x = x / 2f;
                    featureindex[1] = LessThanHalfOfX((float)count, x) ? LOW_LEVEL : HIGH_LEVEL;
                    if (featureindex[1] == LOW_LEVEL)    // left side of tree from N1
                    {
                        x = x / 2f;
                        featureindex[3] = LessThanHalfOfX((float)count, x) ? LOW_LEVEL : HIGH_LEVEL;
                    }
                    else                                 // right side of tree from N1
                    {
                        x = x / 2f;
                        rightsidecount = rightsidecount - x;
                        featureindex[4] = LessThanHalfOfX(rightsidecount, x) ? LOW_LEVEL : HIGH_LEVEL;
                    }
                }
                else    // right side of tree from root, N0
                {
                    x = x / 2f;
                    rightsidecount = rightsidecount - x;
                    featureindex[2] = LessThanHalfOfX(rightsidecount, x) ? LOW_LEVEL : HIGH_LEVEL;
                    if (featureindex[2] == LOW_LEVEL)    // left side of tree from N2
                    {
                        x = x / 2f;
                        featureindex[5] = LessThanHalfOfX(rightsidecount, x) ? LOW_LEVEL : HIGH_LEVEL;
                    }
                    else                                 // right side of tree from N2
                    {
                        x = x / 2f;
                        rightsidecount = rightsidecount - x;
                        featureindex[6] = LessThanHalfOfX(rightsidecount, x) ? LOW_LEVEL : HIGH_LEVEL;
                    }
                }

                // print these out to check its working properly
                for (int i=0; i < featureindex.Length; i++) 
                { 
                    Debug.Log("feature index ["+i+"]: "+featureindex[i]);
                }

                colourindex = featureindex[featureorder[0]];           // 0th element on feature order says which feature this is the RSA matrix
                roughnessindex = featureindex[featureorder[1]];        // 1
                heightindex = featureindex[featureorder[2]];           // 2
                ringindex = featureindex[featureorder[3]];             // 3
                mooninessindex = featureindex[featureorder[4]];        // 4
                atmosphereindex = featureindex[featureorder[5]];       // 5
                sunindex = featureindex[featureorder[6]];              // 6
                break;

            default:
                colourindex = 0;           
                roughnessindex = 0;       
                heightindex = 0;         
                ringindex = 0;            
                mooninessindex = 0;    
                atmosphereindex = 0;     
                sunindex = 0;
                break;
        }

        Color colour = allExistingPlanets.planetColours[colourindex];
        GaussianSummaryStats height = allExistingPlanets.mountainHeights[heightindex];
        GaussianSummaryStats roughness = allExistingPlanets.mountainRoughnesses[roughnessindex];
        GaussianSummaryStats ringradius = allExistingPlanets.ringRadii[ringindex];
        GaussianSummaryStats mooniness = allExistingPlanets.mooninesses[mooninessindex];
        GaussianSummaryStats atmosphere = allExistingPlanets.atmosphereLevels[atmosphereindex];
        GaussianSummaryStats sunradius = allExistingPlanets.sunRadii[sunindex];
        GaussianSummaryStats coloursaturation = allExistingPlanets.saturationLevels[colourindex];

        colourSampleStats = new ColourSamplingStatistics();
        colourSampleStats.setMean = true;

        colourSampleStats.colourLevel = colourindex;  // try using this as a key for saturation level rather than colour
        colourSampleStats.meanColour = colour;
        colourSampleStats.stdev = allExistingPlanets.colourStd;
        colourSampleStats.meanSaturation = coloursaturation.mean;

        shapeSampleStats = new ShapeSamplingStatistics();
        shapeSampleStats.setMean = true;

        shapeSampleStats.mountainRoughnessLevel = roughnessindex;
        shapeSampleStats.meanBaseRoughness = roughness.mean;
        shapeSampleStats.stdBaseRoughness = roughness.stdev;

        shapeSampleStats.mountainHeightLevel = heightindex;
        shapeSampleStats.meanStrength = height.mean;
        shapeSampleStats.stdStrength = height.stdev;

        particleSampleStats = new ParticleSamplingStatistics();
        particleSampleStats.setMean = true;

        particleSampleStats.ringLevel = ringindex;
        particleSampleStats.meanRingRadius = ringradius.mean;
        particleSampleStats.stdRingRadius = ringradius.stdev;

        particleSampleStats.mooninessLevel = mooninessindex;
        particleSampleStats.meanMooniness = mooniness.mean;
        particleSampleStats.stdMooniness = mooniness.stdev;

        particleSampleStats.atmosphereLevel = atmosphereindex;
        particleSampleStats.meanAtmosphere = atmosphere.mean;
        particleSampleStats.stdAtmosphere = atmosphere.stdev;

        particleSampleStats.sunLevel = sunindex;
        particleSampleStats.meanSunRadius = sunradius.mean;
        particleSampleStats.stdSunRadius = sunradius.stdev;
    }

    // ********************************************************************** //

}

