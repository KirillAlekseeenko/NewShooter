using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreText : Text {

	private bool isChanging = false;

	public void updateLabel(int newScore, int color)
	{
		text = newScore.ToString ();
		if(!isChanging)
			StartCoroutine(LabelStretchAndShrink(0.5f, 1.75f, 15, color));
	}
	public void updateLabel(int newScore)
	{
		text = newScore.ToString ();
	}
	


	private IEnumerator LabelStretchAndShrink(float time, float stretchDegree, int steps, int color) // green or red, 1 or -1
	{
		isChanging = true;

		GetComponent<Animator> ().SetInteger ("add", color);

		int initialFontSize = fontSize;
		for (int i = 1; i <= steps; i++) {
			yield return new WaitForSecondsRealtime (time / (2 * steps));
			//yield return null;
			float size = initialFontSize * (1 + (stretchDegree - 1.0f) * (float)i / steps);
			fontSize = Mathf.RoundToInt (Mathf.Clamp(size, initialFontSize, initialFontSize * stretchDegree));

		}


		for (int i = steps; i >= 0; i--) {
			yield return new WaitForSecondsRealtime (time / (2 * steps));
			//yield return null;
			float size = initialFontSize * (1 + (stretchDegree - 1.0f) * (float)i / steps);
			fontSize = Mathf.RoundToInt (Mathf.Clamp(size, initialFontSize, initialFontSize * stretchDegree));
		}

		GetComponent<Animator> ().SetInteger ("add", 0);

		isChanging = false;

	}
}
