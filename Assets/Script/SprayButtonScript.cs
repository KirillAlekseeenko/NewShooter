using UnityEngine;
using System.Collections;

public class SprayButtonScript : MonoBehaviour {

	[SerializeField]
	private GameObject Explosion;

	void OnCollisionEnter(Collision collision)  // bullet hits another bullet
	{
		if (collision.gameObject.tag == "wall") {
			Destroy (this.gameObject);
			GameObject explosion = Instantiate (Explosion, transform.position, Quaternion.identity) as GameObject;
		}
	}
}
