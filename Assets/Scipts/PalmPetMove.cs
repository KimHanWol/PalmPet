using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class PalmPetMove : MonoBehaviour
{
    public void StartMove(Vector3 vec, Quaternion rotation)
    {
        StopAllCoroutines();
        StartCoroutine(Move(vec, rotation));
    }

    IEnumerator Move(Vector3 vec, Quaternion rotation)
    {
        GetComponent<Animator>().SetBool("IsMoving", true);
        transform.LookAt(new Vector3(vec.x, transform.position.y, vec.z));

        //수평이동
        Vector3 vecter3 = new Vector3(vec.x - transform.position.x, 0, vec.z - transform.position.z) / 100;

        while (Mathf.Abs(transform.position.x - vec.x) > 0.1f && Mathf.Abs(transform.position.z - vec.z) > 0.1f)
        {
            transform.position += vecter3;
            yield return new WaitForSeconds(0.01f);
        }

        //수직이동
        vecter3 = new Vector3(0,vec.y - transform.position.y, 0) / 100;

        while(transform.position.y - vec.y > 0.1f)
        {
            transform.position += vecter3;
            yield return new WaitForSeconds(0.01f);
        }

        transform.position = vec;
        transform.rotation = rotation;
        transform.Rotate(new Vector3(0, -180, 0));


        GetComponent<Animator>().SetBool("IsMoving", false);
    }
}
