using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class touchInput : MonoBehaviour
{

	public LayerMask touchInputMask;
	public Camera ARCamera;
	private List<GameObject> touchList = new List<GameObject> ();
	private GameObject[] touchesOld;
	private RaycastHit hit;
	private bool Dragging = false;
	private GameObject isDragging = null;
	float tapCount;
	Touch touch;

	// Update is called once per frame
	void Start(){

	}

	void Update ()
	{
		#if UNITY_EDITOR
		if (Input.GetMouseButton (0) || Input.GetMouseButtonDown (0) || Input.GetMouseButtonUp(0) ){

			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			Ray ray = ARCamera.ScreenPointToRay (Input.mousePosition);

			if (Physics.Raycast (ray, out hit, touchInputMask)) {
				GameObject recipient = hit.transform.gameObject;
				touchList.Add (recipient);

				if (Input.GetMouseButtonDown (0)) {
					recipient.SendMessage ("OnTouchDown", recipient, SendMessageOptions.DontRequireReceiver);
					isDragging = recipient;
					Dragging = true;
				}

			}
			if(Input.GetMouseButtonUp(0) && Dragging){
				isDragging.SendMessage("EndScale",SendMessageOptions.DontRequireReceiver);
				isDragging = null;
				Dragging = false;
			}
		}
		#endif

		if (Input.touchCount == 1) {
			touchesOld = new GameObject[touchList.Count];
			touchList.CopyTo (touchesOld);
			touchList.Clear ();

			foreach (Touch touch in Input.touches) {
				Ray ray = ARCamera.ScreenPointToRay (touch.position);

				if (Physics.Raycast (ray, out hit, touchInputMask)) {
					GameObject recipient = hit.transform.gameObject;
					touchList.Add (recipient);

					if (touch.phase == TouchPhase.Began) {
						recipient.SendMessage ("OnTouchDown", recipient, SendMessageOptions.DontRequireReceiver);
					}


				}
			}
		}
	}
}


