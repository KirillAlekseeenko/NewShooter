using UnityEngine;
using System.Collections;

public class BorderScript : MonoBehaviour {

	public delegate void missAction();
	public static event missAction onMiss;

	// Use this for initialization
	void Start () {
	
	}

    void OnTriggerEnter(Collider other)
    {
		if (other.tag == "enemy") {
			if (onMiss != null)
				onMiss ();
		}
		Destroy(other.gameObject);
    }
		
}
