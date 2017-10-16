using UnityEngine;
using System.Collections;

public class GunScript : MonoBehaviour {

    public float speed = 60;
    public float bulletSpeed;
	private EnemyScript.EnemyManeuver enemyType;
    public GameObject bullet;
    public GameObject bulletSpawn;
	public GameObject reloadBar;
	public GameObject doubleBar;
	public GameObject healthBar;
	//public ProgressRadialBehaviour reloadScript;
    public float fireRate;
    public string inputName;
    private float nextFire;

	private float catet = 0.822f; // DANGER!!
	private float laserLength = 20.0f;

	// burst mode

	static public bool isAutomatic = false;

	// semi-automatic mode

	private float gunDamageModifier = 1.0f;
	private float maxGunDamageModifier = 2.0f;
	private float gunDamageModifierIncreaseSpeed = 0.2f;

	// health

	[SerializeField]
	private float fullHealth;
	private float health;
	[SerializeField]
	private float repairedPerFrame;
	private bool isFreezed = false;
	[SerializeField]
	private GameObject destroyedGun;
	[SerializeField]
	private GameObject normalGun;
	[SerializeField]
	private GameObject explosion;
	[SerializeField]
	private GameObject mainLaser;



	//reflection

	public GameObject laserReflection;
	public GameObject wallReflection;
	public bool isRight;
	private bool isReflectionOn = false;
    
	// Use this for initialization
	void Start () {
		speed *= LevelManagerScript.currentLevel.gunSpeedModifier;
		bulletSpeed *= LevelManagerScript.currentLevel.bulletSpeedModifier;
		fireRate *= LevelManagerScript.currentLevel.gunReloadModifier;
		health = fullHealth;
		healthBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (health / fullHealth);
        nextFire = 0;
		enemyType = LevelManagerScript.currentLevel.enemyType;

	}

	// Update is called once per frame
	void Update () {
		// reflection

		if (!isFreezed) {
			reflectRay ();
			nextFire += Time.deltaTime;
		} else {
			repair ();
		}

		transform.Rotate (Vector3.up * Time.deltaTime * speed);

		var _fillerSize = nextFire / fireRate;
		if (_fillerSize < 0)
			_fillerSize = 0.0f;
        
		reloadBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (_fillerSize);



		// touch input



		//keyboard input

		if (Input.GetKeyDown (inputName)) {
			fire ();
		}

		if (nextFire > fireRate) {
			gunDamageModifier += gunDamageModifierIncreaseSpeed * Time.deltaTime;
			gunDamageModifier = Mathf.Clamp (gunDamageModifier, 0, maxGunDamageModifier);
			doubleBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize ((gunDamageModifier - 1) / (maxGunDamageModifier - 1));
		}

    }

	public void fire()
	{
		if (nextFire > fireRate) {
			nextFire = 0;
			GameObject newBullet = Instantiate (bullet, bulletSpawn.transform.position, Quaternion.identity) as GameObject;
			Vector3 velocity = bulletSpawn.transform.position - transform.position;
			newBullet.GetComponent<Rigidbody> ().velocity = velocity * bulletSpeed;
			newBullet.GetComponent<BulletScript> ().GunDamageModifier = gunDamageModifier;
			gunDamageModifier = 1.0f;
			doubleBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (0.0f);

			if (enemyType == EnemyScript.EnemyManeuver.Smart) {

				RaycastHit[] hitsinfo;
				hitsinfo = Physics.RaycastAll (bulletSpawn.transform.position, velocity);
				for (int i = 0; i < hitsinfo.Length; i++) {

					RaycastHit hitinfo = hitsinfo [i];
					Debug.Log (hitinfo.collider.tag);

					if (hitinfo.collider.tag == "enemyinadvance") {
						//Debug.Log ("Dodge");

						Vector3 traj = newBullet.GetComponent<Rigidbody> ().velocity;
						Debug.DrawLine (bulletSpawn.transform.position, bulletSpawn.transform.position + 5 * traj);
						//Debug.DrawRay (bulletSpawn.transform.position, velocity, Color.red, 30.0f);

						Vector3 originToTarget = hitinfo.transform.position - bulletSpawn.transform.position;
						//Debug.DrawLine(bulletSpawn.transform.position, hitinfo.transform.position, Color.blue, 30.0f);

						//hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);

						//hitinfo.collider.gameObject.GetComponentInParent<BoxCollider> ().


						Collider carCollider = hitinfo.collider.transform.parent.gameObject.GetComponent<Collider> ();

						RaycastHit hit; // we don't need it
						float maxDistance = 20.0f;

						if (carCollider.Raycast (new Ray (bulletSpawn.transform.position, traj), out hit, maxDistance)) {
							Debug.Log ("dodge");
							hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().dodgeBullet (traj, originToTarget);
						} else {
							Debug.Log ("moveToGun");
							hitinfo.collider.gameObject.GetComponentInParent<EnemyScript> ().moveToGun (traj);
						}

					}
				}
			}
			
		}
	}

	private void reflectRay()
	{
		RaycastHit hitinfo;
		Vector3 direction = bulletSpawn.transform.position - transform.position;
		if (Physics.Raycast (new Ray (transform.position, direction), out hitinfo, 3.0f) && hitinfo.collider.gameObject.tag == "wall") {

			Vector3 normal;

			if (direction.x > 0)
				normal = Vector3.left;
			else
				normal = Vector3.right;

			Vector3 reflectDirection = Vector3.Reflect (direction, normal);

			if (!isReflectionOn) {
				isReflectionOn = true;
				laserReflection.SetActive (true);
			}



			laserReflection.GetComponent<LineRenderer> ().SetPosition (0, hitinfo.point);
			laserReflection.GetComponent<LineRenderer> ().SetPosition (1, hitinfo.point + reflectDirection * laserLength);

		} else {
			if (isReflectionOn) {
				isReflectionOn = false;
				laserReflection.SetActive (false);
			}
		}
	}

	public void decreaseHealth(float damage)
	{
		health -= damage;
		if (health <= 0)
			freeze ();
		healthBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (health / fullHealth);

	}
	public bool isFreeze ()
	{
		return isFreezed;
	}
	private void repair()
	{
		health += repairedPerFrame * Time.deltaTime;
		if (health >= fullHealth) {
			health = fullHealth;
			unfreeze ();
		}
		healthBar.GetComponent<ProgressBar.ProgressRadialBehaviour> ().SetFillerSize (health / fullHealth);
	}
	private void freeze()
	{
		GameObject ex = Instantiate (explosion, transform.position, Quaternion.identity) as GameObject; // particle
		isFreezed = true;
		destroyedGun.SetActive (true);
		normalGun.SetActive (false);
		mainLaser.SetActive (false);
		laserReflection.SetActive (false);
		isReflectionOn = false;
		nextFire = 0;
	}
	private void unfreeze()
	{
		isFreezed = false;
		destroyedGun.SetActive (false);
		normalGun.SetActive (true);
		mainLaser.SetActive (true);
	}



}
