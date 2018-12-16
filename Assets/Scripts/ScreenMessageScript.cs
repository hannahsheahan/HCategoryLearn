using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScreenMessageScript : MonoBehaviour {

    public Text screenMessage;
	
	void Update () 
    {
        // update the text gameobject's message in-line with the FSM
        screenMessage.fontSize = 36;
        screenMessage.text = GameController.control.textMessage;
    }
}
