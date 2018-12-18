using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChoiceMadeScript : MonoBehaviour
{
    public AudioClip buttonClickSound;
    private AudioSource source;

    public Outline outlineRed;
    public Outline outlineGreen;
    public string choice;


    // ********************************************************************** //

    private void Awake()
    {
        source = GetComponent<AudioSource>();
        outlineGreen.enabled = false;
        outlineRed.enabled = false;
    }

    // ********************************************************************** //

    private void Update()
    {
        // flash the outline colour around the button depending on whether it was the correct selection or not

        if (GameController.control.State == GameController.STATE_FEEDBACK) 
        {
            if (GameController.control.whichChoiceMade == choice) // this button was the chosen one
            { 
                if (GameController.control.flashColourFeedback) 
                { 
                    if (GameController.control.correctChoiceMade)     // turn on the colour feedback
                    {
                        outlineRed.enabled = false;
                        outlineGreen.enabled = true;
                    }
                    else 
                    {
                        outlineRed.enabled = true;
                        outlineGreen.enabled = false;
                    }
                }
                else 
                {
                    outlineRed.enabled = false;
                    outlineGreen.enabled = false;
                }
            }
        }
    }

    // ********************************************************************** //

    public void SubmitChoiceOnClick()
    {
        source.PlayOneShot(buttonClickSound, 1F);
        GameController.control.SubmitChoice(choice); // Continue to the before starting page 
    }
}
