using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CelebrateBothRewardsHit : MonoBehaviour
{
    public Text CelebratoryMessage;

    // ********************************************************************** //

    void Update()
    {

        // When the total score updates make it flash cyan
        if (GameController.control.flashCongratulations)
        {
            CelebratoryMessage.fontSize = 55;
            CelebratoryMessage.color = Color.white;
            CelebratoryMessage.text = "Well done!";
        }
        else
        {
            CelebratoryMessage.text = "";
        }
    }

}
