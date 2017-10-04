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
	}

	void OnTriggerEnter(Collider other) // bullet hits enemy
	{
		if (other.tag == "enemy" || other.tag == "friend") {
			if (onHit != null && other.tag == "enemy") {
				onHit ();
			}

			if (onFriendlyFire != null && other.tag == "friend") {
				onFriendlyFire ();
			}

            //Vector3 spawnExplosion = other.ClosestPointOnBounds(transform.position);
			Vector3 explosionSite = transform.position;

            //destroyed's rotation
            Quaternion rotation = other.gameObject.GetComponent<EnemyScript>().Model.transform.rotation;

            //Vector3 spawnExplosion = other.transform.position;
            GameObject explosion = Instantiate (Explosion, explosionSite, Quaternion.identity) as GameObject; // particle
            GameObject destroyed = Instantiate(Destroyed, other.gameObject.transform.position, rotation) as GameObject; // meshs
            destroyed.GetComponent<DestroyedScript>().explosionSite = new Vector3(explosionSite.x, explosionSite.y, explosionSite.z);



			Destroy (other.gameObject);
			Destroy (gameObject);
			//Destroy (EnemyInAdvance);
		}

		if (other.tag == "armored") {
			
			Vector3 explosionSite = transform.position;
			spawnExplosion (explosionSite);

			ArmoredScript armor = other.gameObject.GetComponent<ArmoredScript> ();

			if (armor.isDestroyed ()) {

				if (onHit != null)
					onHit ();
				//destroyed's rotation
				Quaternion rotation = other.gameObject.GetComponent<EnemyScript>().Model.transform.rotation;

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
		}
	}


	void OnCollisionExit(Collision other){                      // for smart ememies
		if (other.gameObject.tag == "wall") {
			SoundManager.instance.PlayEffect (reboundEffect);
			Vector3 ray = this.GetComponent<Rigidbody> ().velocity;
			if (enemyType == EnemyScript.EnemyManeuver.Smart) {
				RaycastHit[] hitsinfo;
				hitsinfo = Physics.RaycastAll (this.transform.position, ray); 
				for (int i = 0; i < hitsinfo.Length; i++) {

					RaycastHit hitinfo = hitsinfo [i];
				
					if (hitinfo.collider.tag == "enemyinadvance") {
						//Debug.Log ("DodgeFromWall");
						Vector3 traj = ray;
						Vector3 originToTarget = hitinfo.transform.position - transform.position;
						//hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);

						hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);

					}
				}
			
			}
		}
	}




}
