using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;


public class ExperimentConfig
{
    /// <summary>
    /// This script contains all the experiment configuration details
    /// e.g. experiment type, trial numbers, ordering and randomisation, trial start and end locations. 
    /// This is a simplified, general purpose version for creating different behavioural experiments in Unity.
    /// Notes:  - Variables should eventually be turned private. Some currently public for ease of communication with DataController.
    ///         - Note that eventually the menu scenes could be assembled into a single scene, which would require small alterations to this script. Unimportant development not on immediate horizon.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 08/11/2018
    /// </summary>


    // Scenes/mazes
    private const int setupAndCloseTrials = 7;     // Note: there must be 7 extra trials in trial list to account for Persistent, InformationScreen, BeforeStartingScreen, ConsentScreen, StartScreen, Instructions and Exit 'trials'.
    private const int restbreakOffset = 1;         // Note: makes specifying restbreaks more intuitive
    private const int getReadyTrial = 1;           // Note: this is the get ready screen after the practice
    private const int setupTrials = setupAndCloseTrials - 1;
    private int totalTrials;
    private int practiceTrials;
    private int restFrequency;
    private int nbreaks;
    private string[] trialMazes;
    private string[] possibleMazes;               
    private int sceneCount;
    private int blockLength;

    // Timer variables (currently public since few things go wrong if these are changed externally, since these are tracked in the data, but please don't change these externally...)
    public float maxResponseTime;
    public float preDisplayCueTime;
    public float finalGoalHitPauseTime;
    public float displayCueTime;
    public float goCueDelay;
    public float displayMessageTime;
    public float errorDwellTime;
    public float restbreakDuration;
    public float getReadyDuration;
    public float pausePriorFeedbackTime;
    public float feedbackFlashDuration;
    private float dataRecordFrequency;       // NOTE: this frequency is referred to in TrackingScript.cs for player data and here for state data

    // Randomisation of trial sequence
    public System.Random rand = new System.Random();

    // Question and answer data
    public QuestionData[] trialQuestionData;                              // final order of questions we WILL include
    public List<QuestionData> allQuestions = new List<QuestionData>();    // all possible questions that we could include

    // Preset experiments
    public string experimentVersion;
    private int nExecutedTrials; 
               
