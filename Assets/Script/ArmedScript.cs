using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArmedScript : MonoBehaviour {

	private GameObject[] targets;

	private GunScript[] targetComponents;

	[SerializeField]
	private GameObject traceParticlePrefab;
	private GameObject traceParticle;
	private ParticleSystem traceComponent;
	private bool isShooting = false;
	[SerializeField]
	private float scatter;
	[SerializeField]
	private float shift; // shifted trail looks much more realistic

	// Use this for initialization
	void Start () {
		targets = GameObject.FindGameObjectsWithTag ("gun");
		targetComponents = new GunScript[targets.Length];
		for (int i = 0; i < targets.Length; i++) {
			targetComponents [i] = targets [i].GetComponent<GunScript> ();
		}
		startShooting ();
	}
	
	// Update is called once per frame
	void Update () {

		if (isShooting) {
			for (int i = 0; i < targets.Length; i++) {
				if (targetComponents [i].isFreeze ())
					continue;
				shoot (targets [i].transform.position, scatter); 
			}
		}
	
	}

	void OnDestroy()
	{
		finishShooting ();
	}

	private void shoot(Vector3 target, float scatter)
	{
		Vector2 point = Random.insideUnitCircle;

		Vector3 deflection = new Vector3 (point.x, target.y, point.y); // point.y == target.z

		Vector3 targetWithDeflection = target + deflection * scatter;

		
		Vector3 direction = (targetWithDeflection - transform.position).normalized; // origin of the particle
		traceParticle.transform.position = transform.position + direction * shift;

		float length = (targetWithDeflection - transform.position).magnitude; // length of the particle
		traceComponent.startLifetime = (length - 2 * shift) / traceComponent.startSpeed;

		Quaternion rotation = Quaternion.LookRotation (targetWithDeflection - transform.position);// particle's rotation



		traceParticle.transform.localRotation = rotation;
		Debug.Log (traceParticle.transform.localRotation.eulerAngles.y.ToString());
		traceComponent.startRotation3D = new Vector3 (0, 0, (180.0f + traceParticle.transform.rotation.eulerAngles.y) * Mathf.Deg2Rad);


	}
	private void startShooting()
	{
		isShooting = true;
		traceParticle = Instantiate (traceParticlePrefab, transform.position, Quaternion.Euler(180.0f, 0, 0)) as GameObject;
		traceComponent = traceParticle.GetComponent<ParticleSystem> ();
	}
	private void finishShooting()
	{
		isShooting = false;
		if(traceParticle != null)
			Destroy (traceParticle);
		traceParticle = null;
		traceComponent = null;
	}
}
