using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {

	public float speed;
	public Text scoreText;
	private int count;

	private Rigidbody rb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}

	void FixedUpdate() {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		if (Input.acceleration.x != 0 && Input.acceleration.y != 0) {
			// we assume that the device is held parallel to the ground
			// and the Home button is in the right hand

			// remap the device acceleration axis to game coordinates:
			// 1) XY plane of the device is mapped onto XZ plane
			movement.x = Input.acceleration.x;
			movement.z = Input.acceleration.y;
			// clamp acceleration vector to the unit sphere
			if (movement.sqrMagnitude > 1)
				movement.Normalize();
			
		}

		rb.AddForce (movement * speed);
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.tag == "PickUp") {
			other.gameObject.SetActive (false);
			count += 1;
			scoreText.text = "Score: " + count;
		}
	}
}