    // ********************************************************************** //
    // Use a constructor to set this up
    public ExperimentConfig()
    {
        //experimentVersion = "mturk_learnpilot";
        experimentVersion = "micro_debug";
        //experimentVersion = "singleblock_labpilot";


        // Set these variables to define your experiment:
        switch (experimentVersion)
        {
            case "mturk_learnpilot":       // ----Full 4 block learning experiment-----
                practiceTrials = 2 + getReadyTrial;
                nExecutedTrials = 16 * 4;
                totalTrials = nExecutedTrials + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 16 + restbreakOffset;                               // Take a rest after this many normal trials
                restbreakDuration = 30.0f;                                          // how long are the imposed rest breaks?
                blockLength = 16;
                break;

            case "singleblock_labpilot":   // ----Mini 1 block test experiment-----
                practiceTrials = 1 + getReadyTrial;
                nExecutedTrials = 16;
                totalTrials = nExecutedTrials + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 20 + restbreakOffset;                          // Take a rest after this many normal trials
                restbreakDuration = 5.0f;                                        // how long are the imposed rest breaks?
                blockLength = 16;
                break;

            case "micro_debug":            // ----Mini debugging test experiment-----
                practiceTrials = 1 + getReadyTrial;
                nExecutedTrials = 5;                                         // note that this is only used for the micro_debug version
                totalTrials = nExecutedTrials + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 5 + restbreakOffset;                            // Take a rest after this many normal trials
                restbreakDuration = 5.0f;                                       // how long are the imposed rest breaks?
                blockLength = nExecutedTrials;
                break;

            default:
                Debug.Log("Warning: defining an untested trial sequence");
                break;
        }

        if (restFrequency - restbreakOffset < blockLength)
        {
            Debug.Log("Warning: rest breaks not allocated properly in trial sequence");
        }

        // Figure out how many rest breaks we will have and add them to the trial list
        nbreaks = Math.Max((int)((totalTrials - setupAndCloseTrials - practiceTrials) / restFrequency), 0);  // round down to whole integer
        totalTrials = totalTrials + nbreaks;

        // Timer variables (measured in seconds) - these can later be changed to be different per trial for jitter etc
        dataRecordFrequency = 0.06f;
        getReadyDuration = 5.0f;                      // how long we have to 'get ready' after the practice, before main experiment begins

        // Note that when used, jitters ADD to these values - hence they are minimums. See GameController for the usage/meaning of these variables.
        maxResponseTime   = 15.0f;                 
        preDisplayCueTime = 1.0f;               
        displayCueTime    = 2.0f;
        goCueDelay        = 1.5f;                      
        finalGoalHitPauseTime  = 0.2f;           
        displayMessageTime     = 1.5f;
        errorDwellTime         = 1.5f;                // Note: should be at least as long as displayMessageTime
        pausePriorFeedbackTime = 0.0f;
        feedbackFlashDuration  = 0.2f;                // duration that colour button feedback is shown for

        // Allocate space for the ordered questions, answers and associated stimuli
        trialMazes = new string[totalTrials];
        trialQuestionData = new QuestionData[totalTrials];
        for (int i=0; i < totalTrials; i++) 
        {
            trialQuestionData[i] = new QuestionData(0);
        }

        // Generate a list of all the possible (player or star) spawn locations
        GeneratePossibleSettings();

        // Define the start up menu and exit trials.   Note:  the other variables take their default values on these trials
        trialMazes[0] = "Persistent";
        trialMazes[1] = "InformationScreen";
        trialMazes[2] = "BeforeStartingScreen";
        trialMazes[3] = "ConsentScreen";
        trialMazes[4] = "StartScreen";
        trialMazes[5] = "InstructionsScreen";
        trialMazes[setupTrials + practiceTrials - 1] = "GetReady";
        trialMazes[totalTrials - 1] = "Exit";

        // Add in the practice trials
        AddPracticeTrials();

        // Generate the trial randomisation/list that we want.   Note: Ensure this is aligned with the total number of trials
        int nextTrial = System.Array.IndexOf(trialMazes, null);

        // Define the full trial sequence
        switch (experimentVersion)
        {
            case "mturk_learnpilot":       // ----Full 4 block learning experiment-----

                //---- training block 1
                nextTrial = AddTrainingBlock(nextTrial, blockLength);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 2
                nextTrial = AddTrainingBlock(nextTrial, blockLength);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 3
                nextTrial = AddTrainingBlock(nextTrial, blockLength);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 4
                nextTrial = AddTrainingBlock(nextTrial, blockLength);

                break;

            case "singleblock_labpilot":   // ----Mini 1 block test experiment-----
                //---- training block 1
                nextTrial = AddTrainingBlock(nextTrial, blockLength);
                break;

            case "micro_debug":            // ----Mini debugging test experiment-----
                nextTrial = AddTrainingBlock(nextTrial, blockLength);
                break;

            default:
                Debug.Log("Warning: defining an untested trial sequence");
                break;
        }

        // For debugging: print out the final trial sequence in readable text to check it looks ok
        //PrintTrialSequence();
    }

    // ********************************************************************** //

    private void PrintTrialSequence()
    {
        // This function is for debugging/checking the final trial sequence by printing to console
        for (int trial = 0; trial < totalTrials; trial++)
        {
            Debug.Log("Trial " + trial + ", Maze: " + trialMazes[trial] + ", Stimulus: " + trialQuestionData[trial].stimulus);
            Debug.Log("--------");
        }
    }

    // ********************************************************************** //

