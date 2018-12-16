using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmitFeedbackButtonScript : MonoBehaviour
{
    private DataController dataController;

    public AudioClip buttonClickSound;
    private AudioSource source;

    // ********************************************************************** //

    private void Awake()
    {
        source = GetComponent<AudioSource>();
    }

    // ********************************************************************** //

    private void Start()
    {
        dataController = FindObjectOfType<DataController>(); // Fetch our single DataController
    }

    // ********************************************************************** //

    public void SubmitOnClick()
    {
        // require participants to write at least something before they can submit their response
        if (dataController.participantFeedbackGiven)
        {
            source.PlayOneShot(buttonClickSound, 1F);
            dataController.SubmitParticipantFeedback();         // Save the response to the datafile and reveal the code
        }
    }

}
