using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AskQuestionScript : MonoBehaviour {

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
