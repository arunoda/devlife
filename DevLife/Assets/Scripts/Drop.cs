using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drop : MonoBehaviour
{
    private bool causedFreezing = false;
    void Start()
    {
        GameConfig.current.OnFreezeChange(WithFreezeChange);
    }

    private void OnDestroy()
    {
        GameConfig.current.OffFreezeChange(WithFreezeChange);
    }

    // Update is called once per frame
    void Update()
    {
        if (causedFreezing)
        {
            return;
        }
        transform.position += Vector3.down * (GameConfig.current.dropSpeed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // This prevent hitting a freezed drop on the floor.
        if (GameConfig.current.IsFreezed()) return;
        
        if (other.CompareTag("Floor"))
        {
            GameConfig.current.RenderExplodeGround(transform.position);
        } else if (other.CompareTag("Player"))
        {
            GameConfig.current.RenderExplodeDev(transform.position);
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
        var screenSize = GameConfig.current.GetScreenSize();
        transform.position = new Vector3(screenSize.x + 10, screenSize.y + 10, 0);
    }

    private IEnumerator HandleTwitterHit()
    {
        causedFreezing = true;
        Hide();

        GameConfig.current.Freeze();
        yield return new WaitForSeconds(3);
        
        GameConfig.current.UnFreeze();
        Destroy(gameObject);
    }

    private void WithFreezeChange(bool isFreezed)
    {
        // We don't need to handle if this drop caused the freezing
        if (causedFreezing) return;
        
        gameObject.SetActive(!isFreezed);
    }
}
