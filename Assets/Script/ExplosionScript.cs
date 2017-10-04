using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ExplosionScript : MonoBehaviour {

	public List<AudioClip> explosionEffects;

	[SerializeField]
	private float lifetime;

	void Awake()
	{
		SoundManager.instance.PlayRandomEffect (explosionEffects);
		transform.localScale *= LevelManagerScript.currentLevel.enemySize;
		Destroy (gameObject, lifetime);
	}
}
