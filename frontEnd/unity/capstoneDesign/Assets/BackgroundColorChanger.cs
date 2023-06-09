using UnityEngine;
using UnityEngine.UI;

public class BackgroundColorChanger : MonoBehaviour
{
    public Button colorPickerButton;
    public Image backgroundImage;

    private ColorPicker colorPicker;
    private bool isColorPickerOpen = false;

    private void Start()
    {
        // 버튼 클릭 이벤트에 핸들러 연결
        colorPickerButton.onClick.AddListener(OpenColorPicker);
    }

    private void OpenColorPicker()
    {
        if (!isColorPickerOpen)
        {
            // ColorPicker가 열려있는 동안 사용자 입력 무시
            isColorPickerOpen = true;

            // ColorPicker를 생성하고 이벤트 핸들러 연결
            bool success = ColorPicker.Create(backgroundImage.color, "Color Picker", OnColorChanged, OnColorPickerClosed, true);
            if (success)
            {
                Debug.Log("ColorPicker opened successfully.");
            }
            else
            {
                Debug.Log("Failed to open ColorPicker.");
                // ColorPicker 열기에 실패한 경우 사용자 입력 받기로 복구
                isColorPickerOpen = false;
            }
        }
    }

    private void OnColorChanged(Color color)
    {
        // 선택한 색상을 사용하여 배경 이미지 색상 변경
        backgroundImage.color = color;
    }

    private void OnColorPickerClosed(Color color)
    {
        // ColorPicker가 닫힌 후 사용자 입력 받기로 복구
        isColorPickerOpen = false;
    }
    
}