using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ArmedScript : MonoBehaviour {

	[SerializeField]
	public List<GameObject> targets;

	private List<GunScript> targetComponents;

	[SerializeField]
	private GameObject traceParticlePrefab;
	private GameObject traceParticle;
	private ParticleSystem traceComponent;
	private bool isShooting = false;
	[SerializeField]
	private float scatter;

	// Use this for initialization
	void Start () {
		for (int i = 0; i < targets.Count; i++) {
			targetComponents [i] = targets [i].GetComponent<GunScript> ();
		}
		startShooting ();
	}
	
	// Update is called once per frame
	void Update () {

		if (isShooting) {
			for (int i = 0; i < targets.Count; i++) {
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

		float length = (targetWithDeflection - transform.position).magnitude; // length of the particle
		traceComponent.startLifetime = length / traceComponent.startSpeed;

		Quaternion rotation = Quaternion.LookRotation (targetWithDeflection - transform.position); // particle's rotation
		traceParticle.transform.localRotation = rotation;
		traceComponent.startRotation3D = new Vector3 (0, 0, 180.0f + rotation.y);


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
