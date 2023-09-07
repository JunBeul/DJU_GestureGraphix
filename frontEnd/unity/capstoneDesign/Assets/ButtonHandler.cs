using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonHandler : MonoBehaviour
{
   public GameObject popup;
   public Image background;

   private void Start(){
      popup.SetActive(false);
   }
   public void ShowPopup(){
    popup.SetActive(true);
   }
   public void HidePopup(){
    popup.SetActive(false);
   }

   public void ChangeBackground(Sprite newBackground){
    background.sprite=newBackground;
   }
}
