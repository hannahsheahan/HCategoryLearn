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
    /// Notes:  variables should eventually be turned private. Some currently public for ease of communication with DataController.
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
    private string[] possibleMazes;                // the existing mazes/scenes that can be selected from
    private int sceneCount;
    private int roomSize;
    private float playerYposition;
    private float starYposition;

    // Positions and orientations
    private string[] starRooms;
    private Vector3[] possibleStarPositions;
    private Vector3[] starPositions;

    private Vector3[] blueRoomPositions;
    private Vector3[] redRoomPositions;
    private Vector3[] yellowRoomPositions;
    private Vector3[] greenRoomPositions;

    private Vector3[] bluePresentPositions;
    private Vector3[] redPresentPositions;
    private Vector3[] yellowPresentPositions;
    private Vector3[] greenPresentPositions;

    public Vector3[][] presentPositions;

    // Rewards
    private string[] possibleRewardTypes;
    private string[] rewardTypes;             // diamond or gold? (martini or beer)
    private string[] trialAnswers;            // correct answer
    private string[][] possibleTrialAnswers;  // options presented on each trial
    private string[] trialQuestions;

    public int numberPresentsPerRoom;

    // Timer variables (public since fewer things go wrong if these are changed externally, since this will be tracked in the data, but please don't...)
    public float maxResponseTime;
    public float preDisplayCueTime;
    public float goalHitPauseTime;
    public float finalGoalHitPauseTime;
    public float displayCueTime;
    public float goCueDelay;
    public float minDwellAtReward;
    public float displayMessageTime;
    public float errorDwellTime;
    public float restbreakDuration;
    public float getReadyDuration;
    public float pausePriorFeedbackTime;
    public float feedbackFlashDuration;
    private float dataRecordFrequency;       // NOTE: this frequency is referred to in TrackingScript.cs for player data and here for state data

    // Randomisation of trial sequence
    public System.Random rand = new System.Random();

    public List<string> possibleQuestions = new List<string>();
    public List<string[]> possibleOptions = new List<string[]>();
    public List<string> possibleCorrectAnswers = new List<string>();

    // Preset experiments
    public string experimentVersion;
    private int nExecutedTrials;            // to be used in micro_debug mode only
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
                totalTrials = 16 * 4 + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 16 + restbreakOffset;                               // Take a rest after this many normal trials
                restbreakDuration = 30.0f;                                          // how long are the imposed rest breaks?
                break;

            case "singleblock_labpilot":   // ----Mini 1 block test experiment-----
                practiceTrials = 1 + getReadyTrial;
                totalTrials = 16 + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 20 + restbreakOffset;                          // Take a rest after this many normal trials
                restbreakDuration = 5.0f;                                        // how long are the imposed rest breaks?
                break;

            case "micro_debug":            // ----Mini debugging test experiment-----
                practiceTrials = 1 + getReadyTrial;
                nExecutedTrials = 1;                                         // note that this is only used for the micro_debug version
                totalTrials = nExecutedTrials + setupAndCloseTrials + practiceTrials;        // accounts for the Persistent, StartScreen and Exit 'trials'
                restFrequency = 2 + restbreakOffset;                            // Take a rest after this many normal trials
                restbreakDuration = 5.0f;                                       // how long are the imposed rest breaks?
                break;

            default:
                Debug.Log("Warning: defining an untested trial sequence");
                break;
        }

        // Figure out how many rest breaks we will have and add them to the trial list
        nbreaks = Math.Max((int)((totalTrials - setupAndCloseTrials - practiceTrials) / restFrequency), 0);  // round down to whole integer
        totalTrials = totalTrials + nbreaks;

        // Timer variables (measured in seconds) - these can later be changed to be different per trial for jitter etc
        dataRecordFrequency = 0.04f;
        getReadyDuration = 5.0f;         // how long do we have to 'get ready' after the practice, before main experiment begins?

        // Note that when used, jitters ADD to these values - hence they are minimums
        maxResponseTime = 10.0f;         // time allowed to collect both rewards, incl. wait after hitting first one
        preDisplayCueTime = 1.5f;        // will take a TR during this period
        displayCueTime = 2.0f;
        goCueDelay = 1.5f;               // will take a TR during this period
        goalHitPauseTime = 1.0f;         // we will take a TR during this period
        finalGoalHitPauseTime = 2.0f;    // we will take a TR during this period (but should be independent of first goal hit time in case we want to jitter)
        minDwellAtReward = 0.1f;
        displayMessageTime = 1.5f;
        errorDwellTime = 1.5f;                // Note: should be at least as long as displayMessageTime
        pausePriorFeedbackTime = 0.5f;
        feedbackFlashDuration = 1.0f;         // duration that colour button feedback is shown for
        numberPresentsPerRoom = 4;

        // These variables define the environment (are less likely to be played with)
        roomSize = 5;           // rooms are each 5x5 grids. If this changes, you will need to change this code
        playerYposition = 72.5f;
        starYposition = 74.5f;

        // Define a maze, start and goal positions, and reward type for each trial
        trialMazes = new string[totalTrials];
        starRooms = new string[totalTrials];
        starPositions = new Vector3[totalTrials];
        rewardTypes = new string[totalTrials];
        trialAnswers = new string[totalTrials];
        trialQuestions = new string[totalTrials];
        possibleTrialAnswers = new string[totalTrials][];  // ***HRS to test this works

        presentPositions = new Vector3[totalTrials][];

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

        // Add in the practice trials in an open arena with little fog and no colour
        AddPracticeTrials();

        // Generate the trial randomisation/list that we want.   Note: Ensure this is aligned with the total number of trials
        int nextTrial = System.Array.IndexOf(trialMazes, null);

        // Define the full trial sequence
        switch (experimentVersion)
        {
            case "mturk_learnpilot":       // ----Full 4 block learning experiment-----

                //---- training block 1
                nextTrial = AddTrainingBlock(nextTrial);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 2
                nextTrial = AddTrainingBlock(nextTrial);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 3
                nextTrial = AddTrainingBlock(nextTrial);
                nextTrial = RestBreakHere(nextTrial);

                //---- training block 4
                nextTrial = AddTrainingBlock(nextTrial);

                break;

            case "singleblock_labpilot":   // ----Mini 1 block test experiment-----

                //---- training block 1
                nextTrial = AddTrainingBlock(nextTrial);
                break;

            case "micro_debug":            // ----Mini debugging test experiment-----

                // It can be useful to specify a miniature trial sequence for playing and debugging scenes
                nextTrial = AddTrainingBlock_micro(nextTrial, nExecutedTrials);
                break;

            default:
                Debug.Log("Warning: defining an untested trial sequence");
                break;
        }

        // For debugging: print out the final trial sequence in readable text to check it looks ok
        PrintTrialSequence();
    }

    // ********************************************************************** //

    private void PrintTrialSequence()
    {
        // This function is for debugging/checking the final trial sequence by printing to console
        for (int trial = 0; trial < totalTrials; trial++)
        {
            Debug.Log("Trial " + trial + ", Maze: " + trialMazes[trial] + ", Reward type: " + rewardTypes[trial]);
            Debug.Log("--------");
        }
    }

    // ********************************************************************** //

    private void AddPracticeTrials()
    {
        // Add in the practice/familiarisation trials in an open arena
        for (int trial = setupTrials; trial < setupTrials + practiceTrials - 1; trial++)
        {
            // just make the rewards on each side of the hallway/bridge
            if (trial % 2 == 0)
            {
                SetDoubleRewardTrial(trial, "cheese", "blue", "red", "yellow");
            }
            else
            {
                SetDoubleRewardTrial(trial, "cheese", "red", "green", "blue");
            }
            trialMazes[trial] = "Practice";   // reset the maze for a practice trial
        }
    }

    // ********************************************************************** //

    private string ChooseRandomRoom()
    {
        // Choose a random room of the four rooms
        string[] fourRooms = { "blue", "yellow", "red", "green" };
        int n = fourRooms.Length;
        int ind = rand.Next(n);   // Note: for some reason c# wants this stored to do randomisation, not directly input to fourRooms[rand.Next(n)]

        return fourRooms[ind];
    }

    // ********************************************************************** //

    private void GeneratePossibleSettings()
    {
        // Generate all possible spawn locations for player and stars
        possibleStarPositions = new Vector3[roomSize * roomSize * 4];
        blueRoomPositions = new Vector3[roomSize * roomSize];
        redRoomPositions = new Vector3[roomSize * roomSize];
        yellowRoomPositions = new Vector3[roomSize * roomSize];
        greenRoomPositions = new Vector3[roomSize * roomSize];

        // Blue room
        int startind = 0;
        float[] XPositionsblue = { 105.1f, 113.6f, 122.1f, 130.6f, 139.1f };
        float[] ZPositionsblue = { 93.3f, 101.8f, 110.3f, 118.8f, 127.3f };

        AddPossibleLocations(possibleStarPositions, startind, XPositionsblue, starYposition, ZPositionsblue);
        startind = startind + roomSize * roomSize;

        // Red room
        float[] XPositionsred = { 156f, 164.5f, 173f, 181.5f, 190f };
        float[] ZPositionsred = { 93.3f, 101.8f, 110.3f, 118.8f, 127.3f };

        AddPossibleLocations(possibleStarPositions, startind, XPositionsred, starYposition, ZPositionsred);
        startind = startind + roomSize * roomSize;

        // Green room
        float[] XPositionsgreen = { 156f, 164.5f, 173f, 181.5f, 190f };
        float[] ZPositionsgreen = { 144.3f, 152.8f, 161.3f, 169.8f, 178.3f };

        AddPossibleLocations(possibleStarPositions, startind, XPositionsgreen, starYposition, ZPositionsgreen);
        startind = startind + roomSize * roomSize;

        // Yellow room
        float[] XPositionsyellow = { 105.1f, 113.6f, 122.1f, 130.6f, 139.1f };
        float[] ZPositionsyellow = { 144.3f, 152.8f, 161.3f, 169.8f, 178.3f };

        AddPossibleLocations(possibleStarPositions, startind, XPositionsyellow, starYposition, ZPositionsyellow);

        // Add position arrays for locations in particular rooms
        startind = 0;
        AddPossibleLocations(blueRoomPositions, startind, XPositionsblue, starYposition, ZPositionsblue);
        AddPossibleLocations(redRoomPositions, startind, XPositionsred, starYposition, ZPositionsred);
        AddPossibleLocations(greenRoomPositions, startind, XPositionsgreen, starYposition, ZPositionsgreen);
        AddPossibleLocations(yellowRoomPositions, startind, XPositionsyellow, starYposition, ZPositionsyellow);

        // Get all the possible mazes/scenes in the build that we can work with
        sceneCount = SceneManager.sceneCountInBuildSettings;
        possibleMazes = new string[sceneCount];
        for (int i = 0; i < sceneCount; i++)
        {
            possibleMazes[i] = Path.GetFileNameWithoutExtension(SceneUtility.GetScenePathByBuildIndex(i));
        }

        // Possible reward types
        possibleRewardTypes = new string[] { "cheese" };  // if you want different contexts, use { "wine", "cheese" };
    }

    // ********************************************************************** //

    void AddPossibleLocations(Vector3[] locationVar, int startind, float[] xpositions, float yposition, float[] zpositions)
    {
        int ind = startind;
        for (int i = 0; i < roomSize; i++)
        {
            for (int j = 0; j < roomSize; j++)
            {
                locationVar[ind] = new Vector3(xpositions[i], yposition, zpositions[j]);
                ind++;
            }
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

    private int AddTrainingBlock(int nextTrial)
    {
        // Add a 16 trial training block to the trial list. Trials are randomised within each context, but not between contexts 

        if (rand.Next(2) == 0)   // randomise whether the wine or cheese sub-block happens first
        {
            nextTrial = SingleContextDoubleRewardBlock(nextTrial, "wine");
            nextTrial = SingleContextDoubleRewardBlock(nextTrial, "cheese");
        } else
        {
            nextTrial = SingleContextDoubleRewardBlock(nextTrial, "cheese");
            nextTrial = SingleContextDoubleRewardBlock(nextTrial, "wine");
        }
        return nextTrial;
    }

    // ********************************************************************** //

    private int AddTrainingBlock_micro(int nextTrial, int numberOfTrials)
    {
        // This can be useful for debugging
        nextTrial = DoubleRewardBlock_micro(nextTrial, "cheese", numberOfTrials);

        return nextTrial;
    }

    // ********************************************************************** //

    private int DoubleRewardBlock_micro(int firstTrial, string context, int blockLength)
    {
        // This is for use during testing and debugging only - it DOES NOT specify a full counterbalanced trial sequence
        // This function specifies the required trials in the block, and returns the next trial after this block

        string startRoom;
        int contextSide;

        string[] arrayContexts = new string[blockLength];
        string[] arrayStartRooms = new string[blockLength];
        int[] arrayContextSides = new int[blockLength];

        for (int i = 0; i < blockLength; i++)
        {
            // use a different start location for each trial
            switch (i % 4)
            {
                case 0:
                    startRoom = "yellow";
                    break;
                case 1:
                    startRoom = "green";
                    break;
                case 2:
                    startRoom = "red";
                    break;
                case 3:
                    startRoom = "blue";
                    break;
                default:
                    startRoom = "error";
                    Debug.Log("Start room specified incorrectly");
                    break;
            }

            contextSide = 1;  // ***HRS for now

            // Store trial setup in array, for later randomisation
            arrayContexts[i] = context;
            arrayStartRooms[i] = startRoom;
            arrayContextSides[i] = contextSide;
        }

        // Randomise the trial order and save it
        ShuffleTrialOrderAndStoreBlock(firstTrial, blockLength, arrayContexts, arrayStartRooms, arrayContextSides);

        return firstTrial + blockLength;
    }

    // ********************************************************************** //

    private int SingleContextDoubleRewardBlock(int firstTrial, string context)
    {
        // This function specifies the required trials in the block, and returns the next trial after this block
        // NOTE: Use this function if you want to 'block' by reward type

        string startRoom;
        int contextSide;
        int blockLength = 8; // Specify the next 8 trials

        string[] arrayContexts = new string[blockLength];
        string[] arrayStartRooms = new string[blockLength];
        int[] arrayContextSides = new int[blockLength];

        for (int i = 0; i < blockLength; i++)
        {
            // use a different start location for each trial
            switch (i % 4)
            {
                case 0:
                    startRoom = "yellow";
                    break;
                case 1:
                    startRoom = "green";
                    break;
                case 2:
                    startRoom = "red";
                    break;
                case 3:
                    startRoom = "blue";
                    break;
                default:
                    startRoom = "error";
                    Debug.Log("Start room specified incorrectly");
                    break;
            }

            if (blockLength % 2 != 0)
            {
                Debug.Log("Error: Odd number of trials specified per block. Specify even number for proper counterbalancing");
            }

            // switch the side of the room the rewards are located on for each context
            if (i < (blockLength / 2))
            {
                contextSide = 1;
            }
            else
            {
                contextSide = 2;
            }

            // Store trial setup in array, for later randomisation
            arrayContexts[i] = context;
            arrayStartRooms[i] = startRoom;
            arrayContextSides[i] = contextSide;
        }

        // Randomise the trial order and save it
        ShuffleTrialOrderAndStoreBlock(firstTrial, blockLength, arrayContexts, arrayStartRooms, arrayContextSides);

        return firstTrial + blockLength;
    }

    // ********************************************************************** //

    private void SetTrialInContext(int trial, string startRoom, string context, int contextSide)
    {
        // This function specifies the reward covariance
        // Note the variable 'contextSide' specifies whether the two rooms containing the reward will be located on the left or right of the environment
        // e.g. if cheese context: the y/b side, vs the g/r side. if wine context: the y/g side, vs the b/r side.

        bool trialSetCorrectly = false;

        switch (context)
        {
            case "cheese":

                if (contextSide == 1)
                {
                    SetDoubleRewardTrial(trial, context, startRoom, "yellow", "blue");
                    trialSetCorrectly = true;
                }
                else if (contextSide == 2)
                {
                    SetDoubleRewardTrial(trial, context, startRoom, "green", "red");
                    trialSetCorrectly = true;
                }
                break;

            case "wine":

                if (contextSide == 1)
                {
                    SetDoubleRewardTrial(trial, context, startRoom, "yellow", "green");
                    trialSetCorrectly = true;
                }
                else if (contextSide == 2)
                {
                    SetDoubleRewardTrial(trial, context, startRoom, "blue", "red");
                    trialSetCorrectly = true;
                }
                break;

            default:
                break;
        }

        if (!trialSetCorrectly)
        {
            Debug.Log("Something went wrong specifying the rooms affiliated with each context!");
        }
    }

    // ********************************************************************** //

    private void SetDoubleRewardTrial(int trial, string context, string startRoom, string rewardRoom1, string rewardRoom2)
    {
        // This function writes the trial number indicated by the input variable 'trial'.
        // Note: use this function within another that modulates context such that e.g. for 'cheese', the rooms for room1 and room2 reward are set

        // Check that we've inputted a valid trial number
        if ((trial < setupTrials - 1) || (trial == setupTrials - 1))
        {
            Debug.Log("Trial randomisation failed: invalid trial number input writing to.");
        }
        else
        {
            // Write the trial according to context and room/start locations
            rewardTypes[trial] = context;

            // Write the answer to the question
            trialAnswers[trial] = context;   // for now
            trialQuestions[trial] = "Question placeholder"; // for now


            // this is a double reward trial
            trialMazes[trial] = "MainTrial";

            // select random locations in rooms 1 and 2 for the two rewards (one in each)
            starRooms[trial] = rewardRoom1;

            // For a randomly selected reward location within each room
            starPositions[trial] = RandomPositionInRoom(rewardRoom1);

        }
    }

    // ********************************************************************** //

    private void SetPossibleQuestions()
    {
        // This function creates a list of possible questions (and answers) from which to generate trials.
        // Each possible question comes with several 'possible' option answers, as well as a correct answer. 
        // Each question-possible answers-actual answer tuple is associated through the same index.

        // Create lists of Q-PA-A for all questions, then loop through to allocate appropriately

        // ---- Question ---
        possibleQuestions.Add("Q: is this a bird?");
        // possibleOptions.Add({"Yes","No","Not sure"});
        possibleCorrectAnswers.Add("No");

        // ---- Question ---
        possibleQuestions.Add("Q: is this a cat?");
        // possibleOptions.Add({"Yes","No","Definitely not"});
        possibleCorrectAnswers.Add("Definitely not");

        // ---- Question ---
        possibleQuestions.Add("Q: is this a cheese?");
        // possibleOptions.Add({"Yes","No","Not sure"});
        possibleCorrectAnswers.Add("Yes");

 
    }

    // ********************************************************************** //

    private void RandomisePossibleQuestionsOrder() 
    {
        // This function will loop through all 'real' trials and allocate a random trial to each
        // ***HRS to compare to ShuffleTrialOrderAndStoreBlock() ordering.

    }

    // ********************************************************************** //

    private Vector3 RandomPositionInRoom(string roomColour)
    {
        // select a random position in a room of a given colour
        switch (roomColour)
        {
            case "blue":
                return blueRoomPositions[UnityEngine.Random.Range(0, blueRoomPositions.Length - 1)];

            case "red":
                return redRoomPositions[UnityEngine.Random.Range(0, redRoomPositions.Length - 1)];

            case "green":
                return greenRoomPositions[UnityEngine.Random.Range(0, greenRoomPositions.Length - 1)];
            
            case "yellow":
                return yellowRoomPositions[UnityEngine.Random.Range(0, yellowRoomPositions.Length - 1)];
            
            default:
                return new Vector3(0.0f, 0.0f, 0.0f);  // this should never happen
        }
    }

    // ********************************************************************** //

    public void ShuffleTrialOrderAndStoreBlock(int firstTrial, int blockLength, string[] arrayContexts, string[] arrayStartRooms, int[] arrayContextSides)
    {
        // This function shuffles the prospective trials from firstTrial to firstTrial+blockLength and stores them.
        // This has been checked and works correctly :)

        string startRoom;
        string context;
        int contextSide;
        bool randomiseOrder = true;
        int n = arrayContexts.Length;

        if (randomiseOrder)
        {
            // Perform the Fisher-Yates algorithm for shuffling array elements in place 
            // (use same sample for each of the 3 arrays to keep order aligned across arrays)
            for (int i = 0; i < n; i++)
            {
                int k = i + rand.Next(n - i); // select random index in array, less than n-i

                // shuffle contexts
                string tempContext = arrayContexts[k];
                arrayContexts[k] = arrayContexts[i];
                arrayContexts[i] = tempContext;

                // shuffle start room
                string tempRoom = arrayStartRooms[k];
                arrayStartRooms[k] = arrayStartRooms[i];
                arrayStartRooms[i] = tempRoom;

                // shuffle context side
                int tempContextSide = arrayContextSides[k];
                arrayContextSides[k] = arrayContextSides[i];
                arrayContextSides[i] = tempContextSide;
            }
        }
        // Store the randomised trial order
        for (int i = 0; i < n; i++)
        {
            startRoom = arrayStartRooms[i];
            context = arrayContexts[i];
            contextSide = arrayContextSides[i];
            SetTrialInContext(i + firstTrial, startRoom, context, contextSide);
        }
    }

    // ********************************************************************** //

    private void GenerateRandomTrialPositions(int trial)
    {
        // Generate a trial that randomly positions the player and reward/s
        starRooms[trial] = ChooseRandomRoom();
        starPositions[trial] = RandomPositionInRoom(starRooms[trial]);          // random star1 position in random room
    }

    // ********************************************************************** //

    private void RandomPlayerAndRewardPositions()
    {
        // This script is used for debugging purposes, to run the experiment without imposing a particular training scheme

        // This function generates trial content that randomly positions the player and reward/s in the different rooms
        int n = possibleRewardTypes.Length;
        int rewardInd;
        for (int trial = setupTrials + practiceTrials; trial < totalTrials - 1; trial++)
        {
            // Deal with restbreaks and regular trials
            if ((trial - setupTrials - practiceTrials + 1) % restFrequency == 0)  // Time for a rest break
            {
                trialMazes[trial] = "RestBreak";
            }
            else                                    // It's a regular trial
            {
                rewardInd = rand.Next(n);           // select a random reward type
                rewardTypes[trial] = possibleRewardTypes[rewardInd];
                trialAnswers[trial] = "placeholder";
                //trialMazes[trial] = "FourRooms_" + rewardTypes[trial];
                trialMazes[trial] = "MainTrial";
                GenerateRandomTrialPositions(trial);   // randomly position player start and reward/s locations
            }
        }
    }

    // ********************************************************************** //

    public float JitterTime(float time)
    {
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

    public Vector3 GetStarStartPosition(int trial)
    {
        return starPositions[trial];
    }

    // ********************************************************************** //

    public string GetRewardType(int trial)
    {
        return rewardTypes[trial];
    }

    // ********************************************************************** //

    public string GetAnswer(int trial) 
    {
        return trialAnswers[trial];
    }

    // ********************************************************************** //

    public string GetQuestion(int trial)
    {
        return trialQuestions[trial];
    }

    // ********************************************************************** //

    public string[] GetPossibleAnswers(int trial)
    {
        return possibleTrialAnswers[trial];
    }

    // ********************************************************************** //

}