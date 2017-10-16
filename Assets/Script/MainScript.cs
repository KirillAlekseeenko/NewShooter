using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using System;

public class MainScript : MonoBehaviour {

	private int levelNumber;

	//spawn prefabs
	public GameObject Enemy;
	public GameObject Friend;
	public GameObject Armored;
	public GameObject Armed;

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
	private int oneStarBorder;
	private int twoStarsBorder;
	private int threeStarsBorder;

	//spawn


	private float friendSpawnChance;
	private float armoredSpawnChance;
	private float armedSpawnChance;

	private int friendAmount;
	private int armoredAmount;
	private int armedAmount;

	// guns

	[SerializeField]
	private GunScript leftGun;
	[SerializeField]
	private GunScript rightGun;


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

	public ScoreText scoreText;
	public ScoreText remainText;


	//audio
	[Header("Audio")]

	[SerializeField]
	private Toggle audioToggle;
	[SerializeField]
	private Slider effectsSlider;
	[SerializeField]
	private Slider musicSlider;
	[SerializeField]
	private Slider audioSlider;


	[Space(10)]

	//animations

	public Animator transitionImage;
	public Text levelText;
	public List<Animator> pauseButtons;

	//private int fontSize = 44; // POTENTIAL DANGER
	private bool isChanging = false; // label resize


    // Use this for initialization
    void Start () {

		levelNumber = LevelManagerScript.currentLevel.number;
		levelText.text = "Level " + levelNumber.ToString ();




		// spawn info
		friendSpawnChance = LevelManagerScript.currentLevel.friendSpawnChance;
		armoredSpawnChance = LevelManagerScript.currentLevel.armoredSpawnChance;
		armedSpawnChance = LevelManagerScript.currentLevel.armedSpawnChance;
		SpawnTime = LevelManagerScript.currentLevel.spawnRate;

		friendAmount = Mathf.RoundToInt (initialNumberOfEnemies * friendSpawnChance);
		armoredAmount = Mathf.RoundToInt (initialNumberOfEnemies * armoredSpawnChance);
		armedAmount = Mathf.RoundToInt (initialNumberOfEnemies * armedSpawnChance);

		// stars

		int actualEnemies = initialNumberOfEnemies - friendAmount;
		threeStarsBorder = actualEnemies * addToScore;
		twoStarsBorder = addToScore * actualEnemies - 2 * (takeFromScore + addToScore);
		oneStarBorder = addToScore * actualEnemies - 6 * (takeFromScore + addToScore);



		Time.timeScale = 1;
		timeToSpawn = SpawnTime; // spawn reload

		// UI initialization
		remain = initialNumberOfEnemies;
		spawned = initialNumberOfEnemies;
		score = initialScore;
		scoreText.updateLabel (score);

		//events
		BorderScript.onMiss += reduceScore;
		BulletScript.onHit += addScore;
		BulletScript.onFriendlyFire += reduceScore;
		BorderScript.onFriendPassed += friendPassed;


    }

	private void unsubscribeFromEvents()
	{
		BorderScript.onMiss -= reduceScore;
		BulletScript.onHit -= addScore;
		BulletScript.onFriendlyFire -= reduceScore;
		BorderScript.onFriendPassed -= friendPassed;
	}


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

		//touch

		Touch[] touches = Input.touches;
		foreach (Touch touch in touches) {
			if (!(touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved))
				continue;
			if (Camera.main.ScreenToWorldPoint (new Vector3 (touch.position.x, touch.position.y)).x > 0) {
				rightGun.fire ();
			} else {
				leftGun.fire ();
			}
		}

		// keyboard
		if(Input.GetKeyDown(KeyCode.X))
		{
			GunScript.isAutomatic = !GunScript.isAutomatic;
		}
        
    }

	private void SpawnEnemy(EnemyScript.EnemyManeuver type)
	{
		EnemyScript.EnemyManeuver _type = type;
		GameObject spawnPrefab;

		int value = UnityEngine.Random.Range(0, spawned);
		//Debug.Log (new Vector3(value).ToString ());
		if (value - friendAmount < 0) {
			spawnPrefab = Friend;
			friendAmount--;
			//Debug.Log (friendAmount);
		} else if (value - friendAmount - armoredAmount < 0) {
			spawnPrefab = Armored;
			armoredAmount--;
		} else if (value - friendAmount - armoredAmount - armedAmount < 0) {
			spawnPrefab = Armed;
			armedAmount--;
			_type = EnemyScript.EnemyManeuver.Static;
		} else {
			spawnPrefab = Enemy;
		}

		timeToSpawn = SpawnTime;
		GameObject _enemy = Instantiate(spawnPrefab, new Vector3(UnityEngine.Random.Range(-SpawnEnemyBorder, SpawnEnemyBorder), 0, SpawnHeight), Quaternion.Euler(new Vector3(0, 0, 0))) as GameObject;
		_enemy.GetComponent<EnemyScript> ().setType (_type);
	}
		
	public void updateRemainLabel()
	{
		if (remain < 4) {// 3 2 1 0
			remainText.updateLabel(remain, 0);
		}
		remainText.updateLabel (remain);
	}

	public void reduceScore()
	{
		remain--;
		updateRemainLabel ();
		score -= takeFromScore;
		scoreText.updateLabel (score, -1);

	}
	public void addScore()
	{
		remain--;
		updateRemainLabel ();
		score += addToScore;
		scoreText.updateLabel (score, 1);

		//StartCoroutine(LabelStretchAndShrink(scoreText, 0.5f, 1.5f, 15));
	}
	public void friendPassed()
	{
		remain--;
		updateRemainLabel ();
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
					if(levelList [levelNumber - 1].stars == 0)
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
		SoundManager.instance.musicSource.volume = musicSlider.value;
	}
	public void onEffectsSliderValueChanged()
	{
		SoundManager.instance.effectsSource.volume = effectsSlider.value;
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
		levelText.gameObject.SetActive(false);
		StartCoroutine (sceneFadeOut (SceneManager.LoadScene, "MainMenu"));
	}

	private IEnumerator sceneFadeOut(Action<string> f, string arg)
	{
		levelText.text = "Level " + LevelManagerScript.currentLevel.number.ToString();
		transitionImage.SetBool ("faded", true);
		yield return new WaitForSeconds (0.5f);
		f (arg);
	}

}


