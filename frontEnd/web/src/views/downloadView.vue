<template>
  <div class="warp">
    <div class="text">
      GestureGraphix을 선택해주셔서 감사합니다!<br />
      우리는 웹캠을 통한 3D 모션트래킹 서비스입니다!<br />
      구글의 AI인 미디어 파이프를 활용하여 여러분께 환상적인 경험을 제공하고
      있습니다.<br />
      기존의 다른 모션트래킹 서비스와 달리 AI를 활용하여 쉽고 정확한 서비스를
      제공하고 있습니다.
    </div>
    <button type="submit" @click="download">
      <div class="anime"></div>
      <p class="anime">프로그램 다운로드</p>
    </button>
    <div class="text">
      저희와 함께할 준비가 되셨다면 위의 다운로드 버튼을 눌러 프로그램을
      설치해주세요!<br />
      같은 느낌의 소개문을 준비중에 있습니다.
    </div>
  </div>
</template>

<style lang="scss" scoped>
.warp {
  width: 100%;
  height: 100%;
  display: flex;
  justify-content: center;
  align-items: center;
  flex-direction: column;
  .text {
    text-align: center;
    font-size: 18px;
  }
  button[type="submit"] {
    margin: 25px 0;
  }
}
</style>

<script>
export default {
  name: "download",
  data() {
    return {
      title: "",
      text: "",
    };
  },
  methods: {
    download: function (event) {
      const fileUrl =
        ""; // 실제 AWS S3 파일 URL로 대체
      window.open(fileUrl, "_blank"); // 새 창에서 파일 다운로드
    },
  },
};
</script>
