using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DevLifeActions : MonoBehaviour
{
    public void ShowGameScene()
    {
        SceneManager.LoadScene("Game");
    }
}
