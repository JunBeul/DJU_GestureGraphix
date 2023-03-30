<template>
  <div class="Warp">
    <h2 class="title">로그인</h2>
    <form>
      <label for="id">ID</label>
      <input
        type="text"
        name="id"
        id="id"
        required="required"
        class="anime"
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
      />
    </form>
    <button type="submit">
      <div class="anime"></div>
      <p class="anime">LOG IN</p>
    </button>
    <div class="signup-forgotten">
      <p>아직 회원이 아니신가요? <router-link tag="a" to="/signup">회원가입하기</router-link></p>
      <p><router-link tag="a" to="/find/loginid">아이디</router-link> / <router-link tag="a" to="/find/loginpw">비밀번호 찾기</router-link></p>
    </div>
  </div>
</template>

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
