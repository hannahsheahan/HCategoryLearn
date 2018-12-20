using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterFeedbackScript : MonoBehaviour {

    /// <summary>
    /// This script handles the input of user feedback in the Exit scene.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>


    private DataController dataController;
    public AudioClip buttonClickSound;
    private AudioSource source;

    // ********************************************************************** //

    private void Awake()
    {
        source = GetComponent<AudioSource>();
    }

    // ********************************************************************** //

    private void Start()
    {
        dataController = FindObjectOfType<DataController>(); // Fetch our single DataController
    }

    // ********************************************************************** //

    public void OnClick()
    {
        source.PlayOneShot(buttonClickSound,1F);
    }

    // ********************************************************************** //

    public void CollectFeedbackFromInput(string feedback)
    {
        if (dataController != null) 
        { 
            dataController.SetParticipantFeedback(feedback);  // Send participant feedback data to the DataController
        }
    }

    // ********************************************************************** //

}
