using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InfiniteMovingBelt : MonoBehaviour
{
    public GameObject item;
    public float speed = -1f;
    public float spawnOffsetFromScreen = 1f;
    public float destroyOffsetFromScreen = 1f;
    public float spawnDistance = 5f;
    public float spawnProbability = 1f;

    private readonly List<GameObject> instances = new List<GameObject>();

    void Start()
    {
        // Create the instance
        MakeInitialSpawning();
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
        return i.transform.position.x < GetDestroyX();
    }

    private void SpawnIfNeeded()
    {
        GameObject last = instances[instances.Count - 1];
        float diff = GetSpawnX() - last.transform.position.x;

        if (diff >= spawnDistance)
        {
            SpawnWithProbability(GetDefaultStartPos());
        }
    }

    private float GetSpawnX()
    {
        return GetScreenSize().x + spawnOffsetFromScreen;
    }

    private float GetDestroyX()
    {
        return -(GetScreenSize().x + destroyOffsetFromScreen);
    }

    private GameObject SpawnWithProbability(Vector3 startPos)
    {
        bool canSpawn = Random.Range(0f, 1f) < spawnProbability;
        if (canSpawn)
        {
            return SpawnItem(startPos);
        }

        return SpawnItemAndHide(startPos);
    }

    private GameObject SpawnItem(Vector3 startPos, bool addToFront = false)
    {
        GameObject instance = Instantiate<GameObject>(item, startPos, Quaternion.identity);

        if (addToFront)
        {
            instances.Insert(0, instance);
        } else
        {
            instances.Add(instance);
        }

        return instance;
    }

    private GameObject SpawnItemAndHide(Vector3 startPos)
    {
        startPos.y = 10;
        GameObject instance = Instantiate<GameObject>(item, startPos, Quaternion.identity);
        instances.Add(instance);

        return instance;
    }

    private Vector3 GetDefaultStartPos()
    {
        return new Vector3(
            GetSpawnX(),
            gameObject.transform.position.y,
            gameObject.transform.position.z
        );
    }

    private void MakeInitialSpawning()
    {
        Vector3 startPos = GetDefaultStartPos();
        while(startPos.x > GetDestroyX())
        {
            SpawnItem(startPos, addToFront:true);
            startPos.x -= spawnDistance;
        }
    }
}
