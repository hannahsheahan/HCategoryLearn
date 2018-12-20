using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HideOrDisplayReward : MonoBehaviour {

	public GameObject reward;
    public int rewardIndex;
   
	private void Update()
    {
        // Display or hide the reward location
        switch (rewardIndex)
        {
            case 1:
                // this can be reward-specific, but a better way to do this is to pass the rewardIndex into the GameController reveal function
                reward.SetActive(GameController.control.cueVisible);
                break;

            default:
                reward.SetActive(GameController.control.cueVisible);
                break;
        }
    }
}
