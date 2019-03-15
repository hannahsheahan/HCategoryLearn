using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowSlider : MonoBehaviour
{

    /// <summary>
    /// This script determines which question to ask the player on this trial.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>

    public Slider confidenceSlider;
    public Text ConfidenceText;
    public Text highConfText;
    public Text lowConfText;
    public Button nextQuestionButton;

    // ********************************************************************** //
    private void Start()
    {
        confidenceSlider = GameObject.Find("confidenceSlider").GetComponent<Slider>();
        confidenceSlider.gameObject.SetActive(false);

        nextQuestionButton = GameObject.Find("nextQuestionButton").GetComponent<Button>();
        nextQuestionButton.gameObject.SetActive(false);
        nextQuestionButton.interactable = false;
    }

    // ********************************************************************** //

    void Update()
    {
        // Note: can modulate when this is visible using a GameController.cs controlled flag if you want

        //if (GameController.control.State >= GameController.STATE_STARTTRIAL)  // display the Q the whole trial
        // display question while stimulus is visible
        if (GameController.control.displayCue)
        { 
            if ((GameController.control.State != GameController.STATE_ERROR) && (GameController.control.State != GameController.STATE_PAUSE))
            {
                //Debug.Log("This is happening - active");
                confidenceSlider.gameObject.SetActive(true);
                ConfidenceText.text = "Confidence";
                highConfText.text = "Very high";
                lowConfText.text = "Very low";
                // make it so you can only click the nextQuestionButton once the slider and choice have been chosen
                if (GameController.control.sliderChoiceMade & GameController.control.choiceRecorded)
                {
                    nextQuestionButton.gameObject.SetActive(true);
                    nextQuestionButton.interactable = true;
                }
                else
                {
                    nextQuestionButton.gameObject.SetActive(true);
                    nextQuestionButton.interactable = false;
                }
            }
            else
            {
                //Debug.Log("This is happening - inactive");
                confidenceSlider.gameObject.SetActive(false);
                ConfidenceText.text = "";
                highConfText.text = "";
                lowConfText.text = "";
                nextQuestionButton.gameObject.SetActive(false);
            }


        }
    }

    // ********************************************************************** //

    public void RecordConfidenceOnSliderChange(float value)
    {
        //source.PlayOneShot(buttonClickSound, 1F);
        GameController.control.RecordSliderValue(value); // Submit the selected answer 
    }
    // ********************************************************************** //
}
