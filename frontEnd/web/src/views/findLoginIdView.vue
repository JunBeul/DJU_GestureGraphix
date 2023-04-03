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
    <button type="submit">
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
      findLoginId_email: ''
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
  }
}
button[type = submit] {
  margin-bottom: 25px;
}
</style>