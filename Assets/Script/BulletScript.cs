using UnityEngine;
using System.Collections;

public class BulletScript : MonoBehaviour {

	public AudioClip shotEffect;
	public AudioClip reboundEffect;

	public float lifetime;
	[SerializeField]
	private GameObject Explosion;
    [SerializeField]
    private GameObject Destroyed;
	private EnemyScript.EnemyManeuver enemyType;
	private bool isArtilleryModOn;
	private TrailRenderer bulletTrace;
	private Rigidbody bulletBody;
	private float maxTraceLength;
	private bool hit = false; // this variable is used to avoid situation when two guns hit an enemy simultaneously

	private float damageModifier = 1.0f; 
	private float gunDamageModifier;
	private int hitWallCounter = 0;

	public delegate void hitAction();
	public static event hitAction onHit;

	public delegate void friendlyFireAction ();
	public static event friendlyFireAction onFriendlyFire;
	
	void Awake()
	{
		Destroy (gameObject, lifetime);
	}
	/*void OnCollisionEnter(Collision other){
		if (other.gameObject.tag == "wall"){
			Debug.Log ("wall-in");
		}
	}*/

	void Start()
	{
		SoundManager.instance.PlayEffect (shotEffect);
		enemyType = LevelManagerScript.currentLevel.enemyType;
		isArtilleryModOn = LevelManagerScript.currentLevel.isArtilleryModeOn;
		if (isArtilleryModOn) {
			bulletTrace = GetComponent<TrailRenderer> ();
			bulletBody = GetComponent<Rigidbody> ();
			maxTraceLength = bulletTrace.time * 1.5f;
		}
	}

	void Update()
	{
		if(isArtilleryModOn)
			bulletTrace.time = (1 - Mathf.Abs(bulletBody.velocity.y) / bulletBody.velocity.magnitude) * maxTraceLength;
	}

	void OnTriggerEnter(Collider other) // bullet hits enemy
	{
		if ((other.tag == "enemy" || other.tag == "friend") && !hit) {

			hit = true;

			if (onHit != null && other.tag == "enemy") {
				onHit ();
			}

			if (onFriendlyFire != null && other.tag == "friend") {
				onFriendlyFire ();
			}

			//Vector3 spawnExplosion = other.ClosestPointOnBounds(transform.position);
			Vector3 explosionSite = transform.position;

			//destroyed's rotation
			Quaternion rotation = other.gameObject.GetComponent<EnemyScript> ().Model.transform.rotation;

			//Vector3 spawnExplosion = other.transform.position;
			GameObject explosion = Instantiate (Explosion, explosionSite, Quaternion.identity) as GameObject; // particle
			GameObject destroyed = Instantiate (Destroyed, other.gameObject.transform.position, rotation) as GameObject; // meshs
			destroyed.GetComponent<DestroyedScript> ().explosionSite = new Vector3 (explosionSite.x, explosionSite.y, explosionSite.z);



			Destroy (other.gameObject);
			Destroy (gameObject);

		} else if (other.tag == "armored" && !hit) {

			hit = true;
			
			Vector3 explosionSite = transform.position;
			spawnExplosion (explosionSite);

			ArmoredScript armor = other.gameObject.GetComponent<ArmoredScript> ();

			if (armor.isDestroyed (damageModifier * gunDamageModifier)) {
				if (onHit != null)
					onHit ();
				//destroyed's rotation
				Quaternion rotation = other.gameObject.GetComponent<EnemyScript> ().Model.transform.rotation;

				Destroy (other.gameObject);
				SpawnDestroyed (explosionSite, other.gameObject.transform.position, rotation);
			}

			Destroy (gameObject);


		}


	}
		


	private void spawnExplosion(Vector3 explosionSite)
	{
		GameObject explosion = Instantiate (Explosion, explosionSite, Quaternion.identity) as GameObject;
	}
	private void SpawnDestroyed(Vector3 explosionSite, Vector3 spawnSite, Quaternion rotation)
	{
		GameObject destroyed = Instantiate(Destroyed, spawnSite, rotation) as GameObject; // meshs
		destroyed.GetComponent<DestroyedScript>().explosionSite = new Vector3(explosionSite.x, explosionSite.y, explosionSite.z);
	}

	void OnCollisionEnter(Collision collision)  // bullet hits another bullet
	{
		if (collision.gameObject.tag == "bullet") {
			Destroy (this.gameObject);
			Destroy (collision.gameObject);
			GameObject explosion = Instantiate (Explosion, transform.position, Quaternion.identity) as GameObject;
		} else if (isArtilleryModOn && collision.gameObject.tag == "ground") {
			Destroy (gameObject);
			GameObject explosion = Instantiate (Explosion, transform.position, Quaternion.identity) as GameObject; // particle
		}
	}


	void OnCollisionExit(Collision other){                      // for smart ememies
		if (other.gameObject.tag == "wall") {
			SoundManager.instance.PlayEffect (reboundEffect);

			hitWallCounter++;
			if (hitWallCounter > 2)                          // decrease damage when bullet collides with gun
				damageModifier *= 0.5f;
			

			if (enemyType == EnemyScript.EnemyManeuver.Smart) {
				
				findSmartEnemies ();
			}
		}
	}

	private void findSmartEnemies()
	{
		Vector3 ray = this.GetComponent<Rigidbody> ().velocity;
		RaycastHit[] hitsinfo;
		hitsinfo = Physics.RaycastAll (this.transform.position, ray); 
		for (int i = 0; i < hitsinfo.Length; i++) {

			RaycastHit hitinfo = hitsinfo [i];
			//Debug.Log (hitinfo.collider.tag);

			if (hitinfo.collider.tag == "enemyinadvance") {
				//Debug.Log ("DodgeFromWall");
				Vector3 traj = ray;
				Vector3 originToTarget = hitinfo.transform.position - transform.position;
				//hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);


				Collider carCollider = hitinfo.collider.transform.parent.gameObject.GetComponent<Collider> ();

				Debug.Log (carCollider.tag);

				RaycastHit hit; // we don't need it
				float maxDistance = 20.0f;

				if (carCollider.Raycast (new Ray (transform.position, traj), out hit, maxDistance)) {
					Debug.Log ("dodge");
					hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);
				} else {
					Debug.Log ("moveToGun");
					hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().moveToGun (traj);
				}

				/*if (i + 1 < hitsinfo.Length && (hitsinfo [i + 1].collider.tag == "enemy" || hitsinfo [i + 1].collider.tag == "armored")) {
					hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);
				} else {
					hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().moveToGun (traj);
				}*/



			}
		}
	}

	public float GunDamageModifier {
		get {
			return gunDamageModifier;
		}
		set {
			gunDamageModifier = value;
		}
	}


	public enum BulletType{Basic, Spray}


}
