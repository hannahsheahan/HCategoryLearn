using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnterFeedbackScript : MonoBehaviour {

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
