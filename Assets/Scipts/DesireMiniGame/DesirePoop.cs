using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DesirePoop : MonoBehaviour
{
    public GameObject complete;

    public Text poopValue;

    public void StartGame()
    {
        int value = PlayerPrefs.GetInt("Defecation");
        poopValue.text = value.ToString();
        if (value == 0) EndGame();
    }

    public void TouchHead()
    {
        int value = PlayerPrefs.GetInt("Defecation");
        if (value > 10)
        {
            PlayerPrefs.SetInt("Defecation", value - 10);
            poopValue.text = (value - 10).ToString();
        }
        else
        {
            EndGame();
        }
    }

    private void EndGame()
    {
        PlayerPrefs.SetInt("Defecation", 0);
        poopValue.text = "0";
        complete.SetActive(true);
    }

    public void CompleteButtonClick()
    {
        complete.SetActive(false);
    }
}
