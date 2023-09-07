using UnityEngine;
using UnityEngine.UI;

public class ButtonController : MonoBehaviour
{
   public GameObject[] buttonsToHide;

    private bool areButtonsHidden = false;

    public void ToggleButtonsVisibility()
    {
        areButtonsHidden = !areButtonsHidden;

        foreach (GameObject button in buttonsToHide)
        {
            button.SetActive(!areButtonsHidden);
        }
    }
}