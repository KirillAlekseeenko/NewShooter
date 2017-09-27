﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using System;

public class MainScript : MonoBehaviour {

	public int levelNumber;
	public Transform Enemy;
	public Transform Background;
    
    public float SpawnEnemyBorder;
	public float SpawnHeight;



	private float timeToSpawn;
	private int score;
	//private float time;
	//private float timeUpdate = 0.1f;
	private int remain;
	private int spawned;
	private bool finished = false;

	// balance
	public int initialNumberOfEnemies;
	private float SpawnTime;
	public int initialScore;
	public int addToScore;
	public int takeFromScore;
	public int oneStarBorder;
	public int twoStarsBorder;
	public int threeStarsBorder;

	//panels
	public GameObject mainUIPanel;
	public GameObject pausePanel;
	public GameObject resultPanel;
	public GameObject audioPanel;

	//result panel stuff
	public Text resultScoreText;
	public GameObject Star_1;
	public GameObject Star_2;
	public GameObject Star_3;
	public Button nextButton;
	[SerializeField]
	private Button pauseButton;
	public Button RightButton;
	public Button LeftButton;

	public Text scoreText;
	public Text remainText;


	//audio
	[SerializeField]
	private Toggle audioToggle;
	[SerializeField]
	private Slider effectsSlider;
	[SerializeField]
	private Slider musicSlider;
	[SerializeField]
	private Slider audioSlider;

	//animations

	public Animator transitionImage;
	public List<Animator> pauseButtons;

	//private int fontSize = 44; // POTENTIAL DANGER
	private bool isChanging = false; // label resize


    // Use this for initialization
    void Start () {
		SpawnTime = LevelManagerScript.currentLevel.spawnRate;
		Time.timeScale = 1;
		timeToSpawn = SpawnTime;
		remain = initialNumberOfEnemies;
		spawned = initialNumberOfEnemies;
		score = initialScore;
		updateScoreLabel ();
		BorderScript.onMiss += reduceScore;
		BulletScript.onHit += addScore;


    }

	private void unsubscribeFromEvents()
	{
		BorderScript.onMiss -= reduceScore;
		BulletScript.onHit -= addScore;
	}
	/*void onDestroy()
	{
		BorderScript.onMiss -= reduceScore;
		EnemyScript.onHit -= addScore;
	}*/
	/*
	void onEnable()
	{
		BorderScript.onMiss += reduceScore;
		EnemyScript.onHit += addScore;
	}
	void onDisable()
	{
		BorderScript.onMiss -= reduceScore;
		EnemyScript.onHit -= addScore;
	}*/

	// Update is called once per frame
	void Update () {
		if (timeToSpawn > 0)
        {
            timeToSpawn -= Time.deltaTime;
        }
        else 
			if (spawned > 0) {
				spawned--;
				SpawnEnemy (LevelManagerScript.currentLevel.enemyType);
			}

		if (remain <= 0 && !finished) {
			finished = true;
			nothingIsRemaining ();
		}
        
    }

	private void SpawnEnemy(EnemyScript.EnemyType type)
	{
		timeToSpawn = SpawnTime;
		Transform _enemy = Instantiate(Enemy, new Vector3(UnityEngine.Random.Range(-SpawnEnemyBorder, SpawnEnemyBorder), 0, SpawnHeight), Quaternion.Euler(new Vector3(0, 0, 0))) as Transform;
		_enemy.GetComponent<EnemyScript> ().setType (type);
	}

	public void updateScoreLabel() // 1 - green, -1 - red
	{
		if(score > 0)
			scoreText.text = score.ToString();
		else
			scoreText.text = "0";
	}
	public void updateScoreLabel(int color) // 1 - green, -1 - red
	{
		if(score > 0)
			scoreText.text = score.ToString();
		else
			scoreText.text = "0";

		if(!isChanging)
			StartCoroutine(LabelStretchAndShrink(scoreText, 0.2f, 1.5f, 15, color));
	}
	public void updateRemainLabel()
	{
		remainText.text = remain.ToString ();
		if (remain < 4) { // 3 2 1 0
			StartCoroutine(LabelStretchAndShrink(remainText, 0.5f, 1.5f, 15, 0));
		}
	}

