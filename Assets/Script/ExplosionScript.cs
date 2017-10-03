using UnityEngine;
using System.Collections;

public class ExplosionScript : MonoBehaviour {

	[SerializeField]
	private float lifetime;

	void Awake()
	{
		transform.localScale *= LevelManagerScript.currentLevel.enemySize;
		Destroy (gameObject, lifetime);
	}
}
