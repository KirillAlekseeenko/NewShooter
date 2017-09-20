using UnityEngine;
using System.Collections;

public class GunScript : MonoBehaviour {

    public int speed = 60;
    public float bulletSpeed;
    public GameObject bullet;
    public GameObject bulletSpawn;
	public GameObject reloadBar;
	//public ProgressRadialBehaviour reloadScript;
    public float fireRate;
    public string inputName;
    private float nextFire;
    
	// Use this for initialization
	void Start () {
        nextFire = 0;


	}

	// Update is called once per frame
	void FixedUpdate () {
        nextFire += Time.deltaTime;
		var _fillerSize = 1 - nextFire / fireRate;
		if (_fillerSize < 0)
			_fillerSize = 0.0f;
        transform.Rotate(Vector3.up * Time.deltaTime * speed);
		reloadBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (_fillerSize);
        if(Input.GetKey(inputName))
        {
			fire ();
        }
    }

	public void fire()
	{
		if (nextFire > fireRate) {
			nextFire = 0;
			GameObject newBullet = Instantiate (bullet, bulletSpawn.transform.position, Quaternion.identity) as GameObject;
			Vector3 velocity = bulletSpawn.transform.position - transform.position;
			newBullet.GetComponent<Rigidbody> ().velocity = velocity * bulletSpeed;

			RaycastHit[] hitsinfo;
			hitsinfo = Physics.RaycastAll (bulletSpawn.transform.position, velocity);
			for (int i = 0; i < hitsinfo.Length; i++) {

				RaycastHit hitinfo = hitsinfo [i];

				if (hitinfo.collider.tag == "enemyinadvance") {
					Debug.Log ("Dodge");

					Vector3 traj = newBullet.GetComponent<Rigidbody> ().velocity;
					//Debug.DrawRay (bulletSpawn.transform.position, velocity, Color.red, 30.0f);

					Vector3 originToTarget = hitinfo.transform.position - bulletSpawn.transform.position;
					//Debug.DrawLine(bulletSpawn.transform.position, hitinfo.transform.position, Color.blue, 30.0f);

					hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);
				}
			}
			
		}
	}
}
