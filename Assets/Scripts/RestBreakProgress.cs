using UnityEngine;
using UnityEngine.UI;

public class RestBreakProgress : MonoBehaviour {

    /// <summary>
    /// This script creates a pretty progress wheel for counting down the time left on a restbreak.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: November 2018
    /// </summary>


    public Text ProgressIndicator;
    public Image LoadingBar;
    private float currentValue;
    private int secondsLeft;

    // ********************************************************************** //

    void Start () 
    {
        currentValue = 0;
    }

    // ********************************************************************** //

    void Update () {

        currentValue = GameController.control.elapsedRestbreakTime / GameController.control.restbreakDuration;
        secondsLeft = (int)Mathf.Round((GameController.control.restbreakDuration - GameController.control.elapsedRestbreakTime));
        if (currentValue < 100) 
        {
            ProgressIndicator.text = (secondsLeft).ToString();
        }
        LoadingBar.fillAmount = currentValue; 
    }
    // ********************************************************************** //

}