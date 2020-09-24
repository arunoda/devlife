using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameConfig : MonoBehaviour
{
    public GameObject[] drops;
    public GameObject wallLeft;
    public GameObject wallRight;
    public GameObject gameDev;
    public GameObject explodeDev;
    public GameObject explodeGround;
    public GameObject twitterStrom;
    public Text labelTasksCompleted;
    public Text labelTimeLeft;
    public Text labelTotalTasksCompleted;
    public GameObject gameOverPanel;

    public enum DropType
    {
        TWITTER,
        YOUTUBE,
        STACKOVERFLOW
    };

    private int gameTime = 60;
    private float devSpeed = 10;
    private float dropSpeed = 5;
    private int noOfDropsInScreen = 2;

    // point system
    private int twitterHits = 0;
    private int stackOverflowHits = 0;
    private int youtubeHits = 0;

    public static GameConfig current;
    
    private Camera mainCamera;
    private int prevScreenWidthPixels = 0;
    private Coroutine spawnDropsHandler;
    private bool freezed = true;
    private bool gameOver = false;

    public delegate void FreezeChangeHandler(bool isFreezed);
    private FreezeChangeHandler freezeHandlers;

    // Start is called before the first frame update
    void Start()
    {
        mainCamera = Camera.main;
        GameConfig.current = this;

        StartCoroutine(nameof(GameTimer));
        UnFreeze();
        gameOverPanel.SetActive(false);
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
        return mainCamera.ScreenToWorldPoint(screenSizePixels);
    }
    
    private void ChangeWallPositionsPerScreenSize()
    {
        if (prevScreenWidthPixels == Screen.width)
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

        prevScreenWidthPixels = Screen.width;
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
            var spawnInterval = totalHeight / GetDropSpeed() / noOfDropsInScreen;
            yield return new WaitForSeconds(spawnInterval);
        }
    }

    private IEnumerator GameTimer()
    {
        labelTimeLeft.text = "Time Left: " + gameTime;

        for (int lc=0; lc<=gameTime; lc++)
        {
            yield return new WaitForSeconds(1);
            labelTimeLeft.text = "Time Left: " + (gameTime - lc);

            // increase drop speed
            if (lc > 0 && lc % 10 == 0)
            {
                dropSpeed += 0.5f;
            }

            // increase no of drops on the screen
            if (lc > 0 && lc % 10 == 0)
            {
                noOfDropsInScreen += 1;
            }

        }

        gameOver = true;
        labelTotalTasksCompleted.text = GetTasksCompleted().ToString();
        gameOverPanel.SetActive(true);
        StopCoroutine(spawnDropsHandler);
    }

    public void Freeze()
    {
        if (gameOver || freezed)
        {
            return;
        }

        freezed = true;
        freezeHandlers?.Invoke(true);
        StopCoroutine(spawnDropsHandler);
        
        // Show the twitter strom
        var gameDevPos = gameDev.transform.position;
        twitterStrom.transform.position = new Vector3(
            gameDevPos.x > 0 ? gameDevPos.x -3 : gameDevPos.x + 3,
            2,
            gameDevPos.z
            );
        twitterStrom.SetActive(true);
    }

    public void UnFreeze()
    {
        if (gameOver || !freezed)
        {
            return;
        }

        freezed = false;
        freezeHandlers?.Invoke(false);
        spawnDropsHandler = StartCoroutine(SpawnDrops());
        twitterStrom.SetActive(false);
    }

    public bool IsFreezed()
    {
        return freezed;
    }
    
    public void OnFreezeChange(FreezeChangeHandler e)
    {
        freezeHandlers += e;
    }

    public void OffFreezeChange(FreezeChangeHandler e)
    {
        if (freezeHandlers == null) return;
        freezeHandlers -= e;
    }

    public float GetDropSpeed()
    {
        return dropSpeed;
    }

    public float GetDevSpeed()
    {
        return devSpeed;
    }

    public void NotifyHit(DropType type)
    {
        switch(type)
        {
            case DropType.TWITTER:
                twitterHits += 1;
                break;
            case DropType.YOUTUBE:
                youtubeHits += 1;
                break;
            case DropType.STACKOVERFLOW:
                stackOverflowHits += 1;
                break;
            default:
                throw new System.Exception("Unsupported Notify Hit: " + type);
        }

        UpdateTasksCompleted();
    }

    private int GetTasksCompleted()
    {
        return youtubeHits + stackOverflowHits;
    }

    private void UpdateTasksCompleted()
    {
        labelTasksCompleted.text = "Tasks: " + GetTasksCompleted();
    }
}