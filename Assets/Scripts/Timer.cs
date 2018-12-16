using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer
{
    /// This is just a simple Timer class to check how much time has passed between e.g. state transitions
    /// Note that Time.time gives the current system time.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: 01/11/2018

    private float elapsedTime = Time.time;
    private float previousTime = Time.time;


    // ********************************************************************** //

    public void Reset()
    {
        // Reset the timer back to counting from 'zero'
        previousTime = Time.time;
        elapsedTime = previousTime;
    }

    // ********************************************************************** //

    public float ElapsedSeconds()
    {
        // This function returns how much time has elapsed since the timer was reset
        elapsedTime = Time.time - previousTime;
        return elapsedTime;
    }

    // ********************************************************************** //

    public bool ExpiredSeconds(float delayTime)
    {
        // This function returns true if delayTime has passed since the timer was reset
        elapsedTime = Time.time - previousTime;

        if (elapsedTime >= delayTime)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // ********************************************************************** //

}
