using Assets.Scipts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    Pet pet;

    public GameObject startPanel;

    //UI
    public GameObject desirePanel;
    public GameObject homePanel;
    public GameObject multiPanel;
    public GameObject shopPanel;
    [HideInInspector] private List<GameObject> centerPanelList = new List<GameObject>();

    public GameObject GamePanel;
    public GameObject feedPanel;
    public GameObject poopPanel;

    private List<GameObject> gamePanelList = new List<GameObject>();

    public Button walkButton;
    public Button desireButton;
    public Button homeButton;
    public Button multiButton;
    public Button shopButton;

    private List<Button> buttonList = new List<Button>();


    public GameObject walkingCat;

    public InputField nameField;
    public Dropdown typeField;
    public Text nameText;
    public Text hungryText;
    public Text defecationText;
    public Text walkText;
    public Text loveText;

    void Start() {
        centerPanelList.Add(desirePanel);
        centerPanelList.Add(homePanel);
        centerPanelList.Add(multiPanel);
        centerPanelList.Add(shopPanel);

        gamePanelList.Add(GamePanel);
        gamePanelList.Add(feedPanel);
        gamePanelList.Add(poopPanel);

        buttonList.Add(walkButton);
        buttonList.Add(desireButton);
        buttonList.Add(homeButton);
        buttonList.Add(multiButton);
        buttonList.Add(shopButton);

        //UI Beginning or Canvas Decide
        if (PlayerPrefs.HasKey("Name")) {
            pet = new Pet(PlayerPrefs.GetString("Name"));
            SetPetState();
        }
        else startPanel.SetActive(true);

        Debug.Log("start");

        ActivePanel(homePanel);
    }

    private void DisableAllPanel()
    {
        foreach(GameObject panel in gamePanelList) {
            panel.SetActive(false);
        }
        foreach (GameObject panel in centerPanelList)
        {
            panel.SetActive(false);
        }
    }

    public void ActivePanel(GameObject panel)
    {
        Debug.Log(panel);
        DisableAllPanel();
        if(gamePanelList.Contains(panel)) GamePanel.SetActive(true);
        if (panel == homePanel)
        {
            ButtonDistable(homeButton);
        }

        panel.SetActive(true);
    }

    public void ActiveWalkPanel()
    {
        SceneManager.LoadScene("Walk");
    }

    private void EnableAllButton()
    {
        foreach (Button button in buttonList)
        {
            button.interactable = true;
        }
    }

    public void ButtonDistable(Button button)
    {
        EnableAllButton();
        button.interactable = false;
    }

    private void SetPetState()
    {
        nameText.text = pet.Name.ToString();
        hungryText.text = pet.Hungry.ToString();
        defecationText.text = pet.Defecation.ToString();
        walkText.text = pet.Walk.ToString();
        loveText.text = pet.Love.ToString();
    }

    //Beginning
    public void MakePet() {
        if (nameField.text != "" && typeField.itemText.text == "고양이") {
            pet = new Pet(nameField.text);
            startPanel.SetActive(false);
            ActivePanel(homePanel);
            SetPetState();
        }
    }
}
