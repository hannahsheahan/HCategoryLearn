using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class QuestionData
{
    /// <summary>
    /// This class is for holding data pertaining to a particular question to be asked
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 19/12/2018
    /// </summary>

    public string questionText="";
    public string stimulus="";
    public AnswerData[] answers;

    // ********************************************************************** //
    // Use a constructor
    public QuestionData(int numberOfAnswers)
    {
        //  initialize array of trials, and instantiate each trial in the array
        answers = new AnswerData[numberOfAnswers];
        for (int i = 0; i < answers.Length; i++)
        {
            answers[i] = new AnswerData();
        }
    }
}
