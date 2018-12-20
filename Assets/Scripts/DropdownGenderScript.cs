using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class DropdownGenderScript : MonoBehaviour {

    /// <summary>
    /// This script handles the dropdown menu in the startscreen scene.
    /// This is a simplified, general purpose codebase for creating different behavioural experiments in Unity.
    /// Author: Hannah Sheahan, sheahan.hannah@gmail.com
    /// Date: November 2018
    /// </summary>


    private DataController dataController;
    List<string> genders = new List<string>() { "Select gender . . .", "Female", "Male", "Other" };
    public Dropdown dropdown;
    public Text selectedGender;

    // ********************************************************************** //

    void Start()
    {
        dataController = FindObjectOfType<DataController>(); // Fetch our single DataController
        PopulateList();
    }

    // ********************************************************************** //

    void PopulateList()
    {
        dropdown.AddOptions(genders);
    }

    // ********************************************************************** //

    public void DropdownIndexChanged(int index)
    {
        selectedGender.text = genders[index];

        if (index==0)
        {
            selectedGender.color = new Color(215f / 255f, 252f / 255f, 255f / 255f, 126f / 255f);
        }
        else
        {
            selectedGender.color = Color.white;
        }

        dataController.SetParticipantGender(index);

    }


}