	public void reduceScore()
	{
		remain--;
		updateRemainLabel ();
		score -= takeFromScore;
		updateScoreLabel (-1);

	}
	public void addScore()
	{
		remain--;
		updateRemainLabel ();
		score += addToScore;
		updateScoreLabel (1);

		//StartCoroutine(LabelStretchAndShrink(scoreText, 0.5f, 1.5f, 15));
	}
	public void nothingIsRemaining()
	{
		// ...bring up achieves
		List<LevelManagerScript.Level> levelList;

		if (PlayerPrefs.HasKey ("SAVE")) {

			var jsonString = PlayerPrefs.GetString ("SAVE");

			levelList = JsonUtility.FromJson<LevelManagerScript.LevelListWrapper> (jsonString).levelList;

			int stars = 0;

			if (score >= oneStarBorder)
				stars++;
			if (score >= twoStarsBorder)
				stars++;
			if (score >= threeStarsBorder)
				stars++;


			if (stars > levelList [levelNumber - 1].stars)
				levelList [levelNumber - 1].stars = stars;
			if (levelList [levelNumber - 1].stars > 0 &&
			    levelNumber < levelList.Count &&
			    levelList [levelNumber].locked) 
			{
				levelList [levelNumber].locked = false;
			}

			PlayerPrefs.SetString ("SAVE", JsonUtility.ToJson (new LevelManagerScript.LevelListWrapper(levelList)));



			resultScoreText.text = "Score: " + scoreText.text;

			switch (stars) {

			case 0:
				{
					nextButton.interactable = false;
					Star_1.SetActive (false);
					Star_2.SetActive (false);
					Star_3.SetActive (false);
					break;
				}
			case 1:
				{
					Star_2.SetActive (false);
					Star_3.SetActive (false);
					break;
				}
			case 2:
				{
					Star_3.SetActive (false);
					break;
				}
			default:
				{
					break;
				}
			}
		}
		else
			Debug.Log ("There's no key SAVE");


		finish ();

	}

	// result panel
	public void TryAgainButtonClick()
	{
		nextButton.interactable = true;

		unsubscribeFromEvents ();
		Time.timeScale = 1;
		//resultPanel.SetActive (false);
		//SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
		StartCoroutine (sceneFadeOut (SceneManager.LoadScene, SceneManager.GetActiveScene ().name));
	}
	public void NextButtonClick ()
	{
		//resultPanel.SetActive (false);
		//SceneManager.LoadScene ("Level" + (levelNumber + 1).ToString ());
		Time.timeScale = 1;
		if (PlayerPrefs.HasKey ("SAVE") && PlayerPrefs.GetString ("SAVE") != "{}") {

			var jsonString = PlayerPrefs.GetString ("SAVE");
			List<LevelManagerScript.Level> levelList = JsonUtility.FromJson<LevelManagerScript.LevelListWrapper> (jsonString).levelList;
			int next = LevelManagerScript.currentLevel.number;
			LevelManagerScript.currentLevel = new LevelManagerScript.Level (levelList [next]);
		}

		unsubscribeFromEvents ();

		StartCoroutine (sceneFadeOut (SceneManager.LoadScene, "Level1"));
	}


	//pause
	public void PauseButtonClick()
	{
		pause ();
	}
	private void pause()
	{
		pauseButton.gameObject.SetActive (false);
		RightButton.gameObject.SetActive (false);
		LeftButton.gameObject.SetActive (false);
		Time.timeScale = 0;
		pausePanel.GetComponent<Animator> ().SetBool ("isHidden", false);

	}
	private IEnumerator unpause()
	{
		pausePanel.GetComponent<Animator> ().SetBool ("isHidden", true);
		yield return new WaitForSecondsRealtime (0.5f);
		Time.timeScale = 1;
		pauseButton.gameObject.SetActive (true);
		RightButton.gameObject.SetActive (true);
		LeftButton.gameObject.SetActive (true);
	}
	private void finish()
	{
		mainUIPanel.SetActive (false);
		Time.timeScale = 0;

		resultPanel.GetComponent<Animator> ().SetBool ("isHidden", false);
		//yield return new WaitForSecondsRealtime (0.5f);
	}
	public void ResumeButtonClick()
	{
		StartCoroutine (unpause ());
	}

