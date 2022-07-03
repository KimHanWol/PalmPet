using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlaceOnPlane : MonoBehaviour
{
    public ARRaycastManager arRaycastManager;
    public ARPlaneManager arPlaneManager;

    public GameObject SpawnPrefab;

    private List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private GameObject palmPet;

    bool isActive = false;

    public GameObject ScanGuidePanel;
    public GameObject TouchGuidePanel;

    Pose hitPose;
    private void Awake()
    {
        ARSession.stateChanged += OnStateChanged;
        arPlaneManager.planesChanged += PlaneStart;
    }

    void OnStateChanged(ARSessionStateChangedEventArgs args)
    {
        if (args.state == ARSessionState.Unsupported)
        {
            Application.Quit();
            return;
        }

        if (args.state == ARSessionState.Ready | args.state == ARSessionState.SessionTracking) isActive = true;
        else isActive = false;
    }

    void PlaneStart(ARPlanesChangedEventArgs args)
    {
        if (!ScanGuidePanel.activeInHierarchy) return;

        List<ARPlane> addedPlanes = args.added;
        if (addedPlanes.Count > 0)
        {
            ScanGuidePanel.SetActive(false);
            TouchGuidePanel.SetActive(true);
        }
    }

    // Update is called once per frame
    public void Update()
    {
        if (!isActive) return;

        if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);

        if (touch.phase != TouchPhase.Began) return;

        if (arRaycastManager.Raycast(touch.position, hits, TrackableType.PlaneEstimated | TrackableType.PlaneWithinPolygon))
        {
            hitPose = hits[0].pose;

            if (palmPet == null)
            {
                TouchGuidePanel.SetActive(false);
                palmPet = Instantiate(SpawnPrefab, hitPose.position, hitPose.rotation);
                palmPet.AddComponent<PalmPetMove>();
                palmPet.transform.Rotate(new Vector3(0, -180, 0));
            }
            else
            {
                palmPet.GetComponent<PalmPetMove>().StartMove(hitPose.position, hitPose.rotation);
            }
        }
    }
}
