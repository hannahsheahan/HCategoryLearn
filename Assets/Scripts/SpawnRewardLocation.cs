using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnRewardLocation : MonoBehaviour {

    /// <summary>
    /// Choose a location to spawn the star from that is actually on the grid (not in the holes)
    /// </summary>

    void Start () 
    {
        // Load the star spawn location from the configured datafile
        transform.position = GameController.control.starSpawnLocation;
        Debug.Log("Reward spawned at: " + transform.position.x + ", " + transform.position.y + ", " + transform.position.z);
    }

}