<template>
  <div class="warp">
    <h2 class="title">회원가입</h2>
    <form>
      <label for="email">이메일</label>
      <div>
        <input
          type="email"
          name="email"
          id="email"
          required="required"
          class="anime"
          v-model="signup_email"
        />
      </div>
    </form>
    <form>
      <label for="id">아이디</label>
      <input
        type="text"
        name="id"
        id="id"
        required="required"
        class="anime"
        v-model="signup_id"
      />
    </form>
    <form>
      <label for="pw">비밀번호</label>
      <input
        type="password"
        name="pw"
        id="pw"
        required="required"
        class="anime"
        v-model="signup_pw"
      />
    </form>
    <form>
      <label for="ConfirmPw">비밀번호 재입력</label>
      <input
        type="password"
        name="ConfirmPw"
        id="ConfirmPw"
        required="required"
        class="anime"
        v-model="signup_confirmPW"
      />
    </form>
    <button type="submit" @click="emailCertification">
      <div class="anime"></div>
      <p class="anime">SIGN UP</p>
    </button>
    <p><router-link tag="a" to="/login">로그인 하러가기</router-link></p>
  </div>
</template>

<script>
export default {
  name: "signup",
  data() {
    return {
      signup_email: "",
      signup_id: "",
      signup_pw: "",
      signup_confirmPW: "",
    };
  },
  methods: {
    emailCertification(event) {
      event.preventDefault();
      const emailCUrl = "/emailCertification";
      const sendEmailCRequest = async () => {
        try {
          const response = await fetch(emailCUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json",
            },
            body: JSON.stringify({
              signup_id: this.signup_id,
              signup_pw: this.signup_pw,
              signup_email: this.signup_email,
            }),
          });

          const data = await response.json();
          alert(data.message);
        } catch (error) {
          console.error(error);
        }
      };
      const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
      // 함수 호출
      if (this.signup_email === "") alert("이메일을 입력해 주세요.");
      else if (!emailPattern.test(this.signup_email))
        alert("올바른 이메일 형식이 아닙니다.");
      else if (this.signup_id === "") alert("아이디를 입력해 주세요.");
      else if (this.signup_pw === "") alert("비밀번호를 입력해 주세요.");
      else if (this.signup_confirmPW === "")
        alert("비밀번호 재입력 칸을 입력해 주세요.");
      else if (this.signup_confirmPW !== this.signup_pw)
        alert("비밀번호가 일치하지 않습니다.");
      else sendEmailCRequest();
    },
  },
};
</script>

<style lang="scss" scoped>
form {
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
button[type="submit"] {
  margin-bottom: 25px;
}
</style>
