using UnityEngine;
using System.Collections;

public class DestroyedScript : MonoBehaviour {

    public float lifetime;

    public float explosionForce;
    public float explosionRadius;
    public Vector3 explosionSite;

	// Use this for initialization
	void Start () {
        Destroy(gameObject, lifetime);

        var bitmask = 1 << 8;
        Collider[] hit_colliders = Physics.OverlapSphere(transform.position, explosionRadius, bitmask);

        //Debug.Log(hit_colliders.Length.ToString());

        foreach (Collider hit in hit_colliders)
        {
            hit.attachedRigidbody.AddExplosionForce(explosionForce, explosionSite, explosionRadius, 1.0f, ForceMode.Impulse);
        }
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
