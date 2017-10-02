using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArmedScript : MonoBehaviour {

	public List<GameObject> targets;

	private List<GunScript> targetComponents;

	[SerializeField]
	private GameObject traceParticle;

	// Use this for initialization
	void Start () {
		for (int i = 0; i < targets.Count; i++) {
			targetComponents [i] = targets [i].GetComponent<GunScript> ();
		}
	}
	
	// Update is called once per frame
	void Update () {


	
	}

	private void shoot(Vector3 target, float scatter)
	{
		Vector2 point = Random.insideUnitCircle;

		Vector3 deflection = new Vector3 (point.x, target.y, point.y); // point.y == target.z

		Vector3 targetWithDeflection = target + deflection * scatter;

		//Instantiate traceParticle

		// line renderer, particle system, whatever ....
	}
}
