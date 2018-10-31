using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : MonoBehaviour {

    public float speed;             

    private Rigidbody rb;      

    // Use this for initialization
    void Start()
    {
       
        rb = GetComponent<Rigidbody>();
    }


    void FixedUpdate()
    {

        float moveHorizontal = Input.GetAxis("Horizontal");


        float moveVertical = Input.GetAxis("Vertical");

        Vector2 movement = new Vector2(moveHorizontal, moveVertical);


        rb.AddForce(movement * speed);

    }
}