    private void AddPracticeTrials()
    {
        // Add in the practice/familiarisation trials
        for (int trial = setupTrials; trial < setupTrials + practiceTrials - 1; trial++)
        {
            SetTrial(trial, allQuestions[rand.Next(allQuestions.Count)]);      // for now just give a random trial for practice
            trialMazes[trial] = "Practice";                                    // reset the maze for a practice trial
        }
    }

    // ********************************************************************** //

    private void GeneratePossibleSettings()
    {
        SetPossibleQuestions();

        // Get all the possible mazes/scenes in the build that we can work with
        sceneCount = SceneManager.sceneCountInBuildSettings;
        possibleMazes = new string[sceneCount];
        for (int i = 0; i < sceneCount; i++)
        {
            possibleMazes[i] = Path.GetFileNameWithoutExtension(SceneUtility.GetScenePathByBuildIndex(i));
        }
    }

    // ********************************************************************** //

    private int RestBreakHere(int firstTrial)
    {
        // Insert a rest break here and move to the next trial in the sequence
        trialMazes[firstTrial] = "RestBreak";
        return firstTrial + 1;
    }

    // ********************************************************************** //

    private int AddTrainingBlock(int nextTrial, int numberOfTrials)
    {
        // Note that we can use the below function (which shuffles over all bracketed trials), to shuffle subsets of trials, or shuffle within a context etc
        nextTrial = ShuffleTrialOrderAndStoreBlock(nextTrial, numberOfTrials);
        return nextTrial;
    }

    // ********************************************************************** //

    private void SetTrial(int trial, QuestionData questionData)
    {
        // This function writes the trial number indicated by the input variable 'trial'.

        // Check that we've inputted a valid trial number
        if ((trial < setupTrials - 1) || (trial == setupTrials - 1))
        {
            Debug.Log("Trial randomisation failed: cannot write to invalid trial number.");
        }
        else
        {
            // Write the question, answers, stimulus and scene
            trialQuestionData[trial] = questionData; 
            trialMazes[trial] = "MainTrial";
        }
    }

    // ********************************************************************** //

    private void SetPossibleQuestions()
    {
        // This function creates a list of possible questions (and answers) from which to generate trials.
        // Each possible question comes with several options for selectable answers, as well as a correct answer. 
        // This creates a list of (Q,PA,A) for all questions. This list is later shuffled appropriately to allocate trials to a sequence.

        // Notes: - add as many questions here as you like. 
        //        - Randomisation will reorder these and offer repeats if you haven't specified enough unique trials.

        // ---- Question ---
        QuestionData questiondata = new QuestionData(3);  // Note: input specifies number of possible answers (buttons) for this Q

        questiondata.questionText = "Is this game fun and all things good?";
        questiondata.stimulus = "questionIcon";
        questiondata.answers[0].answerText = "Na it sucks";
        questiondata.answers[1].answerText = "It's ok, I guess";
        questiondata.answers[2].answerText = "Yes!";
        questiondata.answers[2].isCorrect = true;
        allQuestions.Add(questiondata);

        // ---- Question ---
        questiondata = new QuestionData(2); 

        questiondata.questionText = "Is this a bird?";
        questiondata.stimulus = "icecream";
        questiondata.answers[0].answerText = "Yes";
        questiondata.answers[1].answerText = "No";
        questiondata.answers[1].isCorrect = true;
        allQuestions.Add(questiondata);

        // ---- Question ---
        questiondata = new QuestionData(2); 

        questiondata.questionText = "Is this a cheese?";
        questiondata.stimulus = "cheese";
        questiondata.answers[0].answerText = "Yes";
        questiondata.answers[1].answerText = "No";
        questiondata.answers[0].isCorrect = true;
        allQuestions.Add(questiondata);

        // ---- Question ---
        questiondata = new QuestionData(2);

        questiondata.questionText = "Are you thinking what I'm thinking, B1?";
        questiondata.stimulus = "banana";
        questiondata.answers[0].answerText = "No";
        questiondata.answers[1].answerText = "I think I am, B2";
        questiondata.answers[1].isCorrect = true;
        allQuestions.Add(questiondata);

        // ---- Question ---
        questiondata = new QuestionData(5);

        questiondata.questionText = "How many avocado-toasts does a house cost?";
        questiondata.stimulus = "avocado";
        questiondata.answers[0].answerText = "1";
        questiondata.answers[1].answerText = "10";
        questiondata.answers[2].answerText = "100";
        questiondata.answers[3].answerText = "1000";
        questiondata.answers[4].answerText = ": (";
        questiondata.answers[4].isCorrect = true;
        allQuestions.Add(questiondata);

    }

