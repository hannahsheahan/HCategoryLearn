using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TotalScoreUpdateScript : MonoBehaviour {

    public Text TotalScore;
    public Text ScoreUpdate;
    private int currentTotalScore;
    private int trialScore;

    // ********************************************************************** //

    void Update () 
    {
        currentTotalScore = GameController.control.totalScore;
        TotalScore.text = currentTotalScore.ToString();

        // When the total score updates make it flash cyan
        if (GameController.control.flashTotalScore)
        {
            // show how much the score will be updated by
            ScoreUpdate.color = Color.white;
            ScoreUpdate.fontSize = 18;

            trialScore = GameController.control.trialScore;
            if (trialScore>=0)
            {
                ScoreUpdate.text = "+" + trialScore.ToString();

                TotalScore.color = Color.cyan;  // flash cyan since +ve update
                TotalScore.fontSize = 36;
            }
            else
            {
                ScoreUpdate.text = trialScore.ToString();

                TotalScore.color = Color.red;  // flash red since -ve update
                TotalScore.fontSize = 36;
            }

        }
        else
        {
            TotalScore.color = Color.white;
            TotalScore.fontSize = 26;

            ScoreUpdate.text = "";
        }
    }

}
