using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
    public int resolution = 10;
    public bool autoUpdate = true;

    public ShapeSettings shapeSettings;
    public ColourSettings colourSettings;

    [HideInInspector]
    public bool shapeSettingsFoldout;
    [HideInInspector]
    public bool colourSettingsFoldout;

    ShapeGenerator shapeGenerator;

    [SerializeField, HideInInspector]
    MeshFilter[] meshFilters;
    TerrainFace[] terrainFaces;
    private int cubeFaces = 6;

    // ********************************************************************** //

    void Initialize()
    {

        shapeGenerator = new ShapeGenerator(shapeSettings);

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

                meshObj.AddComponent<MeshRenderer>().sharedMaterial = new Material(Shader.Find("Standard"));
                meshFilters[i] = meshObj.AddComponent<MeshFilter>();
                meshFilters[i].sharedMesh = new Mesh();
            }

            terrainFaces[i] = new TerrainFace(shapeGenerator, meshFilters[i].sharedMesh, resolution, directions[i]);
        }
    }

    // ********************************************************************** //

    public void GeneratePlanet() 
    {
        Initialize();
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
    }

    // ********************************************************************** //

    void GenerateColours() 
    { 
        // loop through meshes and set colours
        foreach (MeshFilter m in meshFilters) 
        {
            m.GetComponent<MeshRenderer>().sharedMaterial.color = colourSettings.planetColour;
        }
    }

    // ********************************************************************** //

}
