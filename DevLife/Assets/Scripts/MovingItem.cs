using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingItem : MonoBehaviour
{
    public bool neverDestroy = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var screenSize = GameConfig.current.GetScreenSize();
        if (!neverDestroy)
        {
            if (transform.position.x < -(screenSize.x + 1))
            {
                Destroy(gameObject);
                return;
            }
        }

        transform.position += Vector3.left * GameConfig.current.GetWalkSpeed() * Time.deltaTime;
    }
}
