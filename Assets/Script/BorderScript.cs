using UnityEngine;
using System.Collections;

public class BorderScript : MonoBehaviour {

	public delegate void missAction();
	public static event missAction onMiss;
	public delegate void friendPassedAction();
	public static event friendPassedAction onFriendPassed;

	// Use this for initialization
	void Start () {
	
	}

    void OnTriggerEnter(Collider other)
    {
		if (other.tag == "enemy" || other.tag == "armored") {
			if (onMiss != null)
				onMiss ();
		}
		if (other.tag == "friend") {
			if (onFriendPassed != null)
				onFriendPassed ();
		}
		Destroy(other.gameObject);
    }
		
}
