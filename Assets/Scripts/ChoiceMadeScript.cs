using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChoiceMadeScript : MonoBehaviour
{
    private DataController dataController;

    public AudioClip buttonClickSound;
    private AudioSource source;

    public string choice;

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

    public void SubmitChoiceOnClick()
    {
        source.PlayOneShot(buttonClickSound, 1F);
        GameController.control.SubmitChoice(choice); // Continue to the before starting page 
    }
}
