using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterParticipantIDScript : MonoBehaviour {

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
