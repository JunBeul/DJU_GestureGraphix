<template>
  <div class="warp">
    <h2 class="title">비밀번호 찾기</h2>
    <form>
      <label for="email">가입하신 이메일을 입력해 주세요.</label>
      <input
        type="email"
        name="email"
        id="email"
        required="required"
        class="anime"
        v-model="findLoginPw_email"
      />
    </form>
    <form>
      <label for="id">가입하신 아이디를 입력해주세요.</label>
      <input
        type="text"
        name="id"
        id="id"
        required="required"
        class="anime"
        v-model="findLoginPw_id"
      />
    </form>
    <button type="submit" @click="findLoginPw">
      <div class="anime"></div>
      <p class="anime">전송</p>
    </button>
    <p><router-link tag="a" to="/login">로그인 하러가기</router-link></p>
  </div>
</template>

<script>
export default {
  name: "findLoginPw",
  data() {
    return {
      findLoginPw_email: "",
      findLoginPw_id: "",
      founded_pw: "",
    };
  },
  methods: {
    async findLoginPw() {
      try {
        // 아이디 찾기 요청을 보낼 서버 주소
        const findPwUrl = "/find/loginPw"; // Express 서버의 로그인 라우트에 맞게 변경

        // 아이디 찾기 요청을 보내는 비동기 함수
        const response = await fetch(findPwUrl, {
          method: "POST",
          headers: {
            "Content-Type": "application/json",
          },
          body: JSON.stringify({
            findLoginPw_email: this.findLoginPw_email,
            findLoginPw_id: this.findLoginPw_id,
          }),
        });

        const data = await response.json();

        // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
        if (response.ok) {
          this.founded_pw = "등록된 패스워드는 " + data.founded_pw + " 입니다.";
        } else {
          this.founded_pw = data.message;
        }
        alert(this.founded_pw);
      } catch (error) {
        console.error(error);
      }
    },
  },
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