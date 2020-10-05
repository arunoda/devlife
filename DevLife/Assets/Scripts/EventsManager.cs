using System;
using System.Collections;
using System.Collections.Generic;
using GameAnalyticsSDK;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;

class EventInfo
{
    public string EventName;
    public Dictionary<string, object> Body;
}

public class EventsManager
{
    private bool isLoggedIn = false;
    private List<EventInfo> eventBuffer = new List<EventInfo>();
    private string sessionId;

    public EventsManager(string sId)
    {
        sessionId = sId;
        GameAnalytics.Initialize();
        Application.logMessageReceived += HandleErrors;
    }

    ~EventsManager()
    {
        Application.logMessageReceived -= HandleErrors;
    }

    public void SetSessionId(string id)
    {
        sessionId = id;
    }

    private void HandleErrors(string condition, string stackTrace, LogType type)
    {
        if (type == LogType.Exception)
        {
            GameAnalytics.NewErrorEvent(GAErrorSeverity.Critical, stackTrace);
        }
    }

    private void OnSuccess(object result)
    {
        
    }

    private void OnLogin(object result)
    {
        isLoggedIn = true;
        foreach(EventInfo info in eventBuffer)
        {
            AddEvent(info.EventName, info.Body);
        }
    }

    private void OnError(PlayFabError error)
    {
        Debug.LogError(error.GenerateErrorReport());
    }

    public void Login(string userId)
    {
        var request = new LoginWithCustomIDRequest { CustomId = userId, CreateAccount = true };
        PlayFabClientAPI.LoginWithCustomID(request, OnLogin, OnError);
    }

    public void AddEvent(string EventName, Dictionary<string, object> Body = null)
    {
        if (Body == null)
        {
            Body = new Dictionary<string, object>();
        }

        Body.Add("sessionId", sessionId);

        if (!isLoggedIn)
        {
            eventBuffer.Add(new EventInfo()
            {
                EventName = EventName,
                Body = Body
            });
            return;
        }

        var request = new WriteClientPlayerEventRequest { EventName = EventName, Body = Body };
        PlayFabClientAPI.WritePlayerEvent(request, OnSuccess, OnError);

        GameAnalytics.NewDesignEvent(EventName);
    }

    public void StartLevel(int level)
    {
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "world1", "level-" + level, "phase1");
        AddEvent("startGame");
    }

    public void CompleteLevel(int level, int score)
    {
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "world1", "level-" + level, "phase1", score);
        AddEvent("endGame", new Dictionary<string, object>() {
            { "Score", score }
        });
    }
}