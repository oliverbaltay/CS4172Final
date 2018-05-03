using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wayfind : MonoBehaviour {
	
	public GameObject Look, Cylinder, Arrow;

	public bool wandActivated;
	public GameObject LookAt;
	private WalkthroughScript walkthroughScript;

	// Use this for initialization
	void Start () {
		
//		Look = GameObject.FindGameObjectWithTag ("Mordant");
		wandActivated = false;
		walkthroughScript = GameObject.Find ("Light").GetComponent<WalkthroughScript> ();
//		Cylinder = GameObject.Find ("Cylinder");
//		Arrow = GameObject.Find ("Arrow");
	}

	public void activateWand(GameObject toLookAt)
	{
		Cylinder.SetActive (false);
		Arrow.SetActive (true);
		wandActivated = true;
		LookAt = toLookAt;
	}

	// Update is called once per frame
	void Update () {
		string curMode = walkthroughScript.getMode ();
		if (wandActivated == true && curMode == walkthroughScript.walkthroughMode) {
//			Debug.Log ("Looking at:" + LookAt.transform.tag);
			this.transform.LookAt (LookAt.transform);
		}
	}

	void MordantCollision(){
		Debug.Log ("Here");
		Cylinder.SetActive (true);
		Arrow.SetActive (false);
		wandActivated = false;
	}

}
