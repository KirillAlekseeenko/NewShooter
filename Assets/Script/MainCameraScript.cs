using UnityEngine;
using System.Collections;

public class MainCameraScript : MonoBehaviour {

	float orthographic_size_0 = 5.35f;
	float aspect_0 = 9f / 16f;

	// Use this for initialization
	void Start () {

		//Camera.main.orthographicSize = orthographic_size_0 * aspect_0 / ((float)Screen.width / (float)Screen.height);
		float width = ((float)Screen.height / (float)Screen.width) * aspect_0;
		float X = (1 - width) / 2;

		Camera.main.rect = new Rect (new Vector2 (X, 0), new Vector2 (width, 1.0f));
		//Camera.main.orthographicSize = orthographic_size_0 * aspect_0 / (640f / 960f);
		//Camera.main.orthographicSize = constant * (960f / 640f);
	
	}

}
