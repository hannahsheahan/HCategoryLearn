using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterParticipantIDScript : MonoBehaviour {

    /// <summary>
    /// This script handles the input of user information in the StartScreen scene.
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

    public void CollectParticipantIDFromInput(string ID)
    {
        dataController.SetParticipantID(ID);  // Send participant data to the DataController
    }

    // ********************************************************************** //

    public void CollectParticipantAgeFromInput(string age)
    {
        // convert string to numerical age
        //int numericalAage = int.TryParse(age, );
        dataController.SetParticipantAge(age);  // Send participant data to the DataController
    }

}
