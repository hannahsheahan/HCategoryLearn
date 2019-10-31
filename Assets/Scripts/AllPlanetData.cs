﻿using System.Collections; using System.Collections.Generic; using UnityEngine; using System;  [System.Serializable] public class AllPlanetData {     /// <summary>
    /// This is a wrapper function for reading/writing the data for all of the generated planets to file 
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com     /// Date: 09/10/2019     /// </summary>      // Generative statistics
    public int nLevels = 3;      public Color[] planetColours; 
    public float colourStd;      public GaussianSummaryStats[] ringRadii;     public GaussianSummaryStats[] sunRadii;     public GaussianSummaryStats[] mooninesses;     public GaussianSummaryStats[] atmosphereLevels;     public GaussianSummaryStats[] mountainRoughnesses;     public GaussianSummaryStats[] mountainHeights;     public GaussianSummaryStats[] saturationLevels;      public List<PlanetData> allPlanetData;    // parameters of each planet      // ********************************************************************** //      public AllPlanetData()      {         // Initialisation
        planetColours = new Color[nLevels];         saturationLevels = new GaussianSummaryStats[nLevels];         ringRadii = new GaussianSummaryStats[nLevels];         sunRadii = new GaussianSummaryStats[nLevels];         mooninesses = new GaussianSummaryStats[nLevels];         atmosphereLevels = new GaussianSummaryStats[nLevels];         mountainRoughnesses = new GaussianSummaryStats[nLevels];         mountainHeights = new GaussianSummaryStats[nLevels];          for (int i=0; i < nLevels; i++)         {             ringRadii[i] = new GaussianSummaryStats();             sunRadii[i] = new GaussianSummaryStats();             mooninesses[i] = new GaussianSummaryStats();             atmosphereLevels[i] = new GaussianSummaryStats();             mountainRoughnesses[i] = new GaussianSummaryStats();             mountainHeights[i] = new GaussianSummaryStats();             planetColours[i] = new Color();             saturationLevels[i] = new GaussianSummaryStats();         }     }
    // ********************************************************************** //

}  