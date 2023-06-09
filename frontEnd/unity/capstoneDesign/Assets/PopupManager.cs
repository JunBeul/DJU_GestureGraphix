using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupManager : MonoBehaviour
{
    public GameObject popupPanel;
    private void Start(){
        popupPanel.SetActive(false);
    }

    public void ShowPopup(){
        popupPanel.SetActive(true);
    }
    public void ClosePopup(){
        popupPanel.SetActive(false);
    }
}
