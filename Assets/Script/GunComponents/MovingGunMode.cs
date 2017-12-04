using UnityEngine;
using System.Collections;

public class MovingGunMode : MonoBehaviour {

	[SerializeField]
	private float moveInterval;
	[SerializeField]
	private float moveSpeed;
	[SerializeField]
	private Direction initialDirection;
	private Direction currentDirection;

	void Start()
	{
		currentDirection = initialDirection;
	}

	void Update()
	{
		if (IsTransfromOutside()) {
			ChangeDirection ();
		}

		Move ();
	}

	private bool IsTransfromOutside()
	{
		return Mathf.Abs (transform.position.z) > moveInterval;
	}

	private void ChangeDirection()
	{
		Vector3 pos = transform.position;
		if (currentDirection == Direction.Up) {
			transform.position = new Vector3 (pos.x, pos.y, moveInterval);
			currentDirection = Direction.Down;
		} else {
			transform.position = new Vector3 (pos.x, pos.y, -moveInterval);
			currentDirection = Direction.Up;
		}
	}

	private void Move()
	{
		if (currentDirection == Direction.Up) {
			transform.Translate (Vector3.forward * moveSpeed * Time.deltaTime, Space.World);
		} else {
			transform.Translate (Vector3.back * moveSpeed * Time.deltaTime, Space.World);
		}
	}






	public enum Direction{Up, Down}
}
