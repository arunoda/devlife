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
    private Vector3 prevPosition;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        anim = dev.GetComponent<Animator>();
        mainCamera  = Camera.main;
        prevPosition = DevLifeUtils.Clone(transform.position);
        GameConfig.current.OnFreezeChange(WithFreezeChange);
    }

    private void OnDestroy()
    {
        GameConfig.current.OffFreezeChange(WithFreezeChange);
    }

    void Update()
    {
        if (GameConfig.current.IsFreezed()) return;
        
        this.ChangeDirection();
        this.ChangeAnimation();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (GameConfig.current.IsFreezed()) return;

        directionX = GetDirection();
        Vector2 movement = new Vector2(directionX * speed, 0);
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

    private void WithFreezeChange(bool isFreezed)
    {
        if (isFreezed)
        {
            prevPosition = DevLifeUtils.Clone(transform.position);
            transform.position = DevLifeUtils.ChangeY(prevPosition, 0);
            body.velocity = Vector2.zero;
            anim.SetBool("isFreezedWithTwitter", true);

            // Rotate the user where they always looking at the empty space
            float yRotate = transform.position.x > 0 ? 180 : 0;
            transform.eulerAngles = new Vector3(0, yRotate, 0 );
            return;
        }

        transform.position = prevPosition;
        anim.SetBool("isFreezedWithTwitter", false);
    }
}
