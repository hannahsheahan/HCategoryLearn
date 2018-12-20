//Attach this script to an Image GameObject and set its Source Image to the Sprite you would like.
//Press the space key to change the Sprite. Remember to assign a second Sprite in this script's section of the Inspector.

using UnityEngine;
using UnityEngine.UI;

public class StimulusCueManager : MonoBehaviour
{
    public Image cueImage;
    public bool isBackground = true;

    //Set these in the Inspector
    public Sprite backgroundCircle;
    public Sprite wineImage;
    public Sprite cheeseImage;
    public Sprite martiniImage;
    public Sprite avocadoImage;
    public Sprite icecreamImage;
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
                }
            }
            cueImage.enabled = true;
        }
        else
        {
            cueImage.enabled = false;
        }
    }

    // ********************************************************************** //

}