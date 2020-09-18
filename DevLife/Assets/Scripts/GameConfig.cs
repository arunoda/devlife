using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameConfig : MonoBehaviour
{
    public GameObject[] drops;
    public GameObject wallLeft;
    public GameObject wallRight;
    public GameObject gameDev;
    public GameObject explodeDev;
    public GameObject explodeGround;

    public float dropSpeed = 3;
    public int noOfDropsInScreen = 1;

    private Camera _mainCamera;
    private int _prevScreenWidthPixels = 0;
    private Coroutine spawnDropsHandler;
    private bool freezed = false;

    public static GameConfig Current;

    // Start is called before the first frame update
    void Start()
    {
        _mainCamera = Camera.main;
        GameConfig.Current = this;

        UnFreeze();
    }

    // Update is called once per frame
    void Update()
    {
        ChangeWallPositionsPerScreenSize();
    }

    private void SpawnDrop()
    {
        var screenSize = GetScreenSize();
        var xPos = Random.Range(-screenSize.x + 0.5f, screenSize.x - 0.5f);
        var drop = drops[Random.Range(0, drops.Length)];
        Instantiate(drop, new Vector2(xPos, screenSize.y), Quaternion.identity);
    }

    public Vector3 GetScreenSize()
    {
        var screenSizePixels = new Vector3(Screen.width, Screen.height, 0);
        return _mainCamera.ScreenToWorldPoint(screenSizePixels);
    }
    
    private void ChangeWallPositionsPerScreenSize()
    {
        if (_prevScreenWidthPixels == Screen.width)
        {
            return;
        }

        var screenWidth = GetScreenSize().x;

        // Set wall positions
        var currentPosition = wallLeft.transform.position;
        wallLeft.transform.position = new Vector3(-screenWidth, currentPosition.y, currentPosition.z);
        wallRight.transform.position = new Vector3(screenWidth, currentPosition.y, currentPosition.z);
        
        // Bring dev into the middle
        var devPosition = gameDev.transform.position;
        devPosition = new Vector3(0, devPosition.y, devPosition.z);
        gameDev.transform.position = devPosition;

        _prevScreenWidthPixels = Screen.width;
    }

    public void RenderExplodeDev(Vector3 position)
    {
        position.y -= 0.5f;
        Instantiate(explodeDev, position, Quaternion.identity);
    }

    public void RenderExplodeGround(Vector3 position)
    {
        position.y -= 0.5f;
        Instantiate(explodeGround, position, Quaternion.identity);
    }

    private IEnumerator SpawnDrops()
    {
        while (true)
        {
            SpawnDrop();
            var totalHeight = GetScreenSize().y * 2;
            var spawnInterval = totalHeight / dropSpeed / noOfDropsInScreen;
            yield return new WaitForSeconds(spawnInterval);
        }
    }

    public void Freeze()
    {
        freezed = true;
        StopCoroutine(spawnDropsHandler);
    }

    public void UnFreeze()
    {
        freezed = false;
        spawnDropsHandler = StartCoroutine(SpawnDrops());
    }

    public bool IsFreezed()
    {
        return freezed;
    }
}