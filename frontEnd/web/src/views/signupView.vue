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
        <button type="button">인증 메일 전송</button>
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
    <button type="submit">
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
      signup_email: '',
      signup_id: '',
      signup_pw: '',
      signup_confirmPW: ''
    }
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

    &#email{
      width: 350px;
    }
  }
}
button[type = submit] {
  margin-bottom: 25px;
}
</style>