using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class PlaneMovement : MonoBehaviour {

	public Camera ARCamera;
	public GameObject Info, Instruction, Item, Wand;
	private Vector3 PScale = new Vector3 (1, .5f, 1f);
	public Vector3 WLoc, SLoc, InitialScale, OffsetMag;
	private float SOffset;
	private float Sensitivity = .5f;
	private bool IsLarge, Scaling = false;
	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		if (Scaling) {
			SOffset = SLoc.magnitude - WLoc.magnitude;
			OffsetMag = InitialScale;
			OffsetMag.x = OffsetMag.x - SOffset * Sensitivity;
			OffsetMag.y = OffsetMag.y - SOffset * Sensitivity;

			if (OffsetMag.y > 0) {
				ScaleUp (OffsetMag);
//				this.transform.localScale = new Vector3 (OffsetMag, OffsetMag, OffsetMag);
			}
		}
		Vector3 relativePos = transform.position-ARCamera.transform.position;
		Quaternion rotation = Quaternion.LookRotation(relativePos);
		transform.localRotation = rotation;
	}

	void OnTouchDown(){
		SLoc = WLoc;
		InitialScale = this.transform.localScale;
		if (IsLarge) {
			Debug.Log ("Scaling Down");
			OnTouchUp ();

		} else {
			Debug.Log ("Scaling Up");
			Scaling = true;

		}
		IsLarge = !IsLarge;
	}

	void ScaleUp(Vector3 m){

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
		m.z = 1f;
		this.transform.localScale = m;
		this.transform.localPosition = new Vector3 (0f, 0.673f, 0.582f);
		this.transform.localRotation = (Quaternion.identity);
	}

	void EndScale(){
		Scaling = false;
	}
	void OnTouchUp(){
		Scaling = false;
		Info.SetActive (true);
		Item.SetActive (true);
		Instruction.SetActive (true);

		Info.transform.localRotation = new Quaternion (0, -60, 0, 1);
		Item.transform.localRotation = new Quaternion (0, 60, 0, 1);
		Item.transform.localPosition = new Vector3 (1.012f, 0.673f, 0.1f);
		Info.transform.localPosition = new Vector3 (-.901f, 0.673f, 0.1f);

		Info.transform.localScale = PScale;
		Item.transform.localScale = PScale;
		Instruction.transform.localScale = PScale;
	}
}
