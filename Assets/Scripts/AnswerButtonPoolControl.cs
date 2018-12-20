using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AnswerButtonPoolControl : MonoBehaviour {

    /// <summary>
    /// This is a script to manage object pooling for the answer buttons, which are dynamically generated.
    /// This has been written with considerable guidance from the (linked below) Unity tutorial on building a quiz game.
    /// 
    /// Notes: This is my first attempt at using object pooling, so it may be a little inelegant. 
    ///        Yes it would be more elegant to have this within TrialSetup() in GameController.cs, but Inspector references are needed to the answer panel.
    /// 
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com; Unity tutorial: https://unity3d.com/learn/tutorials/topics/scripting/click-answer?playlist=17117
    /// Date: 20/12/2018
    /// </summary>
    /// 
    private List<GameObject> answerButtonGameObjects = new List<GameObject>();
    public SimpleObjectPool answerButtonObjectPool;
    public Transform answerButtonParent;

    private int currentState;
    private int mostRecentState;

    // ********************************************************************** //

    private void Start()
    {
        mostRecentState = GameController.STATE_STARTSCREEN;
    }

    // ********************************************************************** //

    void Update() 
    {
        currentState = GameController.control.State;

        // As soon as we transition into STATE_STARTTRIAL, populate the buttons. TrialSetup() will have loaded the trial data.
        if ((currentState != mostRecentState) && currentState == GameController.STATE_STARTTRIAL)
        {
            SetupAnswerButtons();   // Note: this should happen just once per trial attempt
        }
        mostRecentState = currentState;
    }

    // ********************************************************************** //

    private void SetupAnswerButtons() 
    { 

        // Remove old buttons and load new answer buttons
        RemoveAnswerButtons();                              // send old answer button objects back to object pool

        // This will create an extra button for each possible answer
        for (int i =0; i < GameController.control.trialPossibleAnswers.Length; i++) 
        {
            GameObject answerButtonGameObject = answerButtonObjectPool.GetObject();
            answerButtonGameObject.transform.SetParent(answerButtonParent);
            answerButtonGameObjects.Add(answerButtonGameObject);

            AnswerButton answerButton = answerButtonGameObject.GetComponent<AnswerButton>();
            answerButton.Setup(GameController.control.trialPossibleAnswers[i]);
        }
    }

    // ********************************************************************** //

    public void RemoveAnswerButtons()
    {
        while (answerButtonGameObjects.Count > 0)
        {
            // send object back to object pool to be reused
            answerButtonObjectPool.ReturnObject(answerButtonGameObjects[0]);
            answerButtonGameObjects.RemoveAt(0);
        }
    }

    // ********************************************************************** //
}
