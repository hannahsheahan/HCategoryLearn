using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnswerButton : MonoBehaviour
{
    /// <summary>
    /// This script handles the answer button clicks which select an answer, and tell the button to flash green or red.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>
     
    public AudioClip buttonClickSound;
    private AudioSource source;

    public Outline outlineRed;
    public Outline outlineGreen;
    public Text answerText;

    // ********************************************************************** //

    private void Awake()
    {
        source = GetComponent<AudioSource>();
        outlineGreen.enabled = false;
        outlineRed.enabled = false;
    }

    // ********************************************************************** //

    public void Setup(string text) 
    {
        answerText.text = text;
    }

    // ********************************************************************** //

    private void Update()
    {
        // flash the outline colour around the button depending on whether it was the correct selection or not

        if (GameController.control.State == GameController.STATE_FEEDBACK) 
        {
            if (GameController.control.whichChoiceMade == answerText.text) // this button was the chosen one
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
        GameController.control.SubmitChoice(answerText.text); // Submit the selected answer 
    }
}
