using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public int CurrentLevel { get; private set; }
    public int GameTime { get; private set; }
    public float DevSpeed { get; private set; }
    public float WalkSpeed { get; private set; }
    public int NoOfDropsInScreenIncrease { get; private set; }
    public float DropSpeedIncrease { get; private set; }
    public int MinPoints { get; private set; }
    public bool ShowTwitter { get; private set; }

    public LevelManager()
    {
        Reset();
    }

    public void Reset()
    {
        CurrentLevel = 1;
        GameTime = 30;
        MinPoints = 30;
        ShowTwitter = false;

        DevSpeed = 10;
        WalkSpeed = 1;
        NoOfDropsInScreenIncrease = 1;
        DropSpeedIncrease = 0.5f;
    }

    public void IncreaseLevel()
    {
        switch(CurrentLevel)
        {
            case 1:
                CurrentLevel += 1;
                GameTime = 30;
                MinPoints = 20;
                ShowTwitter = true;
                break;

             case 2:
                CurrentLevel += 1;
                GameTime = 60;
                MinPoints = 50;
                ShowTwitter = true;
                break;

            case 3:
                CurrentLevel += 1;
                GameTime = 60;
                MinPoints = 75;
                ShowTwitter = true;
                break;

            case 4:
                CurrentLevel += 1;
                GameTime = 60;
                MinPoints = 100;
                ShowTwitter = true;
                break;

            default:
                throw new System.Exception("It's impossible to reach this level");
        }
    }
}
