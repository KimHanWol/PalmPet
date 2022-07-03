using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DesireFeed : MonoBehaviour
{
    Rigidbody2D rigid;
    BoxCollider2D collider;

    public Text lifeValue;
    public Text timeValue;
    public Text hungryValue;
    public GameObject gamePanel;
    public GameObject completePanel;

    public GameObject Meat;
    public GameObject Bomb;

    private List<GameObject> objectList = new List<GameObject>();

    int count = 3;
    public void SubCount()
    {
        count--;
        lifeValue.text = count.ToString();
    }
    public void changeHunger()
    {
        hungryValue.text = PlayerPrefs.GetInt("Hungry").ToString();
    }


    private float time = 30f;

    public GameObject cat;
    float moveSpeed = 4500f;
    bool leftMove = false;
    bool rightMove = false;

    void Awake() {
        rigid = GetComponent<Rigidbody2D>();
        collider = GetComponent<BoxCollider2D>();
    }

    public void StartGame()
    {
        count = 3;
        time = 30f;
        leftMove = false;
        rightMove = false;
        gamePanel.SetActive(true);
        gameEnd = false;
        changeHunger();
        StartCoroutine(SpawnLoop());
    }

    private bool gameEnd = false;

    IEnumerator SpawnLoop()
    {

        while (!gameEnd)
        {
            float what = Random.Range(0, 2f);
            if (what < 1.1f)
            {
                GameObject newMeat = Instantiate(Meat, new Vector2(Random.Range(-Screen.width/2, Screen.width), Screen.height), Meat.transform.rotation);
                Debug.Log(Screen.width);
                newMeat.transform.parent = gamePanel.transform;
                objectList.Add(newMeat);
            }
            else 
            {
                GameObject newBomb = Instantiate(Bomb, new Vector2(Random.Range(-Screen.width / 2, Screen.width), Screen.height), Meat.transform.rotation);
                newBomb.transform.parent = gamePanel.transform;
                objectList.Add(newBomb);
            }

            float time = Random.Range(1.0f, 2.2f);
            yield return new WaitForSeconds(time);
        }
    }

    void Update()
    {
        timeValue.text = this.time.ToString();
        this.time -= Time.deltaTime;

        if(count <= 0 || PlayerPrefs.GetInt("Hungry") == 100 || time <= 0) {
            gamePanel.SetActive(false);
            completePanel.SetActive(true);
            gameEnd = true;
        }

        Moved();
    }

    private void Moved()
    {
        if (leftMove)
        {
            if (cat.transform.localPosition.x >= -300)
            {
                Vector3 moveVelocity = new Vector3(-0.1f, 0, 0);
                cat.transform.position += moveVelocity * moveSpeed * Time.deltaTime;
            }
        }
        if (rightMove)
        {
            if (cat.transform.localPosition.x <= 300)
            {
                Vector3 moveVelocity = new Vector3(0.1f, 0, 0);
                cat.transform.position += moveVelocity * moveSpeed * Time.deltaTime;
            }
        }
    }

    public void LeftBtnDown() { leftMove = true; }
    public void LeftBtnUp() { leftMove = false; }
    public void RightBtnDown() { rightMove = true;}
    public void RightBtnUp() { rightMove = false;}

    public void completeFeed() 
    {
        foreach(GameObject mObject in objectList)
        {
            Destroy(mObject);
        }
        objectList.Clear();
        completePanel.SetActive(false); 
    }

}
