//Attach this script to an Image GameObject and set its Source Image to the Sprite you would like.
//Press the space key to change the Sprite. Remember to assign a second Sprite in this script's section of the Inspector.

using UnityEngine;
using UnityEngine.UI;

public class StimulusCueManager : MonoBehaviour
{

    /// <summary>
    /// This script manages which images to display for different stimulus keywords that are specified by ExperimentConfig.cs trials.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: December 2018
    /// </summary>


    public Image cueImage;
    public bool isBackground = true;

    //Set these in the Inspector
    public Sprite backgroundCircle;
    public Sprite wineImage;
    public Sprite cheeseImage;
    public Sprite martiniImage;
    public Sprite avocadoImage;
    public Sprite icecreamImage;
    public Sprite bananaImage;
    public Sprite questionIconImage;
    private string cue;

    // ********************************************************************** //

    void Start()
    {
        //Fetch the Image from the GameObject
        cueImage = GetComponent<Image>();
        cueImage.enabled = false; 
    }

    // ********************************************************************** //

    void Update()
    {
        // dont display a visual cue

        /*
        if ( GameController.control.displayCue )
        {
            cue = GameController.control.trialStimulus;

            if (isBackground)
            {
                cueImage.sprite = backgroundCircle;
            }
            else 
            { 
                switch (cue)
                {
                    case "wine":
                        cueImage.sprite = wineImage;
                        break;
                    case "cheese":
                        cueImage.sprite = cheeseImage;
                        break;
                    case "martini":
                        cueImage.sprite = martiniImage;
                        break;
                    case "avocado":
                        cueImage.sprite = avocadoImage;
                        break;
                    case "icecream":
                        cueImage.sprite = icecreamImage;
                        break;
                    case "banana":
                        cueImage.sprite = bananaImage;
                        break;
                    case "questionIcon":
                        cueImage.sprite = questionIconImage;
                        break;
                }
            }
            cueImage.enabled = true;
        }
        else
        {
            cueImage.enabled = false;
        }
        */
    }

    // ********************************************************************** //

}