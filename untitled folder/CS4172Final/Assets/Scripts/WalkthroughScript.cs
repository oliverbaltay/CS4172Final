using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WalkthroughScript : MonoBehaviour {

	public string step1 = "step1";
	public string step1B = "step1B";
	private static bool mordantRetrieved;
	private static bool mordantPoured;
	GameObject Mordant;

	public string step2 = "step2";
	public string step2B = "step2B";
	public bool hammerRetrieved;

	public string step3 = "step3";
	public string step3B = "step3B";
	public bool spatulaRetrieved;

	public string step4 = "step4";
	public string step4B = "step4B";

	private string[] step1Items = new string[] {"HeatButton","CoolButton","Beaker","Pan"};

	private string[] step2Items = new string[] {"HeatButton","CoolButton","Beaker","Pan","SaltShaker","PaintBucket"};
	private string[] step2BItems = new string[] {"HeatButton","CoolButton","Beaker","Pan","SaltShaker","PaintBucket"};

	private string[] step3BItems = new string[] {"HeatButton","CoolButton","Beaker","Pan","SaltShaker","PaintBucket"};

	GameObject InfoQuad;
	GameObject ItemQuad;
	GameObject InstructionQuad;

	GameObject CompletedScreen;
	Text CompletedScreenText;

	GameObject Lab;

	public string freePlayMode = "freePlayMode";
	public string walkthroughMode = "walkthroughMode";

	private string curMode;

	Wayfind wayfind;

	// Use this for initialization
	void Start () {
		InfoQuad = GameObject.Find("InfoQuad");
		ItemQuad = GameObject.Find("ItemQuad");
		InstructionQuad = GameObject.Find("InstructionQuad");
		Lab = GameObject.Find ("Lab");
//		clearWorkspace (step1);
		mordantRetrieved = false;
		mordantPoured = false;
		spatulaRetrieved = false;
		Mordant = GameObject.Find ("Mordant");

		hammerRetrieved = false;

		CompletedScreen = GameObject.Find ("StepCompletedScreen");

		CompletedScreenText = CompletedScreen.transform.Find ("CompleteScreenText").GetComponent<Text>();
		curMode = "";

		CompletedScreen.SetActive (false);

		wayfind = GameObject.Find ("Arrow").GetComponent<Wayfind> ();
	}
	
	// Update is called once per frame
	void Update () {
		onMordantRotation ();
	}
		
	public void setStep(string curStep) 
	{
		if (curStep == step1) {
			Debug.Log("step 1 ran");
			GameObject Look = GameObject.FindGameObjectWithTag ("Mordant");
			wayfind.activateWand (Look);
		}

		if (curStep == step2) {
			GameObject Look = GameObject.FindGameObjectWithTag ("Hammer");
			wayfind.activateWand (Look);
		}

		clearWorkspace (curStep);
		updateWorkspace(curStep);
		updateScreens (curStep);
	}

	public void setMode(string mode)
	{
		curMode = mode;
	}

	public string getMode()
	{
		return curMode;
	}

	public void initializeWalkthroughBoard()
	{
		setStep (step1);
		setMode (walkthroughMode);
	}

	private void updateWorkspace(string curStep)
	{
		string[] curItems = new string[] {};
			
		if (curStep == step1B) {
			curItems = step1Items;
			mordantRetrieved = true;
		}

		if (curStep == step2) {
			//Includes mordant in beaker 
			curItems = step2Items;
			Debug.Log ("updating 2");
		}

		if (curStep == step2B) {
			curItems = step2BItems;
			hammerRetrieved = true;
		}

		if (curStep == step3) {

		}

		if (curStep == step3B) {

			curItems = step3BItems;
			spatulaRetrieved = true;
		}

		foreach(string item in curItems) {
			Lab.transform.Find (item).gameObject.SetActive (true);
		}
	}

	private void updateScreens(string curStep)
	{
		Material infoMaterial = (Material)Resources.Load ("InfoMaterial");
		Material itemMaterial = (Material)Resources.Load ("ItemMaterial");
		Material stepMaterial = (Material)Resources.Load ("StepMaterial");
	
		if (curStep == step1B) {
//			Texture stepText1B = (Texture)Resources.Load ("Step1B.png");
//			Texture info1B = (Texture)Resources.Load ("Info1B.png");
//			Texture image1B = (Texture)Resources.Load ("Item1B.png");
////			InfoQuad.GetComponent<Renderer>().material.SetTexture ("",info1B);
////			ItemQuad.GetComponent<Renderer>().material.SetTexture ("",image1B);
////			InstructionQuad.GetComponent<Renderer>().material.SetTexture ("",step1B);
//
//			infoMaterial.mainTexture = info1B;
//			itemMaterial.mainTexture = image1B;
//			stepMaterial.mainTexture = stepText1B;

//			InfoQuad.GetComponent<Renderer> ().material.mainTexture = info1B;
//			ItemQuad.GetComponent<Renderer> ().material.mainTexture = image1B;
//			InstructionQuad.GetComponent<Renderer> ().material.mainTexture = stepText1B;

			InfoQuad.GetComponent<Renderer>().material = infoMaterial;
			ItemQuad.GetComponent<Renderer>().material = itemMaterial;
			InstructionQuad.GetComponent<Renderer>().material = stepMaterial;
		}

		if (curStep == step2) {

		}

		if (curStep == step2B) {

		}
	}

	private void clearWorkspace(string curStep)
	{
		foreach (Transform child in Lab.transform) {
			if (child.tag.Contains("lab")) {
				child.gameObject.SetActive (false);
			}
		}
	}

	public void onMordantRotation()
	{
		if (mordantRetrieved == true && mordantPoured == false) {
			Debug.Log (Mordant.transform.rotation.eulerAngles);
//			mordantPoured = true;

			if (Mordant.transform.rotation.eulerAngles.y < 100) {
				mordantPoured = true;

				Debug.Log ("Mordant poured");

				//Play particle animation 
				Mordant.GetComponent<ParticleSystem>().Play();
				Mordant.GetComponent<ParticleSystem>().enableEmission = true;

				//Deactivate mordant game object (don't track anymore)


				//Show 2D Congratualations screen - close on 'OK'. 
				showStepCompleteScreen(step1);

				//Initiate step 2 and show Step 2 screen. 
				setStep(step2);

			}
		}
	}

	public void showStepCompleteScreen(string curStep)
	{
		string message = "";

		if (curStep == step1) {
			message = "Congratulations! You have completed Step 1: Pouring the Mordant into the Beaker. Now" +
			"you can continue on to Step 2.";
		}

		if (curStep == step2) {
			message = "Congratulations! You have completed Step 2: Adding the Dye to the Mordant. Now" +
				"you can continue on to Step 3.";
		}

		//Set Message
		CompletedScreenText.text = message;

		CompletedScreen.SetActive (true);
	}
}
