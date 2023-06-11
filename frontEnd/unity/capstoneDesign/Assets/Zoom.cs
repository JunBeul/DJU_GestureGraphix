using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zoom : MonoBehaviour
{
    public Transform Target;
    public float zoom;
    private Transform tr;

    void Start(){
        tr=GetComponent<Transform>();
    }

    void LateUpdate(){
        Vector3 TargetDist=tr.position-Target.position;
        TargetDist=Vector3.Normalize(TargetDist);
        tr.position-=(TargetDist*Input.GetAxis("Mouse ScrollWheel")*zoom);
    }

}

