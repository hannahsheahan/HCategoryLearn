using UnityEngine;
using UnityEngine.UI;

public class RestBreakProgress : MonoBehaviour {
   
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