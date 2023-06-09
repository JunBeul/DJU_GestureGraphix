using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopupHandler : MonoBehaviour
{
    public ButtonHandler buttonHandler;
    public Image defaultBackground;

    public void OnButtonClicked(int buttonIndex)
    {
        switch(buttonIndex){
            case 0:
                buttonHandler.ChangeBackground(GetComponent<Image>().sprite);
                break;
            case 1:
                break;
        }
        buttonHandler.HidePopup();
    }

    public void OnResetButtonClicked(){
        buttonHandler.ChangeBackground(defaultBackground.sprite);
        buttonHandler.HidePopup();
    }

    
}
