using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrainFace 
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>
    /// 

    ShapeGenerator shapeGenerator;
    Mesh mesh;
    int resolution;   // number of vertices on each dim.
    Vector3 localUp;
    Vector3 axisA;
    Vector3 axisB;

    // ********************************************************************** //

    public TerrainFace(ShapeGenerator shapeGenerator, Mesh mesh, int resolution, Vector3 localUp)
    {
        this.shapeGenerator = shapeGenerator;
        this.mesh = mesh;
        this.resolution = resolution;
        this.localUp = localUp;

        axisA = new Vector3(localUp.y, localUp.z, localUp.x);
        axisB = Vector3.Cross(localUp, axisA);   // perpendicular to both localUp and axisA

    }

    // ********************************************************************** //

    public void ConstructMesh ( )     
    {
        // Make a mesh out of lots of small triangles defined over a grid of resolution size 'resolution'

        Vector3[] vertices = new Vector3[resolution * resolution];
        int[] triangles = new int[(resolution - 1) * (resolution - 1) * 6];  // this many triangles as a function of number of vertices on each dimension (i.e. resolution).
        int triIndex = 0;

        for (int y = 0; y < resolution; y++) 
        { 
            for (int x = 0; x < resolution; x++) 
            {
                int i = x + y * resolution;   // this is a counter, same as setting int i=0 outside y loop and incrementing on inner loop
                Vector2 percent = new Vector2(x, y) / (resolution-1);
                Vector3 pointOnUnitCube = localUp + (percent.x - 0.5f)*2*axisA + (percent.y - 0.5f)*2*axisB;  // geometry magic from youtube tutorial
                //vertices[i] = pointOnUnitCube; // if you want a cube use this

                // Turn the cube into a sphere
                Vector3 pointOnUnitSphere = pointOnUnitCube.normalized;
                vertices[i] = shapeGenerator.CalculatePointOnPlanet(pointOnUnitSphere);


                // Note that vertices are labelled as: e.g. 0  1  2 
                //                                          3  4  5 
                //                                          6  7  8 
                // and so triangles making up each square in this grid are indexed as e.g. 0-4-3; 0-1-4; 1-5-4; etc 

                if ((x != resolution - 1) && (y != resolution - 1))
                {
                    // first triangle
                    triangles[triIndex] = i;
                    triangles[triIndex + 1] = i+resolution+1;
                    triangles[triIndex + 2] = i+resolution;

                    triangles[triIndex + 3] = i;
                    triangles[triIndex + 4] = i + 1;
                    triangles[triIndex + 5] = i + resolution + 1;
                    triIndex += 6;
                }
            }
        }
        mesh.Clear();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.RecalculateNormals();


    }

    // ********************************************************************** //



}
