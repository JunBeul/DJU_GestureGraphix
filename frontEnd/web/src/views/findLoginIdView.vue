<template>
  <div class="warp">
    <h2 class="title">아이디 찾기</h2>
    <form>
      <label for="email">가입하신 이메일을 입력해 주세요.</label>
      <input
        type="email"
        name="email"
        id="email"
        required="required"
        class="anime"
        v-model="findLoginId_email"
      />
    </form>
    <button type="submit" @click="findLoginId">
      <div class="anime"></div>
      <p class="anime">전송</p>
    </button>
    <p><router-link tag="a" to="/login">로그인 하러가기</router-link></p>
  </div>
</template>

<script>
export default {
  name: "findLoginId",
  data() {
    return {
      findLoginId_email: '',
      findLogin_id: '',
    };
  },
  methods: {
    async findLoginId() {
      try {
        // 아이디 찾기 요청을 보낼 서버 주소
        const findIdUrl = "/find/loginId"; // Express 서버의 로그인 라우트에 맞게 변경

        // 아이디 찾기 요청을 보내는 비동기 함수
        const response = await fetch(findIdUrl, {
          method: "POST",
          headers: {
            "Content-Type": "application/json",
          },
          body: JSON.stringify({
            findLoginId_email: this.findLoginId_email,
          }),
        });

        const data = await response.json();

        // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
        if (response.ok) {
          this.findLogin_id = "등록된 아이디는 " + data.findLogin_id + " 입니다.";
          alert(this.findLogin_id);
        } else {
          alert("해당 이메일은 등록되지 않았습니다.");
        }
      } catch (error) {
        console.error(error);
      }
    },
  },
  /*methods: {
    findLoginId(event) {
      event.preventDefault();
      // 아이디 찾기 요청을 보낼 서버 주소
      const findIdUrl = "/find/loginId"; // Express 서버의 로그인 라우트에 맞게 변경

      // 아이디 찾기 요청을 보내는 비동기 함수
      const sendFindIdRequest = async () => {
        try {
          // axios를 사용하지 않고 fetch API를 사용하여 로그인 요청을 보냄
          const response = await fetch(findIdUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json",
            },
            body: JSON.stringify({
              findLoginId_email: this.findLoginId_email,
            }),
          });

          const data = await response.json();

          // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
          if (response.ok) {
            alert(data.findLogin_id);
          } else {
            alert("해당 이메일은 등록되지 않았습니다.");
          }
        } catch (error) {
          console.error(error);
        }
      };

      // 아이디 찾기 요청 함수 호출
      sendFindIdRequest();
    },
  },*/
};
</script>

<style lang="scss" scoped>
form{
  flex-direction: column;
  align-items: center;
  justify-content: flex-start;
  label {
    display: inline-block;
    width: 500px;
    height: 40px;
    display: flex;
    align-items: center;
    justify-content: flex-start;
    font-size: 16px;
  }
  input {
    width: 500px;
  }
}
button[type = submit] {
  margin-bottom: 25px;
}
</style>