	// audio
	public void OptionsButtonClick()
	{
		if(PlayerPrefs.HasKey("AUDIO"))
		{
			AudioInfo audioInfo = JsonUtility.FromJson<AudioInfo>(PlayerPrefs.GetString("AUDIO"));

			audioToggle.isOn = audioInfo.muted;
			effectsSlider.value = audioInfo.effectsVolume;
			musicSlider.value = audioInfo.musicVolume;
			audioSlider.value = audioInfo.audioVolume;


		}

		StartCoroutine (pauseToAudioTransition ());

		//Background.Translate (new Vector3 (0, 6.0f, 0), Space.World);
		//audioPanel.SetActive (true);
		//mainUIPanel.SetActive (false);
		//pausePanel.SetActive (false);
	}
	private IEnumerator pauseToAudioTransition()
	{
		for (int i = pauseButtons.Count - 1;i >= 0;i--) {
			pauseButtons[i].SetBool ("isHidden", true);
		}
		yield return new WaitForSecondsRealtime (0.5f);
		audioPanel.GetComponent<Animator> ().SetBool ("isHidden", false);
	}
	private IEnumerator audioToPauseTransition()
	{
		audioPanel.GetComponent<Animator> ().SetBool ("isHidden", true);
		yield return new WaitForSecondsRealtime (0.5f);
		for (int i = pauseButtons.Count - 1;i >= 0;i--) {
			pauseButtons[i].SetBool ("isHidden", false);
		}
	}
	public void AudioPanelBackButtonClick()
	{
		AudioInfo audioInfo = new AudioInfo (audioToggle.isOn, audioSlider.value, musicSlider.value, effectsSlider.value);
		PlayerPrefs.SetString ("AUDIO", JsonUtility.ToJson (audioInfo));

		StartCoroutine (audioToPauseTransition());

		//Background.Translate (new Vector3 (0, -6.0f, 0), Space.World);
		//audioPanel.SetActive (false);
		//mainUIPanel.SetActive (true);
		//pausePanel.SetActive (true);
	}
	public void onMusicSliderValueChanged()
	{
		//this.GetComponent<AudioSource> ().volume = musicSlider.value;
	}
	public void onEffectsSliderValueChanged()
	{

	}
	public void onAudioSliderValueChanged()
	{
		AudioListener.volume = audioSlider.value;
	}
	public void onAudioToggleValueChanged()
	{
		if (audioToggle.isOn)
			AudioListener.volume = 0;
		else
			AudioListener.volume = 1.0f;
	}


	public void MainMenuButtonClick()
	{
		Time.timeScale = 1;
		unsubscribeFromEvents ();
		//SceneManager.LoadScene ("MainMenu");
		StartCoroutine (sceneFadeOut (SceneManager.LoadScene, "MainMenu"));
	}

	private IEnumerator sceneFadeOut(Action<string> f, string arg)
	{
		transitionImage.SetBool ("faded", true);
		yield return new WaitForSeconds (0.5f);
		f (arg);
	}


	public IEnumerator LabelStretchAndShrink(Text label, float time, float stretchDegree, int steps, int color) // green or red, 1 or -1
	{
		isChanging = true;
		
		scoreText.GetComponent<Animator> ().SetInteger ("add", color);

		int initialFontSize = label.fontSize;
		for (int i = 1; i <= steps; i++) {
			yield return new WaitForSecondsRealtime (time / (2 * steps));
			//yield return null;
			float size = initialFontSize * (1 + (stretchDegree - 1.0f) * (float)i / steps);
			label.fontSize = Mathf.RoundToInt (Mathf.Clamp(size, initialFontSize, initialFontSize * stretchDegree));

		}


		for (int i = steps; i >= 0; i--) {
			yield return new WaitForSecondsRealtime (time / (2 * steps));
			//yield return null;
			float size = initialFontSize * (1 + (stretchDegree - 1.0f) * (float)i / steps);
			label.fontSize = Mathf.RoundToInt (Mathf.Clamp(size, initialFontSize, initialFontSize * stretchDegree));
		}

		scoreText.GetComponent<Animator> ().SetInteger ("add", 0);

		isChanging = false;

	}

}


