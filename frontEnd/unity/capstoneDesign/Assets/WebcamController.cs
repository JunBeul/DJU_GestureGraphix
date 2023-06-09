using UnityEngine;
using UnityEngine.UI;


public class WebcamController : MonoBehaviour
{
    public RawImage rawImage;
    private WebCamTexture webcamTexture;

    void Start()
    {
        // 웹캠 활성화
        webcamTexture = new WebCamTexture();
        rawImage.texture = webcamTexture;
        rawImage.gameObject.SetActive(false); // 처음에는 비활성화

        // 웹캠 시작
        webcamTexture.Play();
    }

    public void ToggleWebcam()
    {
        rawImage.gameObject.SetActive(!rawImage.gameObject.activeSelf);
    }
}
