using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drop : MonoBehaviour
{
    private bool freezed = false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (freezed)
        {
            return;
        }
        transform.position += Vector3.down * (GameConfig.Current.dropSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Floor"))
        {
            GameConfig.Current.RenderExplodeGround(transform.position);
        } else if (other.CompareTag("Player"))
        {
            GameConfig.Current.RenderExplodeDev(transform.position);
            if (gameObject.name.Contains("Twitter"))
            {
                StartCoroutine(HandleTwitterHit());
                return;
            }
        }
        
        Destroy(gameObject);
    }

    private void Hide()
    {
        var screenSize = GameConfig.Current.GetScreenSize();
        transform.position = new Vector3(screenSize.x + 10, screenSize.y + 10, 0);
    }

    private IEnumerator HandleTwitterHit()
    {
        freezed = true;
        Hide();

        GameConfig.Current.Freeze();
        yield return new WaitForSeconds(2);
        
        GameConfig.Current.UnFreeze();
        Destroy(gameObject);
    }
}
