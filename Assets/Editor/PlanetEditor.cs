using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Planet))]
public class PlanetEditor : Editor
{
    /// <summary>
    /// This script has been built from an online youtube tutorial on procedural
    /// planet generation, provided by Sebastian Lague: https://github.com/SebLague/Procedural-Planets 
    /// Edited: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 21/03/2019
    /// </summary>


    Planet planet;
    Editor shapeEditor;
    Editor colourEditor;

    // ********************************************************************** //

    public override void OnInspectorGUI()
    {
        using (var check = new EditorGUI.ChangeCheckScope())
        {
            base.OnInspectorGUI();
            if (check.changed) 
            {
                planet.GeneratePlanet();
            }
        }

        // Create a button for generating a new planet
        if (GUILayout.Button("Generate Planet")) 
        {
            planet.GeneratePlanet();
        }

        // Create a button for resetting the settings of the planet
        if (GUILayout.Button("Reset Planet Settings"))
        {
            // ***HRS make note that we may actually need to change the settings in the settings panels too when we reset and regenerate...
            planet.GeneratePlanet(true);
        }

        DrawSettingsEditor(planet.shapeSettings, planet.OnShapeSettingsUpdated, ref planet.shapeSettingsFoldout, ref shapeEditor);
        DrawSettingsEditor(planet.colourSettings, planet.OnColourSettingsUpdated, ref planet.colourSettingsFoldout, ref colourEditor);
    }

    // ********************************************************************** //

    void DrawSettingsEditor(Object settings, System.Action onSettingsUpdated, ref bool foldout, ref Editor editor) 
    {
        // this does some magic which I dont understand, to make the InspectorGUI update the gameobject when the GUI values are changed

        if (settings != null) 
        { 
            foldout = EditorGUILayout.InspectorTitlebar(foldout, settings);  // this just shows where each settings menu starts and finishes

            using (var check = new EditorGUI.ChangeCheckScope())        // this means we will only update the planet settings if something is changed in the shape or colour GUI editor 
            {
                if (foldout) 
                {
                    // only update the gameObject if the editor parameter menu is 'unfolded'/opened up
                    CreateCachedEditor(settings, null, ref editor);    // with this method, the editor we pass in is saved as the variable shapeEditor or colourEditor and cached so it isnt remade every time
                    editor.OnInspectorGUI();                           // displays the editor menu

                    if (check.changed) 
                    { 
                        if (onSettingsUpdated != null) 
                        {
                            onSettingsUpdated();
                        }
                    }
                }
            }
        }
    }

    // ********************************************************************** //

    private void OnEnable()
    {
        planet = (Planet)target;
    }

    // ********************************************************************** //



}
