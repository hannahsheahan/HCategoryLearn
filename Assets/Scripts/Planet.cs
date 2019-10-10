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
    private float sunSize;
    private float ringSize;


    public AllPlanetData allExistingPlanets;     public PlanetData planetData;     private string dataAsJson;     public string filePath = "/Users/hannahsheahan/Documents/Postdoc/Experiments/hCategoryLearn/StimulusSet/";     private string recordFilePath;      private System.Random rnd = new System.Random();
    // ********************************************************************** //

    void Awake() 
    { 
        particleLauncher = gameObject.GetComponent(typeof(ParticleLauncher)) as ParticleLauncher;
        tintColor = new Color();

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
        shapeGenerator.UpdateSettings(shapeSettings, reset);
        colourGenerator.UpdateSettings(colourSettings, reset);
        tintColor = colourGenerator.GetTintColor();
        particleLauncher.UpdateSettings(tintColor, reset);

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


    // ********************************************************************** //      string PlanetIDGenerator(int ndigits=5)      {         // Create a random code of N digits in length         int code = rnd.Next(0, (int)Math.Pow(10, ndigits-1));          // This will specify a subject-unique (probably) confirmation code for them to enter after finishing experiment to show completion         string IDcode = code.ToString();          while (IDcode.Length < 7)       // pad the code string with zeros until its 7 digits         {             IDcode = "0" + IDcode;         }          // convert the planet ID number to real planet information code         string planetName = "planet";         planetName = planetName + "_" + IDcode;          return planetName;     }      // ********************************************************************** //      void SavePlanet()      {          // Take a screenshot of this new planet and save it to file         string planetName = PlanetIDGenerator(5);         string planetPath = filePath + planetName + ".jpg";         ScreenCapture.CaptureScreenshot(planetPath);         Debug.Log("Saving image to .jpg file.");          // Add all the details about this random planet to the stimulus set .json file         planetData = CurrentPlanetSettings(planetName);         // Add new planet to the List of all existing planets (could be 100k objects in this list, so beware performance HRS)         allExistingPlanets.allPlanetData.Add(planetData);          // convert the data to JSON format         Debug.Log("Saving image details to .json file.");         dataAsJson = JsonUtility.ToJson(allExistingPlanets);          File.WriteAllText(recordFilePath, dataAsJson);      }      // ********************************************************************** //      string GetDateTime()      {         DateTime dateTime = DateTime.Now;              string stringDateTime = dateTime.ToString("dd-MM-yy", DateTimeFormatInfo.InvariantInfo) + '_' + dateTime.ToString("t", DateTimeFormatInfo.InvariantInfo);         stringDateTime = stringDateTime.Replace("/", "-");   // make sure you don't have conflicting characters for writing to web server         stringDateTime = stringDateTime.Replace(":", "-");             return stringDateTime;     }      // ********************************************************************** //      public void LoadExistingPlanets(string filepath)     {         // may need to write an exception case here HRS         string json = File.ReadAllText(filepath);         allExistingPlanets = JsonUtility.FromJson<AllPlanetData>(json);          Debug.Log("Just loaded data from " + allExistingPlanets.allPlanetData.Count + " generated planets.");     }      // ********************************************************************** //      public PlanetData CurrentPlanetSettings(string planetName)      {         // This function generates local variable copies of the settings that we want to save for this planet          planetData = new PlanetData();              // new to create a new object to store this planet's parameters         planetData.planetName = planetName;         planetData.generationDateTime = GetDateTime();         planetData.planetColour = tintColor;         planetData.shapeNoiseLayers = shapeSettings.noiseLayers;          // The particle systems settings         planetData.sunRadius = particleLauncher.sunRadius;         planetData.ringRadius = particleLauncher.ringRadius;         planetData.dustAmount = particleLauncher.dustAmount;         planetData.ringThickness = particleLauncher.ringThickness;         planetData.atmosphereAmount = particleLauncher.atmosphereAmount;          return planetData;     }      // ********************************************************************** //
}
