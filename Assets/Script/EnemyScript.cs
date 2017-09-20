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
	public GameObject Model;
	private Vector3 velocity;


	private enum Direction{Right, Left};
	private Direction direction;

	private EnemyType type;
    
	//public delegate void hitAction();
	//public static event hitAction onHit;

	// Use this for initialization
	void Start () {
		enemySpeed = LevelManagerScript.currentLevel.enemySpeed;
		transform.localScale = transform.localScale * size * LevelManagerScript.currentLevel.enemySize;
		if (type == EnemyType.Advanced) {
			if (flipCoin ())
				direction = Direction.Right;
			else
				direction = Direction.Left;

			changeDirection ();
			time = changeDirectionTime;
		}
		if (type == EnemyType.Smart) {
			velocity = Vector3.back;
			//EnemyInAdvance.transform.localPosition = velocity.normalized / 2;
		}
        
	}

	void OnTriggerEnter(Collider other)
	{
		if (other.tag == "wall") {
			Vector3 course = new Vector3 ((transform.position - other.transform.position).x, 0, 0).normalized * enemySpeed;
			StartCoroutine(correctCourse(course, 1.0f));
		}
	}
	
	// Update is called once per frame
	void Update () {
		switch (type) {
		case EnemyType.Basic:
			{
				transform.Translate(Vector3.back * Time.deltaTime * enemySpeed);
				transform.rotation = Quaternion.LookRotation (Vector3.back);
				break;
			}
		case EnemyType.Advanced:
			{ 
				time -= Time.deltaTime;
				var border = Camera.main.GetComponent<MainScript> ().SpawnEnemyBorder;
				if (direction == Direction.Left) {
					transform.Translate (Vector3.ClampMagnitude (new Vector3 (-1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime);
					transform.rotation = Quaternion.LookRotation (new Vector3 (-1, 0, -1));
				} else {
					transform.rotation = Quaternion.LookRotation (new Vector3 (1, 0, -1));
					transform.Translate (Vector3.ClampMagnitude (new Vector3 (1, 0, -1) * enemySpeed, enemySpeed) * Time.deltaTime);
				}
					
				if (Mathf.Abs (transform.localPosition.x) >= border) {
					changeDirection ();
					time = changeDirectionTime;
				}
				if (time <= 0) {
					time = changeDirectionTime;
					changeDirection ();
				}

				break;
			}
		case EnemyType.Smart:
			{
				transform.Translate(velocity.normalized * Time.deltaTime * enemySpeed, Space.World);
				transform.rotation = Quaternion.LookRotation (velocity.normalized);
				break;
			}
		}

        	
    }

	public void setType(EnemyType _type)
	{
		type = _type;
	}


	private void changeDirection()
	{
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
		int n = Random.Range (0, 2);
		if (n == 0)
			return false;
		else
			return true;
	}
	public void dodgeBullet(Vector3 trajectory, Vector3 originToPosition)
	{
		/*var yr = trajectory.x * enemySpeed / Mathf.Sqrt (Mathf.Pow (trajectory.x, 2.0f) + Mathf.Pow (trajectory.z, 2.0f));

		var xr = enemySpeed * Mathf.Sqrt (1 - Mathf.Pow (trajectory.x, 2.0f) / (Mathf.Pow (trajectory.x, 2.0f) + Mathf.Pow (trajectory.z, 2.0f)));

		Vector3 result1 = new Vector3 (-xr, 0, yr);
		Vector3 result2 = new Vector3 (xr, 0, -yr);
		Vector3 result;

		Vector3 dir = originToPosition - trajectory;

		if (Mathf.Approximately (Vector3.Dot (result1, trajectory), 0)) {
			result = result1;
		} else {
			result = result2;
		}*/



		/*if (Vector3.Dot (result) < 0) {
			result1 = new Vector3 (xr, 0, yr);
			result = new Vector3 (xr, 0, yr);
		} else {
			result2 = new Vector3 (-xr, 0, -yr);
			result = new Vector3 (-xr, 0, -yr);
		}*/

		
		/*Debug.Log(Vector3.Dot(trajectory, result1).ToString());
		Debug.Log(Vector3.Dot(trajectory, result2).ToString());

		if (velocity.Equals (Vector3.back)) {
			velocity = result;
		} else {
			velocity += result;
			velocity = Vector3.ClampMagnitude (velocity, enemySpeed);
		}*/
		Vector3 dir = originToPosition - trajectory;

		Vector3 result = new Vector3 (1, 0, 1);
		result.z = -trajectory.x / trajectory.z; 
		result = Vector3.Normalize (result) * enemySpeed;
		if (Vector3.Dot (result, dir) < 0)
			result = -result;

	/*if (velocity.Equals (Vector3.back)) {
			velocity = result;
		} else {
			velocity += result;
			velocity = Vector3.ClampMagnitude (velocity, enemySpeed);
		}*/
		StartCoroutine(correctCourse(result, 1.0f));

	}
	public IEnumerator correctCourse(Vector3 newCourse, float time)
	{
		velocity = newCourse;

		yield return new WaitForSeconds (time);
		
		if(velocity.Equals(newCourse))
			velocity = Vector3.back;
	}

	public enum EnemyType{Basic, Advanced, Smart};

}


