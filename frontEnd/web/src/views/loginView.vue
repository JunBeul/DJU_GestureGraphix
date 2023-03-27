<template>
  <div class="login">
    <form>
      <label for="id">ID</label>
      <input type="text" name="id" id="id" required="required" class="anime" />
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
    <button type="button">
      <div class="anime"></div>
      <p class="anime">LOG IN</p>
    </button>
    <div class="signup-forgotten">
      <p>아직 회원이 아니신가요? <a href="#">회원가입하기</a></p>
      <p><a href="#">ID & PW 찾기</a></p>
    </div>
  </div>
</template>

<style lang="scss">
.login {
  width: 100%;
  height: 400px;
  padding: 25px;

  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;

  form {
    width: 100%;
    height: 40px;
    margin-bottom: 25px;

    display: flex;
    align-items: center;
    justify-content: center;
  }
  label {
    display: inline-block;
    margin: 0;
    padding: 0;
    width: 40px;
    height: 40px;
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 16px;
  }
  input {
    width: 450px;
    height: 40px;
    margin: 0;
    padding: 11px 20px;
    box-sizing: border-box;
    border-radius: 20px;
    border: solid 2px #fff;
    background-color: #fff;
    font-size: 16px;
  }
  input:focus {
    outline: none;
    background-color: #fff0;
  }
  input:valid,
  input:focus {
    background-color: #fff0;
  }
  button {
    width: 140px;
    height: 60px;
    margin-bottom: 25px;
    position: relative;

    overflow: hidden;
    border: none;
    border-radius: 18px;
    cursor: pointer;
    div {
      width: 200%;
      height: 100%;
      position: absolute;
      top: 0;
      left: 0;
      background: linear-gradient(45deg, #6faae7, #fbc0ff, #ffe8c0);
    }
    p {
      position: absolute;
      top: 50%;
      left: 50%;
      transform: translate(-50%, -50%);

      color: #fff;
      font-size: 16px;
      font-weight: 800;
    }
    &:hover {
      div {
        left: -100%;
      }
      p {
        color: #515151;
      }
    }
  }
  .signup-forgotten {
    text-align: center;
    p:first-child {
      margin-bottom: 10px;
    }
    a {
      color: #6faae7;
    }
  }
}
</style>
