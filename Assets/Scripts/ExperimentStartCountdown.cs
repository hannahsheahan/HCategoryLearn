using UnityEngine;
using UnityEngine.UI;

public class ExperimentStartCountdown : MonoBehaviour {

    /// <summary>
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>


    public Text ProgressIndicator;
    public Image LoadingBar;
    private float elapsedTime;
    private float currentValue;
    private int secondsLeft;

    // ********************************************************************** //

    void Start () 
    {
        currentValue = 0.0f;
    }

    // ********************************************************************** //

    void Update () {

        elapsedTime = GameController.control.getReadyTime;

        currentValue = elapsedTime / GameController.control.getReadyDuration;
        secondsLeft = (int)Mathf.Round((GameController.control.getReadyDuration - elapsedTime));
        if (currentValue < 100) 
        {       
             ProgressIndicator.text = (secondsLeft).ToString();
        }
        LoadingBar.fillAmount = currentValue; 
    }
    // ********************************************************************** //

}