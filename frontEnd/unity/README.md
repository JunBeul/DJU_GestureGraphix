# 마우스 컨트롤 완료, 배경화면 색 변경 버튼 완료
--------------------
## 마우스를 활용하여 각 버튼별 기능을 구현한 것입니다.
왼쪽을 누르면 캐릭터가 회전하며, 휠을 돌리면 줌인,줌아웃, 오른쪽을 누르면 카메라의 각도가 변경됩니다.
배경화면 버튼을 누르면 색상을 고를 수 있는 팔레트가 등장하고, 선택한 색상으로 배경화면을 변경하게 됩니다.

1. 마우스 왼쪽 버튼을 클릭 했을 때 작동 모습

![ezgif com-video-to-gif (1)](https://github.com/JunBeul/GestureGraphix/assets/80021360/3694679c-8e46-4344-8247-3502088c4684)

2. 마우스 휠 버튼을 돌렸을 때 작동 모습

![ezgif com-video-to-gif (2)](https://github.com/JunBeul/GestureGraphix/assets/80021360/3aff295a-7da2-49b4-aae5-b64f27db89aa)

3. 마우스 오른쪽 버튼을 돌렸을 때 작동 모습

![ezgif com-video-to-gif](https://github.com/JunBeul/GestureGraphix/assets/80021360/547597cd-8c14-41c0-8f9c-b883f9ec0f02)

4. 배경화면 색 변경 버튼을 눌렀을 때 작동 모습

![ezgif com-video-to-gif](https://github.com/JunBeul/GestureGraphix/assets/80021360/9f1e3582-3c94-4118-a4a9-5ac774191570)

4-1. 코드
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
-------------------------------
#기술 스택
1. 유니티 - C#
