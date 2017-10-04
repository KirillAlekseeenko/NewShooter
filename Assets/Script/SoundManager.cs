using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SoundManager : MonoBehaviour {

	//AudioSources

	public AudioSource musicSource;
	public AudioSource effectsSource;

	// instance
	public static SoundManager instance = null;


	// Use this for initialization
	void Awake () {

		if (instance == null)
			instance = this;
		else if (instance != this)
			Destroy (gameObject);
	
		DontDestroyOnLoad (gameObject);
	}

	public void PlayMusic(AudioClip musicClip)
	{
		musicSource.clip = musicClip;
		musicSource.Play ();
	}

	public void PlayEffect(AudioClip clip)
	{
		effectsSource.PlayOneShot (clip, 0.5f);
	}

	public void PlayRandomEffect(List<AudioClip> clips)
	{
		int index = UnityEngine.Random.Range (0, clips.Count - 1);
		effectsSource.PlayOneShot (clips[index]);
	}

}
