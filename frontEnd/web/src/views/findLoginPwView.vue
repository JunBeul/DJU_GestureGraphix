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
      />
    </form>
    <button type="submit">
      <div class="anime"></div>
      <p class="anime">전송</p>
    </button>
    <p><router-link tag="a" to="/login">로그인 하러가기</router-link></p>
  </div>
</template>

<style lang="scss" scoped>
nav{
  width: 100%;
  ul{
    display: flex;
    flex-direction: row;
    align-items: center;
    justify-content: center;
    li{
      margin: 0 25px;
      a{
        background: rgba(255, 255, 255, 0.25);
        box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);
        backdrop-filter: blur(4px);
        -webkit-backdrop-filter: blur(4px);
        border-radius: 18px;
        border: 1px solid rgba(255, 255, 255, 0.18);
        display: inline-block;
        padding: 12px;
        &:hover{
          background: rgb(255, 255, 255);
        }
      }
    }
  }
}
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

<script>
// @ is an alias to /src
import HelloWorld from '@/components/HelloWorld.vue'

export default {
  name: 'HomeView',
  components: {
    HelloWorld
  }
}
</script>
