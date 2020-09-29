using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpriteMovingBelt : MonoBehaviour
{
    public GameObject sprite;
    public float speed = -1f;
    public float spawnOffsetFromScreen = 1f;
    public float destroyOffsetFromScreen = 1f;
    public float spawnDistance = 5f;
    public float spawnProbability = 1f;

    private readonly List<GameObject> instances = new List<GameObject>();

    void Start()
    {
        // Create the instance
        SpawnSprite();
    }

    void Update()
    {

        foreach(GameObject instance in instances.ToArray())
        {
            if (CanDestroy(instance))
            {
                Destroy(instance);
                instances.Remove(instance);
                continue;
            }

            Vector3 originalPos = instance.transform.position;

            float posX = originalPos.x + (speed * Time.deltaTime);
            Vector3 newPosition = new Vector3(posX, originalPos.y, originalPos.z);

            instance.transform.position = newPosition;
        }

        SpawnIfNeeded();
    }

    private Vector3 GetScreenSize()
    {
        var screenSizePixels = new Vector3(Screen.width, Screen.height, 0);
        return Camera.main.ScreenToWorldPoint(screenSizePixels);
    }

    private bool CanDestroy(GameObject i)
    {
        Vector3 screenSize = GetScreenSize();
        return i.transform.position.x < -(screenSize.x + destroyOffsetFromScreen);
    }

    private void SpawnIfNeeded()
    {
        GameObject last = instances[instances.Count - 1];
        float diff = GetSpawnX() - last.transform.position.x;

        if (diff >= spawnDistance)
        {
            bool canSpawn = Random.Range(0f, 1f) < spawnProbability;
            if (canSpawn)
            {
                SpawnSprite();
            } else
            {
                SpawnSpriteAndHide();
            }
        }
    }

    private float GetSpawnX()
    {
        return GetScreenSize().x + spawnOffsetFromScreen;
    }

    private GameObject SpawnSprite()
    {
        Vector3 startPos = new Vector3(
            GetSpawnX(),
            gameObject.transform.position.y,
            gameObject.transform.position.z
        );
        GameObject instance = Instantiate<GameObject>(sprite, startPos, Quaternion.identity);
        instances.Add(instance);

        return instance;
    }

    private GameObject SpawnSpriteAndHide()
    {
        Vector3 startPos = new Vector3(
            GetSpawnX(),
            10,
            gameObject.transform.position.z
        );
        GameObject instance = Instantiate<GameObject>(sprite, startPos, Quaternion.identity);
        instances.Add(instance);

        return instance;
    }
}
