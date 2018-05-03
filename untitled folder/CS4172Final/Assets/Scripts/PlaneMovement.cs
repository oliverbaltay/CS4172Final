using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneMovement : MonoBehaviour {

	public Camera ARCamera;
	public GameObject Info, Instruction, Item;
	private Vector3 PScale = new Vector3 (1.5f, .75f, 1f);
	private bool IsLarge = false;
	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {


		Vector3 relativePos = transform.position-ARCamera.transform.position;
		Quaternion rotation = Quaternion.LookRotation(relativePos);
		transform.localRotation = rotation;

		//		Vector3 Rot = this.transform.eulerAngles;
		//
		//
		//		if (this.tag.Contains ("Instruction")) {
		//			Rot.y = 0f;
		//		} else if (this.tag.Contains ("Info")) {
		//			Rot.y = -60f;
		//		} else {
		//			Rot.y = 60f;
		//		}
		//
		//		Rot.z = 0f;
		//
		//		this.transform.Rotate (Rot);

	}

	void OnTouchDown(){
		if (IsLarge) {
			Debug.Log ("Scaling Down");
			OnTouchUp ();

		} else {
			Debug.Log ("Scaling Up");
			ScaleUp ();

		}
		IsLarge = !IsLarge;
		//		this.SendMessage ("UpdateClick", SendMessageOptions.DontRequireReceiver);
	}

	void ScaleUp(){

		if (this.tag.Contains ("Instruction")) {
			Info.SetActive (false);
			Item.SetActive (false);

		} else if (this.tag.Contains ("Info")) {
			Instruction.SetActive (false);
			Item.SetActive (false);

		} else if (this.tag.Contains ("Item")) {
			Info.SetActive (false);
			Instruction.SetActive (false);

		} 

		this.transform.localScale = PScale;
	}

	void OnTouchUp(){
		Info.SetActive (true);
		Item.SetActive (true);
		Instruction.SetActive (true);

		Info.transform.localScale = new Vector3 (0.68f, 0.335f, 1f);
		Item.transform.localScale = new Vector3 (0.68f, 0.335f, 1f);
		Instruction.transform.localScale = new Vector3 (0.68f, 0.335f, 1f);
	}
}
