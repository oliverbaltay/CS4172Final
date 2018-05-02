using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LabScript : MonoBehaviour {

	WalkthroughScript walkthroughScript;

	// Use this for initialization
	void Start () {
		walkthroughScript = GameObject.Find ("Light").GetComponent<WalkthroughScript> ();
	}

    void OnTriggerEnter(Collider other)
    {
      
        if (other.tag.Contains("cylinder"))
        {
            Debug.Log("cylinder entered");

			//Update images 
			walkthroughScript.setStep(walkthroughScript.step1B);
        }

		if (other.tag.Contains ("spatula")) 
		{
			Debug.Log ("Spatula entered");

			walkthroughScript.setStep (walkthroughScript.step3B);
		}
    }


    // Update is called once per frame
    void Update () {
		
	}
}
