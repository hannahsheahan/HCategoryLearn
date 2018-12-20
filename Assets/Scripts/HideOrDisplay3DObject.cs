using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideOrDisplay3DObject : MonoBehaviour {

    /// <summary>
    /// ***Not currently used. Used only for 3D object manipulation versions of the 2D DM task.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>

    public GameObject stimulus3D;
    public int objectIndex;
   
	private void Update()
    {
        // Display or hide a 3D object to be interacted with
        switch (objectIndex)
        {
            case 1:
                stimulus3D.SetActive(GameController.control.interactableObjectVisible);
                break;

            default:
                stimulus3D.SetActive(GameController.control.interactableObjectVisible);
                break;
        }
    }
}
