using UnityEngine;
using System.Collections;

public class BulletScript : MonoBehaviour {

	public float lifetime;
	[SerializeField]
	private GameObject Explosion;
    [SerializeField]
    private GameObject Destroyed;

	public delegate void hitAction();
	public static event hitAction onHit;
	
	void Awake()
	{
		Destroy (gameObject, lifetime);
	}
	/*void OnCollisionEnter(Collision other){
		if (other.gameObject.tag == "wall"){
			Debug.Log ("wall-in");
		}
	}*/

	void OnTriggerEnter(Collider other)
	{
		if (other.tag == "enemy") {
			if (onHit != null) {
				onHit ();
			}

            //Vector3 spawnExplosion = other.ClosestPointOnBounds(transform.position);
            Vector3 spawnExplosion = transform.position;

            //destroyed's rotation
            Quaternion rotation = other.gameObject.GetComponent<EnemyScript>().Model.transform.rotation;

            //Vector3 spawnExplosion = other.transform.position;
            GameObject explosion = Instantiate (Explosion, spawnExplosion, Quaternion.identity) as GameObject;
            GameObject destroyed = Instantiate(Destroyed, other.gameObject.transform.position, rotation) as GameObject;
            destroyed.GetComponent<DestroyedScript>().explosionSite = new Vector3(spawnExplosion.x, spawnExplosion.y, spawnExplosion.z);



			Destroy (other.gameObject);
			Destroy (gameObject);
			//Destroy (EnemyInAdvance);
		}
	}


	void OnCollisionExit(Collision other){
		if (other.gameObject.tag == "wall"){
			Vector3 ray = this.GetComponent<Rigidbody> ().velocity;
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
