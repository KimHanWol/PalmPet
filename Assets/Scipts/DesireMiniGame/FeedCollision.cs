using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FeedCollision : MonoBehaviour
{
    public DesireFeed desireFeed;

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Meat")
        {
            PlayerPrefs.SetInt("Hungry", PlayerPrefs.GetInt("Hungry") + 6 >= 100 ? 100 : PlayerPrefs.GetInt("Hungry") + 6);
            desireFeed.changeHunger();
            Destroy(collision.gameObject);
        }
        else if (collision.gameObject.tag == "Bomb")
        {
            PlayerPrefs.SetInt("Hungry", PlayerPrefs.GetInt("Hungry") - 10);
            desireFeed.SubCount();
            Destroy(collision.gameObject);
        }
    }
}
