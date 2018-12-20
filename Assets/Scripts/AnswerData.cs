using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class AnswerData 
{
    /// <summary>
    /// This class is for holding data pertaining to a particular possible answer,
    /// and will be nested inside QuestionData, the data for a particular question
    /// Author: Hannah Sheahan
    /// Date: 19/12/2018
    /// </summary>

    public string answerText;
    public bool isCorrect = false;

    // Note: we could also include the string name of an image here if we 
    // wanted an image stimulus to be part of the answer option

}
