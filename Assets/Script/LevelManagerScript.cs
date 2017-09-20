using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelManagerScript : MonoBehaviour {

	delegate void loadScene();

	[SerializeField] private Font font;

	[System.Serializable]
	public class Level
	{
		public int number;
		public int stars;
		public bool locked;

		// properties

		public float enemySpeed;
		public float spawnRate;
		public float enemySize;
		public EnemyScript.EnemyType enemyType;

		public Button.ButtonClickedEvent onButtonClicked;

		public Level(Level other)
		{
			number = other.number;
			stars = other.stars;
			locked = other.locked;

			enemySpeed = other.enemySpeed;
			enemySize = other.enemySize;
			enemyType = other.enemyType;
			spawnRate = other.spawnRate;

			onButtonClicked = other.onButtonClicked;
		}

	}
	[System.Serializable]
	public class LevelListWrapper
	{
		public List<Level> levelList;
		public LevelListWrapper(List<Level> levList)
		{
			levelList = new List<Level>(levList);
		}
	}

	public List<Level> initialLevelList;
	private List<Level> levelList;
	public GameObject Button;
	public Transform ButtonPanel;
	public static Level currentLevel;

	// animation

	private List<GameObject> levelButtons = new List<GameObject> (12);
	private float button_appear = 0.05f;
	public Animator transitionImage;

	private IEnumerator SceneFadeOut()
	{
		transitionImage.SetBool ("faded", true);
		yield return new WaitForSeconds (0.5f);
		SceneManager.LoadScene("Level1"); 
	}

	private void FillList()
	{

		// getting json from playerprefs and unpacking

		if (PlayerPrefs.HasKey ("SAVE") && PlayerPrefs.GetString("SAVE") != "{}") {

			var jsonString = PlayerPrefs.GetString ("SAVE");

			levelList = JsonUtility.FromJson<LevelListWrapper> (jsonString).levelList;
		} 
		else {
			PlayerPrefs.SetString("SAVE", JsonUtility.ToJson(new LevelListWrapper(initialLevelList)));
			Debug.Log (JsonUtility.ToJson (new LevelListWrapper(initialLevelList)));
			levelList = new List<Level>(initialLevelList);
		}

		for (int i = 0;i < levelList.Count;i++) {

			var level = levelList [i];

			GameObject newButton = Instantiate (Button, ButtonPanel) as GameObject;

			newButton.SetActive (false);
			levelButtons.Add (newButton);

			newButton.GetComponent<ButtonScript> ().LevelText.text = level.number.ToString ();
			newButton.GetComponent<ButtonScript> ().LevelText.font = font;
			newButton.GetComponent<ButtonScript> ().LevelText.color = new Color (227, 255, 231);

			newButton.transform.localScale = Vector3.one;


			//newButton.GetComponent<Button> ().onClick.AddListener (() => { SceneManager.LoadScene("Level" + level.number.ToString()); });
			newButton.GetComponent<Button> ().onClick.AddListener (() => 
				{ 
					currentLevel = new Level(level);
					StartCoroutine(SceneFadeOut());
					 
				});

			if (level.locked) {
				newButton.GetComponent<Button> ().interactable = false;
			}


			switch (level.stars) {
				
			case 0:
				{
					newButton.GetComponent<ButtonScript> ().Star1.SetActive (false);
					newButton.GetComponent<ButtonScript> ().Star2.SetActive (false);
					newButton.GetComponent<ButtonScript> ().Star3.SetActive (false);
					break;
				}
			case 1:
				{
					newButton.GetComponent<ButtonScript> ().Star2.SetActive (false);
					newButton.GetComponent<ButtonScript> ().Star3.SetActive (false);
					break;
				}
			case 2:
				{
					newButton.GetComponent<ButtonScript> ().Star3.SetActive (false);
					break;
				}
			default:
				{
					break;
				}

			}

		}
	}

	public IEnumerator levelButtonsAppear()
	{
		for (int i = 0; i < levelButtons.Count; i++) {
			var button = levelButtons [i];
			button.SetActive (true);
			yield return new WaitForSeconds (button_appear);
		}
	}
	public void levelButtonsDisappear()
	{
		for (int i = 0; i < levelButtons.Count; i++) {
			var button = levelButtons [i];
			button.SetActive (false);
		}
	}

	public void resetButtonClick()
	{
		PlayerPrefs.SetString("SAVE", JsonUtility.ToJson(new LevelListWrapper(initialLevelList)));
		levelList = new List<Level>(initialLevelList);
	}

	/*public void LoadLevel1()
	{
		
	}
	public void LoadLevel2()
	{

	}
	public void LoadLevel3()
	{

	}
	public void LoadLevel4()
	{

	}
	public void LoadLevel5()
	{

	}
	public void LoadLevel6()
	{

	}
	public void LoadLevel7()
	{

	}*/



	// Use this for initialization
	void Start () {

		FillList ();
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}


