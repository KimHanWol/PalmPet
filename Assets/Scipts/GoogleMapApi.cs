using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GoogleMapApi : MonoBehaviour {
	//UI
	public GameObject StartPanel;
	public Text distanceValue;
	public RawImage MapObject;

	public GameObject cat;

	public Animator palmPetAnimator;

	//GPS
	bool isStart = false;
	double prevLat = 366;
	double prevLon = 366;
	double distance = 0;
	bool gpsInit = false;
	double detail = 1.0;
	LocationInfo currentGPSPosition;

	//Map
	string url;
	public double lat;
	public double lon;

	LocationInfo li;
	public int zoom = 14;
	public int mapWidth = 200;
	public int mapHeight = 200;
	public enum mapType { roadmap, satellite, hybrid, terrain }
	public mapType mapSelected;
	public int scale;

	IEnumerator Map() {
		url = "https://maps.googleapis.com/maps/api/staticmap?center=" + lat + "," + lon +
			"&zoom=" + zoom + "&size=" + mapWidth + "x" + mapHeight + "&scale=" + scale
			+ "&maptype=" + mapSelected +
			"&markers=color:markers=color:red%7C" + lat + ","+ lon + "&key=google_map_api_key";
		WWW www = new WWW(url);
		yield return www;
		MapObject.texture = www.texture;
		MapObject.SetNativeSize();
	}

	public void StartWalking()
    {
		StartPanel.SetActive(true);
		cat.SetActive(true);
	}

	void Start() {
		StartCoroutine(Map());
	}

	void Update() {
		//distanceValue.text = distance.ToString();
		if(isStart) {
			Input.location.Start(0.5f);
			int wait = 1000;
			if (Input.location.isEnabledByUser) {
				while (Input.location.status == LocationServiceStatus.Initializing && wait > 0)
					wait--;
				if (Input.location.status != LocationServiceStatus.Failed) {
					gpsInit = true;
					InvokeRepeating("RetrieveGPSData", 0.0001f, 1.0f);
				}
			} else {
			}
			if (prevLat == 366) {
				prevLat = lat;
				prevLon = lon;
			} else if (Math.Sqrt((Math.Abs(lat - prevLat)* Math.Abs(lat - prevLat)) + (Math.Abs(lon - prevLon) * Math.Abs(lon - prevLon))) >= 5) {
				distance += Math.Sqrt((lat - prevLat) * (lat - prevLat) + (lon - prevLon) * (lon - prevLon)) * 111.64;
				prevLat = lat;
				prevLon = lon;
			}
		}
	}

	void RetrieveGPSData() {
		currentGPSPosition = Input.location.lastData;
		lat = currentGPSPosition.latitude;
		lon = currentGPSPosition.longitude;
	}

	public void OnClickYesBtn() {
		isStart = true;
		StartPanel.SetActive(false);
		palmPetAnimator.SetBool("IsMoving", true);
	}

	public void OnClilckFinishBtn() {
		isStart = false;
		if (distance / 10 >= PlayerPrefs.GetInt("Walk"))
			PlayerPrefs.SetInt("Walk", 0);
		else
			PlayerPrefs.SetInt("Walk", PlayerPrefs.GetInt("Walk") - int.Parse(Math.Round(distance / 10).ToString()));
		distance = 0;
		lat = 366;
		lon = 366;
		StopCoroutine(Map());
		StartPanel.SetActive(true);
		cat.SetActive(false);
		palmPetAnimator.SetBool("IsMoving", false);
        SceneManager.LoadScene("Home");
	}
}