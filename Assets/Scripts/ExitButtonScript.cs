using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitButtonScript : MonoBehaviour
{
    /// <summary>
    /// ***Note that this script is now obsolete - not being used.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: October 2018
    /// </summary>


    public AudioClip buttonClickSound;
    private AudioSource source;

     // ********************************************************************** //

    private void Awake()
    {
        source = GetComponent<AudioSource>();
    }

    // ********************************************************************** //

    public void ExitGameOnClick()
    {
            source.PlayOneShot(buttonClickSound, 1F);
            GameController.control.ExitGame();   // Exit the application
    }

}
