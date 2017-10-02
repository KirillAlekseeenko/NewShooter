using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ArmoredScript : MonoBehaviour {

	[SerializeField]
	private float fullArmor;

	[SerializeField]
	private float damage;

	[SerializeField]
	private Image armorBar;
	[SerializeField]
	private Canvas canvas;
	private RectTransform barRectTransform;
	private RectTransform canvasRectTransform;

	private float armor;

	void Awake()
	{
		canvasRectTransform = canvas.GetComponent<RectTransform> ();
		barRectTransform = armorBar.GetComponent<RectTransform> ();
		armor = fullArmor;
	}

	public bool isDestroyed()
	{
		armor -= damage;

		barRectTransform.localScale = new Vector3 (armor / fullArmor, 1, 1);

		return !(armor > 0);
	}

	void LateUpdate()
	{
		canvasRectTransform.rotation = Quaternion.Euler (90, 0, 0);
	}


}
