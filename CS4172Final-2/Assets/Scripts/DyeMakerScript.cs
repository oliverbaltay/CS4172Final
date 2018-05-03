using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DyeMakerScript : MonoBehaviour {

	public Transform lab;
	GameObject mordant;
	GameObject dye;
	private HelperScript helper;
	public GameObject dyeConfirmer;
	public Text ingText;
	// Use this for initialization
	void Start () {
		mordant = null;
		dye = null;
		helper = GameObject.Find("ARCamera").GetComponent<HelperScript>();
		dyeConfirmer.SetActive (false);
	}

	// Update is called once per frame
	void Update () {

	}

	public void setMordant(GameObject prefab){
		mordant = prefab;
	}

	public void setDye(GameObject prefab){
		dye = prefab;
	}

	public void createDye(){
		if (mordant != null && dye != null) {
			createDyeIngriedient ();
			createMordantIngriedient ();
			mordant = null;
			dye = null;
		} else
			Debug.Log ("must pick a dye and a mordant");
	}

	public void clear(){
		mordant = null;
		dye = null;
	}

	public void createDyeIngriedient(){
		GameObject d = Instantiate (dye, this.transform);
		//d.transform.localPosition.Set (0.3f, 0.0f, 0.3f);
		d.transform.localScale.Set (0.007f, 0.007f, 0.007f);
		d.transform.localPosition.Set (0.0f, 0.0f, 0.0f);

	}

	public void createMordantIngriedient(){
		GameObject m = Instantiate (mordant, this.transform);
		//m.transform.localPosition.Set (0.3f, 0.1f, -0.15f);
		m.transform.localScale.Set (0.2f, 0.2f, 0.2f);
		m.transform.localPosition.Set (0.0f, 0.0f, 0.0f);

	}

	public void create(){
		if (mordant != null) {
			createMordantIngriedient ();
		}
		if (dye != null) {
			createDyeIngriedient ();
		}
		dye = null;
		mordant = null;
	}

	public void processIngriedient(Transform ingried){
		IngriedientScript ing = ingried.GetComponent<IngriedientScript> ();
		dyeConfirmer.SetActive (true);
		ingText.text = ing.ingName;
		if (ingried.tag.Contains ("recipie")) {
			recipieScript recipie = ingried.GetComponent<recipieScript> ();
			dye = recipie.dye;
			mordant = recipie.mordant;
		}
		if(ingried.tag.Contains("dye")){
			dye = ing.prefab;

		}
		if (ingried.tag.Contains ("mordent")) {
			mordant = ing.prefab;
		}
	}


}


