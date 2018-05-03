using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crushscript : MonoBehaviour {

	public GameObject explosion;
	private WalkthroughScript walkthroughScript;

	// Use this for initialization
	void Start () {
		walkthroughScript = GameObject.Find ("Light").GetComponent<WalkthroughScript> ();
	}

	public void OnTriggerEnter(Collider other)
	{
		if (walkthroughScript.hammerRetrieved == true && other.tag.Contains ("paint")) {
			//Only crush paint 
			GameObject exp = Instantiate (explosion, other.gameObject.transform.position, Quaternion.identity);
			other.gameObject.SetActive (false);
			Destroy (exp, 1.5f);
			walkthroughScript.showStepCompleteScreen (walkthroughScript.step2);
			walkthroughScript.setStep (walkthroughScript.step3);
		}
	}

	// Update is called once per frame
	void Update () {

	}
}



