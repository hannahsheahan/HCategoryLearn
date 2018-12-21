using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenMessageScript : MonoBehaviour {

    /// <summary>
    /// This script just writes the text specified by the GameController to the centre of the screen.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: November 2018
    /// </summary>


    public Text screenMessage;
	
	void Update () 
    {
        // update the text gameobject's message in-line with the FSM
        screenMessage.fontSize = 20;
        screenMessage.text = GameController.control.textMessage;
    }
}
