<template>
  <div class="warp">
    <h2 class="title">로그인</h2>
    <form>
      <label for="id">ID</label>
      <input
        type="text"
        name="id"
        id="id"
        required="required"
        class="anime"
        v-model="login_id"
      />
    </form>
    <form>
      <label for="pw">PW</label>
      <input
        type="password"
        name="pw"
        id="pw"
        required="required"
        class="anime"
        v-model="login_pw"
      />
    </form>
    <button type="submit" @click="login">
      <div class="anime"></div>
      <p class="anime">LOG IN</p>
    </button>
    <div class="signup-forgotten">
      <p>아직 회원이 아니신가요? <router-link tag="a" to="/signup">회원가입하기</router-link></p>
      <p><router-link tag="a" to="/find/loginId">아이디</router-link> / <router-link tag="a" to="/find/loginPw">비밀번호 찾기</router-link></p>
      <a href='/riggingDemo'>웹 데모 페이지로 이동</a>
      
    </div>
  </div>
</template>

<script>
export default {
  name: "login",
  data() {
    return {
      login_id: "",
      login_pw: "",
      loginSuccess: false,
    };
  },
  methods: {
    login(event) {
      event.preventDefault();
      // 로그인 요청을 보낼 서버 주소
      const loginUrl = "/login"; // Express 서버의 로그인 라우트에 맞게 변경

      // 로그인 요청을 보내는 비동기 함수
      const sendLoginRequest = async () => {
        try {
          // axios를 사용하지 않고 fetch API를 사용하여 로그인 요청을 보냄
          const response = await fetch(loginUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json",
            },
            body: JSON.stringify({
              login_id: this.login_id,
              login_pw: this.login_pw,
            }),
          });

          const data = await response.json();

          // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
          if (response.ok) {
            this.$store.dispatch("updateUserData", data.user);
            this.$router.push({ path: "/main/download" });
          } else {
            this.loginSuccess = false;
            alert(data.message);
          }
        } catch (error) {
          console.error(error);
        }
      };

      // 로그인 요청 함수 호출
      if (this.login_id === "") alert("아이디를 입력해 주세요.");
      else if (this.login_pw === "") alert("비밀번호를 입력해 주세요.");
      else sendLoginRequest();
    },
  },
};
</script>

<style lang="scss" scoped>
form{
  flex-direction: row;
  align-items: center;
  justify-content: center;
  height: 40px;

  label {
    display: inline-block;
    width: 40px;
    height: 40px;
    margin-right: 10px;
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 16px;
  }
  input {
    width: 450px;
  }
}
button[type = submit] {
  margin-bottom: 25px;
}
.signup-forgotten {
  text-align: center;
  p:first-child {
    margin-bottom: 10px;
  }
}
</style>
