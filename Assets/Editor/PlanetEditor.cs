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

        DrawSettingsEditor(planet.shapeSettings, planet.OnShapeSettingsUpdated, ref planet.shapeSettingsFoldout, ref shapeEditor);
        DrawSettingsEditor(planet.colourSettings, planet.OnColourSettingsUpdated, ref planet.colourSettingsFoldout, ref colourEditor);
    }

    // ********************************************************************** //

    void DrawSettingsEditor(Object settings, System.Action onSettingsUpdated, ref bool foldout, ref Editor editor) 
    {
        // this does some magic which I dont understand, to make the InspectorGUI update the gameobject when the GUI values are changed

        if (settings != null) 
        { 
            foldout = EditorGUILayout.InspectorTitlebar(foldout, settings);

            using (var check = new EditorGUI.ChangeCheckScope()) 
            {
                if (foldout) 
                {
                    // only update the gameObject if the editor parameter menu is 'unfolded'/opened up
                    CreateCachedEditor(settings, null, ref editor);    // with this method, the editor we pass in is saved as the variable shapeEditor or colourEditor and cached so it isnt remade every time
                    editor.OnInspectorGUI();

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
