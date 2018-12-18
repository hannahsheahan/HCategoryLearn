using UnityEngine;
using System.Collections;
using UnityStandardAssets.Characters.FirstPerson;
using System.IO;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Linq;


public class RewardHitScript : MonoBehaviour
{
    private Timer starTimer;
    private bool starHit = false;
    public int rewardIndex;

    // ********************************************************************** //

    void Start()
    {
        starTimer = new Timer();
        starTimer.Reset();
    }

    // ********************************************************************** //

    void OnTriggerEnter(Collider other)
    {
        starTimer.Reset(); // record entry time
        starHit = true;
    }

    // ********************************************************************** //

    void OnTriggerExit(Collider other)
    {
        starHit = false;
    }

    // ********************************************************************** //

    void Update()
    {
        /*
        if ((starTimer.ElapsedSeconds() > GameController.control.minDwellAtReward) && (starHit))
        {
            GameController.control.StarFound();
            starHit = false;
            GameController.control.DisableRewardByIndex(rewardIndex);
        }
        */
    }
    // ********************************************************************** //

}
