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
	private float armorBarHeight;

	private float armor;

	void Awake()
	{
		canvasRectTransform = canvas.GetComponent<RectTransform> ();
		armorBarHeight = canvasRectTransform.position.z - transform.position.z;
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
		canvasRectTransform.position = new Vector3 (transform.position.x, transform.position.y, transform.position.z + armorBarHeight);
	}


}
