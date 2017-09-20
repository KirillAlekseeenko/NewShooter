using UnityEngine;
using System.Collections;

public class ExplosionScript : MonoBehaviour {

	[SerializeField]
	private float lifetime;

	void Awake()
	{
		Destroy (gameObject, lifetime);
	}
}
