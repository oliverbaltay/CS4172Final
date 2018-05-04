using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class Location : MonoBehaviour {

	private ImageTargetBehaviour mImageTargetBehaviour = null;
	public PlaneMovement InfoPlaneController;
	public PlaneMovement ItemPlaneController;
	public PlaneMovement InstructionPlaneController;

	// Use this for initialization
	void Start () {
		mImageTargetBehaviour = GetComponent<ImageTargetBehaviour>();

	}

	// Update is called once per frame
	void Update () {
		if (mImageTargetBehaviour == null)
		{
			Debug.Log ("ImageTargetBehaviour not found");
			return;
		}

		Vector2 targetSize = mImageTargetBehaviour.GetSize();
		Vector3 pointOnTarget = new Vector3(0,0, .5f); 

		// We convert the local point to world coordinates
		Vector3 targetPointInWorldRef = transform.TransformPoint(pointOnTarget);
		Vector3 wandRot = transform.eulerAngles;
//		Debug.Log (targetPointInWorldRef);
		InfoPlaneController.WLoc = targetPointInWorldRef;
		ItemPlaneController.WLoc = targetPointInWorldRef;
		InstructionPlaneController.WLoc = targetPointInWorldRef;

	}
}