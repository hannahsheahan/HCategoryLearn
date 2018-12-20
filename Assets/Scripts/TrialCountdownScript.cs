using UnityEngine;
using UnityEngine.UI;

public class TrialCountdownScript : MonoBehaviour {

    /// <summary>
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: November 2018
    /// </summary>

    public Text CountdownTime;
    private float timeLeft;
    private int secondsLeft;

    // ********************************************************************** //

    void Update () {

        timeLeft = GameController.control.maxResponseTime - GameController.control.currentTickingTrialTime;
        secondsLeft = (int)Mathf.Round(timeLeft);
        if (GameController.control.displayTimeLeft) 
        {
            if (secondsLeft >= 0)
            {
                CountdownTime.text = (secondsLeft).ToString();
            }
        }
    }
    // ********************************************************************** //

}