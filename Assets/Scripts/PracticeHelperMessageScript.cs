using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class PracticeHelperMessageScript : MonoBehaviour {

    // Only use this script on the Practice scene canvas
    // Note that we are doing this here instead of in GameController because of the text positioning

    public Text findItemBelowText;
    private string cue;

    // ********************************************************************** //

    void Update()
    {
        if (GameController.control.displayCue)
        {
            findItemBelowText.text = "Collect the item shown below";
        }
        else
        {
            findItemBelowText.text = "";
        }
    }

    // ********************************************************************** //

}