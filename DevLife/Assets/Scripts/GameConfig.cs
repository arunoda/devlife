using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameConfig : MonoBehaviour
{
    public GameObject DropTwitter;
    public GameObject DropStackOverflow;
    public GameObject DropYouTube;
    public GameObject wallLeft;
    public GameObject wallRight;
    public GameObject gameDev;
    public GameObject explodeDev;
    public GameObject explodeGround;
    public GameObject twitterStrom;
    public Text labelTasksCompleted;
    public Text labelTimeLeft;
    public Text playPauseButton;
    public GameObject animationNewHighScore;

    // Items to use the at the each game level end
    public Text labelHighScore;
    public Text labelMinScore;
    public Text labelTotalTasksCompletedNextLevel;
    public Text labelTotalTasksCompletedRetry;
    public GameObject gameRetryPanel;
    public GameObject gameNextLevelPanel;
    public GameObject gameOverParticles;

    public enum DropType
    {
        TWITTER,
        YOUTUBE,
        STACKOVERFLOW
    };

    private string sessionId;
    private float dropSpeed = 5;
    private int noOfDropsInScreen = 2;
    private EventsManager eventsManager;
    private LevelManager levelManager;

    // point system
    private int twitterHits = 0;
    private int stackOverflowHits = 0;
    private int youtubeHits = 0;

    public static GameConfig current;
    
    private Camera mainCamera;
    private int prevScreenWidthPixels = 0;
    private Coroutine spawnDropsHandler;
    private int freezedCount = 1;
    private bool gameOver = false;

    public delegate void FreezeChangeHandler(bool isFreezed);
    private FreezeChangeHandler freezeHandlers;

    // Start is called before the first frame update
    void Start()
    {
        levelManager = new LevelManager();
        sessionId = System.Guid.NewGuid().ToString();
        eventsManager = new EventsManager(sessionId);
        mainCamera = Camera.main;
        GameConfig.current = this;

        StartGame();
    }

    public void StartGame()
    {
        freezedCount = 1;
        gameOver = false;

        dropSpeed = 5;
        noOfDropsInScreen = 2;

        twitterHits = 0;
        stackOverflowHits = 0;
        youtubeHits = 0;
        UpdateTasksCompleted();

        labelTotalTasksCompletedNextLevel.text = "0";
        labelTotalTasksCompletedRetry.text = "0";
        gameNextLevelPanel.SetActive(false);
        gameRetryPanel.SetActive(false);

        EnsureResume();
        StartCoroutine(nameof(GameTimer));
        UnFreeze();
        gameRetryPanel.SetActive(false);

        eventsManager.Login(GetUserName());
        eventsManager.StartLevel(levelManager.CurrentLevel);
    }

    private string GetUserName()
    {
        var username = PlayerPrefs.GetString("username", null);
        if (username == null || username == "")
        {
            username = System.Guid.NewGuid().ToString();
            PlayerPrefs.SetString("username", username);
            PlayerPrefs.Save();
        }

        return username;
    }

    // Update is called once per frame
    void Update()
    {
        ChangeWallPositionsPerScreenSize();
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
        position.y -= 0.0f;
        Instantiate(explodeGround, position, Quaternion.identity);
    }

    private List<GameObject> GetDrops()
    {
        List<GameObject> drops = new List<GameObject>() { DropStackOverflow, DropYouTube };
        if (levelManager.ShowTwitter)
        {
            drops.Add(DropTwitter);
        }

        return drops;
    }

    private IEnumerator SpawnDrops()
    {
        var drops = GetDrops();

        while (true)
        {
            // Spawn the drop
            var screenSize = GetScreenSize();
            var xPos = Random.Range(-screenSize.x + 0.5f, screenSize.x - 0.5f);
            var drop = drops[Random.Range(0, drops.Count)];
            Instantiate(drop, new Vector2(xPos, screenSize.y), Quaternion.identity);


            var totalHeight = screenSize.y * 2;
            var spawnInterval = totalHeight / GetDropSpeed() / noOfDropsInScreen;
            yield return new WaitForSeconds(spawnInterval);
        }
    }

    private IEnumerator GameTimer()
    {
        labelTimeLeft.text = "Time Left: " + levelManager.GameTime;

        for (int lc=0; lc<=levelManager.GameTime; lc++)
        {
            yield return new WaitForSecondsRealtime(1);
            labelTimeLeft.text = "Time Left: " + (levelManager.GameTime - lc);

            // increase drop speed
            if (lc > 0 && lc % 10 == 0)
            {
                dropSpeed += levelManager.DropSpeedIncrease;
            }

            // increase no of drops on the screen
            if (lc > 0 && lc % 10 == 0)
            {
                noOfDropsInScreen += levelManager.NoOfDropsInScreenIncrease;
            }

        }

        EndGame();
    }

    public void Freeze()
    {
        if (gameOver || freezedCount > 0)
        {
            return;
        }

        eventsManager.AddEvent("freeze");

        freezedCount += 1;
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
        if (gameOver || freezedCount == 0)
        {
            return;
        }

        eventsManager.AddEvent("unfreeze");

        freezedCount -= 1;
        freezeHandlers?.Invoke(false);
        spawnDropsHandler = StartCoroutine(SpawnDrops());
       
        twitterStrom.SetActive(false);
    }

    public bool IsFreezed()
    {
        return freezedCount > 0;
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

    public float GetWalkSpeed()
    {
        return levelManager.WalkSpeed;
    }

    public float GetDevSpeed()
    {
        return levelManager.DevSpeed;
    }

    public void NotifyHitOnFloor(DropType type, int dropId)
    {
        eventsManager.AddEvent("hitOnFloor", new Dictionary<string, object>() {
            { "hitType", type },
            { "dropId", dropId }
        });
    }

    public void NotifyHit(DropType type, int dropId)
    {
        eventsManager.AddEvent("hit", new Dictionary<string, object>() {
            { "hitType", type },
            { "dropId", dropId }
        });

        switch (type)
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
        labelTasksCompleted.text = string.Format("Level: {0} - Tasks: {1}", levelManager.CurrentLevel, GetTasksCompleted());
    }

    public void PauseOrResume()
    {
        bool isPaused = Time.timeScale == 0;
        if (isPaused)
        {
            eventsManager.AddEvent("resume");
            Time.timeScale = 1f;
        } else
        {
            eventsManager.AddEvent("pause");
            Time.timeScale = 0f;
        }
    }

    public void EnsureResume()
    {
        Time.timeScale = 1f;
        playPauseButton.text = "Pause";
    }

    private void EndGame()
    {
        UnFreeze();
        EnsureResume();

        gameOver = true;
        int completedTasks = GetTasksCompleted();

        // Check Level Pass Logic
        if (completedTasks >= levelManager.MinPoints)
        {
            // Manage Highscore
            string scoreKey = "HighScore:" + levelManager.CurrentLevel;
            int highScore = PlayerPrefs.GetInt(scoreKey, 0);
            bool gotNewHighScore = completedTasks > highScore;
            if (gotNewHighScore)
            {
                highScore = completedTasks;
                PlayerPrefs.SetInt(scoreKey, highScore);
                PlayerPrefs.Save();
                animationNewHighScore.SetActive(true);
            }

            labelHighScore.text = string.Format("( High Score: {0} )", highScore);
            labelTotalTasksCompletedNextLevel.text = completedTasks.ToString();

            // getting ready for the next level
            levelManager.IncreaseLevel();

            // show UI
            gameOverParticles.SetActive(true);
            gameNextLevelPanel.SetActive(true);
        }
        else
        {
            labelMinScore.text = string.Format("( But Needs {0} )", levelManager.MinPoints);
            labelTotalTasksCompletedRetry.text = completedTasks.ToString();

            // show UI
            gameOverParticles.SetActive(true);
            gameRetryPanel.SetActive(true);
        }
  

        StopCoroutine(spawnDropsHandler);

        eventsManager.CompleteLevel(levelManager.CurrentLevel, completedTasks);
    }
}