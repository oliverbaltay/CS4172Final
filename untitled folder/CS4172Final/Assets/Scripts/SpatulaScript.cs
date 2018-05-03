using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpatulaScript : MonoBehaviour {

	WalkthroughScript walkthroughScript;
	private static int numCollisions;
	private bool beakerStirred;

	// Use this for initialization
	void Start () {
		walkthroughScript = GameObject.Find ("Light").GetComponent<WalkthroughScript> ();
		numCollisions = 0;
		beakerStirred = false;
	}

	// Update is called once per frame
	void Update () {

	}

	void OnCollisionEnter(Collision collision) {
		Debug.Log (collision.collider.tag);
	}

	void OnCollisionStay(Collision collision){

		bool spatulaRetrieved = walkthroughScript.spatulaRetrieved;

		if (collision.collider.tag.Contains("beaker")) {
			if (spatulaRetrieved == true && beakerStirred == false) {
				numCollisions++;

				if (numCollisions >= 50) {
					beakerStirred = true;
					Debug.Log ("Stirring done.");
					walkthroughScript.setStep (walkthroughScript.step4);
				}
			}
		}

	}

	void OnCollisionExit(Collision collision){

	}
}
