using UnityEngine;
using System.Collections;

public class EnemyScript : MonoBehaviour {
    private float enemySpeed;
	public float changeDirectionTime;
	public float size;
	private float time;




	[SerializeField]
	private GameObject EnemyInAdvance;
	[SerializeField]
	private Vector3 velocity;
	private Vector3 actualVelocity;

	// advanced enemy
	private bool outOfBorder = false;
	private enum Direction{Right, Left};
	private Direction direction;

	private float border;

	// static enemy
	private float stopPlace = 4.5f; // place, where enemy stops and begin to shoot, shoud be less than SpawnHeight
	private bool isStopped = false;

	// smooth turn
	public bool isTurning = false;
	private float turnSpeed = 15.0f;

	private EnemyManeuver type;


	//wheel animation
	public Animator Model;
    
	//public delegate void hitAction();
	//public static event hitAction onHit;

	// Use this for initialization
	void Start () {
		border = Camera.main.GetComponent<MainScript> ().SpawnEnemyBorder;
		enemySpeed = LevelManagerScript.currentLevel.enemySpeed;
		transform.localScale = transform.localScale * size * LevelManagerScript.currentLevel.enemySize;
		if (type == EnemyManeuver.Advanced) {
			turnSpeed = 10.0f;
			if (flipCoin ())
				direction = Direction.Right;
			else
				direction = Direction.Left;

			if (direction == Direction.Left) {
				velocity = new Vector3 (-1, 0, -1);
			} else {
				velocity = new Vector3 (1, 0, -1);
			}

			changeDirection ();
			//velocity = Vector3.back;
			time = changeDirectionTime;
		}
		if (type == EnemyManeuver.Smart || type == EnemyManeuver.Basic || type == EnemyManeuver.Static) {
			velocity = Vector3.back;
			//EnemyInAdvance.transform.localPosition = velocity.normalized / 2;
		}

		actualVelocity = velocity;
        
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.tag == "wall") {
			//Debug.Log ("enemy triggers wall");
			Vector3 course = new Vector3 ((transform.position - other.transform.position).x, 0, 0).normalized * enemySpeed;
			StartCoroutine(correctCourse(course, 2.0f));
		}
	}
	
	// Update is called once per frame
	void Update () {
		switch (type) {
		case EnemyManeuver.Basic:
			{
				transform.Translate(actualVelocity.normalized * Time.deltaTime * enemySpeed, Space.World);
				transform.rotation = Quaternion.LookRotation (Vector3.back);
				break;
			}
		case EnemyManeuver.Advanced:
			{ 
				
				/*
				var border = Camera.main.GetComponent<MainScript> ().SpawnEnemyBorder;
				if (direction == Direction.Left) {
					transform.Translate (Vector3.ClampMagnitude (new Vector3 (-1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime, Space.World);
					transform.rotation = Quaternion.LookRotation (new Vector3 (-1, 0, -1));
				} else {
					transform.rotation = Quaternion.LookRotation (new Vector3 (1, 0, -1));
					transform.Translate (Vector3.ClampMagnitude (new Vector3 (1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime, Space.World);
				}
					
				if (Mathf.Abs (transform.localPosition.x) >= border) {
					changeDirection ();
					time = changeDirectionTime;
				}
				if (time <= 0) {
					time = changeDirectionTime;
					changeDirection ();
				}*/
				time -= Time.deltaTime;
				if (direction == Direction.Left) {
					velocity = new Vector3 (-1, 0, -1);
				} else {
					velocity = new Vector3 (1, 0, -1);
				}

				if (Mathf.Abs (transform.position.x) >= border) {
					//Debug.Log ("border");
					if (!outOfBorder) {
						if (transform.position.x > 0)
							direction = Direction.Left;
						else
							direction = Direction.Right;
						time = 2 * changeDirectionTime;
						outOfBorder = true;
					}
				} else if (outOfBorder)
					outOfBorder = false;


				if (time <= 0) {
					time = changeDirectionTime;
					if(flipCoin())
						changeDirection ();
				}


				transform.Translate(actualVelocity.normalized * Time.deltaTime * enemySpeed, Space.World);
				transform.rotation = Quaternion.LookRotation (actualVelocity.normalized);

				break;
			}
		case EnemyManeuver.Smart:
			{
				transform.Translate(actualVelocity.normalized * Time.deltaTime * enemySpeed, Space.World);
				transform.rotation = Quaternion.LookRotation (actualVelocity.normalized);
				break;
			}
		case EnemyManeuver.Static:
			{
				float vertical_velocity = -0.05f;
				if (isStopped) {
					if (direction == Direction.Left) {
						velocity = new Vector3 (-1, 0, vertical_velocity);
					} else {
						velocity = new Vector3 (1, 0, vertical_velocity);
					}
				}
					
				if (!isStopped && transform.position.z < stopPlace) {
					isStopped = true;
				}

				if (Mathf.Abs (transform.position.x) >= border) {
					//Debug.Log ("border");
					if (!outOfBorder) {
						if (transform.position.x > 0)
							direction = Direction.Left;
						else
							direction = Direction.Right;
						outOfBorder = true;
					}
				} else if (outOfBorder)
					outOfBorder = false;


				transform.Translate(actualVelocity.normalized * Time.deltaTime * enemySpeed, Space.World);
				transform.rotation = Quaternion.LookRotation (actualVelocity.normalized);

				break;
			}

		}

		if (!actualVelocity.normalized.Equals (velocity.normalized)) {
			
			float angle;
			Vector3 axis;

			Quaternion dif = Quaternion.FromToRotation (actualVelocity, velocity);

			dif.ToAngleAxis (out angle, out axis);


				

			if (angle > 360.0f - angle)
				axis = -axis;

			if (!isTurning) {
				Debug.Log (new Vector3(axis.y, angle, Vector3.Angle(actualVelocity, velocity)));

				if (axis.y > 0)
					Model.SetInteger ("right", 1);
				else
					Model.SetInteger ("right", -1);
				//Debug.Log ("turn");
				isTurning = true;
			}

			//Debug.Log (angle.ToString() + ": " + axis.ToString());

			if (angle < turnSpeed)
				actualVelocity = velocity;
			else {
				actualVelocity = Quaternion.AngleAxis (turnSpeed, axis) * actualVelocity;
			}

		} else if (isTurning) {
			Model.SetInteger ("right", 0);
			//Debug.Log ("turn");
			isTurning = false;

		}

        	
    }

	public void setType(EnemyManeuver _type)
	{
		type = _type;
	}


	private void changeDirection()
	{
		if (outOfBorder)
			return;
		if (direction == Direction.Left) {
			//transform.Translate (Vector3.ClampMagnitude (new Vector3 (1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime);
			direction = Direction.Right;
		} else {
			//transform.Translate (Vector3.ClampMagnitude (new Vector3 (-1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime);
			direction = Direction.Left;
		}

	}
	private bool flipCoin()
	{
		int n = Random.Range (0, 3);
		if (n == 0)
			return true;
		else
			return false;
	}
	public void dodgeBullet(Vector3 trajectory, Vector3 originToPosition) // smart
	{
		Vector3 dir = originToPosition - trajectory;

		Vector3 result = new Vector3 (1, 0, 1);
		result.z = -trajectory.x / trajectory.z; 
		result = Vector3.Normalize (result) * enemySpeed;
		if (Vector3.Dot (result, dir) < 0)
			result = -result;

		StartCoroutine(correctCourse(result, 1.0f));

	}
	public IEnumerator correctCourse(Vector3 newCourse, float time) //
	{
		velocity = newCourse;

		yield return new WaitForSeconds (time);

		if(velocity.Equals(newCourse) && type == EnemyManeuver.Smart)
			velocity = Vector3.back;

		if (velocity.Equals (newCourse) && type == EnemyManeuver.Advanced)
			time = changeDirectionTime;
		
	}

	public enum EnemyManeuver : int{Basic = 0, Advanced = 1, Smart = 2, Static = 3};

	
}


