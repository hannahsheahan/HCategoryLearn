using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShapeGenerator 
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>


    ShapeSettings settings;

    // ********************************************************************** //

    public ShapeGenerator(ShapeSettings settings) 
    {
        this.settings = settings;
    }

    // ********************************************************************** //

    public Vector3 CalculatePointOnPlanet(Vector3 pointOnUnitSphere) 
    {
        return pointOnUnitSphere * settings.planetRadius;
    }

    // ********************************************************************** //

}
