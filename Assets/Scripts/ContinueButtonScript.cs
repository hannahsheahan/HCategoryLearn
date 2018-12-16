using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContinueButtonScript : MonoBehaviour
{
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

    public void FullScreenOnTriggerDown()
    {
        // make the game fullscreen (should work even in web browser, if using Chrome or Firefox)
        Screen.fullScreen = true;
    }

    // ********************************************************************** //

    public void ContinueOnClick()
    {
        source.PlayOneShot(buttonClickSound, 1F);
        GameController.control.ContinueToNextMenuScreen(); // Continue to the before starting page 
    }

    // ********************************************************************** //

    public void ContinueToInstructionsOnClick()
    {
        if ( (dataController.participantIDSet && dataController.participantAgeSet) && dataController.participantGenderSet)  // the player has entered a name (this will avoid multiple datafiles with no participant ID number)
        {
            source.PlayOneShot(buttonClickSound, 1F);
            GameController.control.ContinueToNextMenuScreen(); // Continue to the instructions page 
        }
    }

    // ********************************************************************** //

    public void StartGameOnClick()
    {
        source.PlayOneShot(buttonClickSound, 1F);
        GameController.control.StartGame();   // Launch first real trial
    }
}
