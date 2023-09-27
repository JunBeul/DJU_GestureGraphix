<template>
  <div class="warp">
    <h2 class="title">비밀번호 변경</h2>
    <form>
      <label for="pw">변경할 비밀번호</label>
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
      <label for="ConfirmPw">비밀번호 확인</label>
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
      <p class="anime">확인</p>
    </button>
  </div>
</template>

<script>
export default {
  name: "signup",
  data() {
    return {
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