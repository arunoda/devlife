using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DevWelcome : MonoBehaviour
{
    public GameObject logo;
    public GameObject startNow;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    void ShowLogoAndButton()
    {
        logo.SetActive(true);
        startNow.SetActive(true);
    }
}
