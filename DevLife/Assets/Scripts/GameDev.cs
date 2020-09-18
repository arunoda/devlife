using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameDev : MonoBehaviour
{
    private float speed = 10;
    private float directionX;
    private Rigidbody2D body;

    public GameObject dev;
       
    private Animator anim;
    private Camera mainCamera;
    private bool freezed = false;
    private float defaultYPosition;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        anim = dev.GetComponent<Animator>();
        mainCamera  = Camera.main;
    }

    void Update()
    {
        this.ChangeDirection();
        this.ChangeAnimation();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (GameConfig.Current.IsFreezed())
        {
            freezed = true;
            transform.position = DevLifeUtils.ChangeY(transform.position, 0);
            body.velocity = Vector2.zero;
            return;
        }

        if (freezed)
        {
            transform.position = DevLifeUtils.ChangeY(transform.position, defaultYPosition);
            freezed = false;
        }

        directionX = GetDirection();
        Vector2 movement = new Vector2(directionX * speed, 0);

        defaultYPosition = transform.position.y;
        body.velocity = movement;
    }

    private float GetDirection()
    {
        if (Input.touches.Length > 0)
        {
            var firstTouch = Input.touches[0];
            var unitPosition = mainCamera.ScreenToWorldPoint(firstTouch.position);

            return unitPosition.x > 0 ? 1 : -1;
        }

        return Input.GetAxisRaw("Horizontal");
    }

    private void ChangeDirection()
    {
        if (directionX > 0)
        {
            transform.eulerAngles = new Vector3(0, 0, 0 );
        } else if (directionX < 0)
        {
            transform.eulerAngles = new Vector3(0, 180, 0);
        }
    }

    private void ChangeAnimation()
    {
        // Dev is running now
        if (directionX != 0)
        {
            anim.SetBool("isRunning", true);
        }
        else
        {
            anim.SetBool("isRunning", false);
        }
    }
}
