using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TotalScoreUpdateScript : MonoBehaviour {

    /// <summary>
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: November 2018
    /// </summary>

    public Text TotalScore;
    public Text ScoreUpdate;
    private int currentTotalScore;
    private int trialScore;
    private Color colr;
    // ********************************************************************** //

    void Update () 
    {
        currentTotalScore = GameController.control.totalScore;
        TotalScore.text = currentTotalScore.ToString();

        // When the total score updates make it flash cyan
        if (GameController.control.flashTotalScore)
        {
            // show how much the score will be updated by
            colr = Color.white;
            colr.a = 0.6f;
            ScoreUpdate.color = colr;
            ScoreUpdate.fontSize = 18;

            trialScore = GameController.control.trialScore;
            if (trialScore>=0)
            {
                ScoreUpdate.text = "+" + trialScore.ToString();

                colr = Color.cyan;
                colr.a = 0.7f;
                TotalScore.color = colr;  // flash cyan since +ve update
                TotalScore.fontSize = 34;
            }
            else
            {
                ScoreUpdate.text = trialScore.ToString();

                colr = Color.red;
                colr.a = 0.7f;
                TotalScore.color = colr;  // flash red since -ve update
                TotalScore.fontSize = 34;
            }
        }
        else
        {
            colr = Color.white;
            colr.a = 0.6f;
            TotalScore.color = colr;
            TotalScore.fontSize = 22;

            ScoreUpdate.text = "";
        }
    }

}
