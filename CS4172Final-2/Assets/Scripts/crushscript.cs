using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crushscript : MonoBehaviour {

	public GameObject explosion;

	// Use this for initialization
	void Start () {

	}

	public void OnTriggerEnter(Collider other)
	{
		GameObject exp = Instantiate(explosion, other.gameObject.transform.position, Quaternion.identity);
		other.gameObject.SetActive(false);
		Destroy(exp, 1.5f);
	}

	// Update is called once per frame
	void Update () {

	}
}