    // ********************************************************************** //

    public int ShuffleTrialOrderAndStoreBlock(int firstTrial, int blockLength)
    {
        // This function shuffles the prospective trials from firstTrial to firstTrial+blockLength and stores them.

        bool randomiseOrder = true;
        int n = allQuestions.Count;
        QuestionData questionData;

        // first check that we have specified enough possible questions for generating all-unique trials in this block 
        if (allQuestions.Count < blockLength) 
        {
            Debug.Log("Warning: we have not specified enough unique trials to fill this block. Trials will repeat.");
        }

        if (randomiseOrder)
        {
            // Perform the Fisher-Yates algorithm for shuffling array elements in place 
            for (int i = 0; i < n; i++)
            {
                int k = i + rand.Next(n - i); // select random index in array, less than n-i

                // shuffle questions to ask, keeping their associated data together
                QuestionData oneQuestion = allQuestions[k];
                allQuestions[k] = allQuestions[i];
                allQuestions[i] = oneQuestion;
            }
        }

        // Store the randomised trial order (reuse random trials if we haven't specified enough unique ones)
        for (int i = 0; i < blockLength; i++)
        {
            if (i < n) 
            {
                questionData = allQuestions[i];
            }
            else     // randomly select a trial to be repeated in the trial sequence
            {
                questionData = allQuestions[rand.Next(allQuestions.Count)];
            }
            SetTrial(i + firstTrial, questionData);
        }

        return firstTrial + blockLength;
    }

    // ********************************************************************** //

    public float JitterTime(float time)
    {
        // Note: currently unused and untested
        // jitter uniform-randomly from the min value, to 50% higher than the min value
        return time + (0.5f*time)* (float)rand.NextDouble();
    }

    // ********************************************************************** //
    // Get() and Set() Methods
    // ********************************************************************** //

    public int GetTotalTrials()
    {
        return totalTrials;
    }

    // ********************************************************************** //

    public float GetDataFrequency()
    {
        return dataRecordFrequency;
    }

    // ********************************************************************** //

    public string GetTrialMaze(int trial)
    {
        return trialMazes[trial];
    }

    // ********************************************************************** //

    public string GetStimulus(int trial)
    {
        return trialQuestionData[trial].stimulus;
    }

    // ********************************************************************** //

    public string[] GetPossibleAnswers(int trial) 
    {
        string[] answerTexts = new string[trialQuestionData[trial].answers.Length];

        for (int i = 0; i < answerTexts.Length; i++) 
        {
            answerTexts[i] = trialQuestionData[trial].answers[i].answerText;
        }

        return answerTexts;
    }

    // ********************************************************************** //

    public string GetAnswer(int trial)
    {
        int nPossibleAnswers;
        string answer = "";
        nPossibleAnswers = trialQuestionData[trial].answers.Length;

        for (int i = 0; i < nPossibleAnswers; i++) 
        { 
            if (trialQuestionData[trial].answers[i].isCorrect) 
            {
                answer = trialQuestionData[trial].answers[i].answerText;
            }
        }
        return answer;
    }

    // ********************************************************************** //

    public string GetQuestion(int trial)
    {
        return trialQuestionData[trial].questionText;
    }

    // ********************************************************************** //

}