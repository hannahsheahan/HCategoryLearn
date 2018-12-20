using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AskQuestionScript : MonoBehaviour {

    /// <summary>
    /// This script determines which question to ask the player on this trial.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>

    public Text QuestionText;

    // ********************************************************************** //

    void Update () 
    {
        // Note: can modulate when this is visible using a GameController.cs controlled flag if you want

        //if (GameController.control.State >= GameController.STATE_STARTTRIAL)  // display the Q the whole trial
        // display question while stimulus is visible
        if (GameController.control.displayCue)
        {
            QuestionText.text = GameController.control.trialQuestion;
        }
        else 
        {
            QuestionText.text = "";
         }
    }

    // ********************************************************************** //
}
