using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wayfind : MonoBehaviour {
	
	public GameObject Look, Cylinder, Arrow;

	// Use this for initialization
	void Start () {
		Cylinder.SetActive (false);
		Arrow.SetActive (true);
		Look = GameObject.FindGameObjectWithTag ("Mordant");
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.LookAt (Look.transform);
		
	}

	void MordantCollision(){
		Debug.Log ("Here");
		Cylinder.SetActive (true);
		Arrow.SetActive (false);
	}

}
