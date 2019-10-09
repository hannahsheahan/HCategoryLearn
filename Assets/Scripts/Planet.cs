using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

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

    private System.Random rnd = new System.Random();

    // ********************************************************************** //

    void Awake() 
    { 
        particleLauncher = gameObject.GetComponent(typeof(ParticleLauncher)) as ParticleLauncher;
        tintColor = new Color();
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

        // Take a screenshot of this new planet and save it to file
        string planetName = PlanetIDGenerator(5);
        string planetPath = "/Users/hannahsheahan/Documents/Postdoc/Experiments/hCategoryLearn/StimulusSet/" + planetName + ".jpg";
        ScreenCapture.CaptureScreenshot(planetPath);
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

    // ********************************************************************** //

    string PlanetIDGenerator(int ndigits=5) 
    {
        // Create a random code of N digits in length
        int code = rnd.Next(0, (int)Math.Pow(10, ndigits-1));          // This will specify a subject-unique (probably) confirmation code for them to enter after finishing experiment to show completion
        string IDcode = code.ToString();

        while (IDcode.Length < 7)       // pad the code string with zeros until its 7 digits
        {
            IDcode = "0" + IDcode;
        }

        // convert the planet ID number to real planet information code
        string planetName = "planet";
        planetName = planetName + "_" + IDcode;

        return planetName;
    }

    // ********************************************************************** //


}
