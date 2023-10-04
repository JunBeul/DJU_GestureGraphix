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
        v-model="change_pw"
      />
    </form>
    <form>
      <label for="ConfirmPw">변경할 비밀번호 확인</label>
      <input
        type="password"
        name="ConfirmPw"
        id="ConfirmPw"
        required="required"
        class="anime"
        v-model="change_confirmPW"
      />
    </form>
    <button type="submit" @click="changePassword">
      <div class="anime"></div>
      <p class="anime">확인</p>
    </button>
  </div>
</template>

<script>
export default {
  name: "ChangePw",
  data() {
    return {
      change_pw: "",
      change_confirmPW: "",
      changPwEmail: "",
    };
  },
  mounted() {
    this.changePwDecrypt();
  },
  methods: {
    async changePwDecrypt() {
      try {
        const encryptedFPEData = this.$route.query.data;
        if (!encryptedFPEData) {
          throw new Error("Invalid encrypted data.");
        }

        const decryptUri = "/decrypt";
        const response = await fetch(decryptUri, {
          method: "POST",
          headers: {
            "Content-Type": "application/json",
          },
          body: JSON.stringify({
            encryptedData: encryptedFPEData,
          }),
        });

        if (!response.ok) {
          throw new Error("Failed to decrypt data.");
        } else {
          const data = await response.json();
          this.changPwEmail = data.email;
        }
      } catch (error) {
        console.error("Error decrypting data:", error);
        // Handle the error, show a message to the user, etc.
      }
    },
    changePassword(event) {
      event.preventDefault();
      const changePwUrl = "/changePassword";
      const changePw = async () => {
        try {
          const response = await fetch(changePwUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json",
            },
            body: JSON.stringify({
              changPwEmail: this.changPwEmail,
              change_pw: this.change_pw,
            }),
          });

          const data = await response.json();
          alert(data.message);
          if(response.ok) this.$router.push({ path: "/login" });
        } catch (error) {
          console.error(error);
        }
      };
      // 함수 호출
      if (this.change_pw === "") alert("변경할 비밀번호를 입력해 주세요.");
      else if (this.change_confirmPW === "")
        alert("비밀번호 확인 칸을 입력해 주세요.");
      else if (this.change_pw !== this.change_confirmPW)
        alert("변경할 비밀번호가 일치하지 않습니다.");
      else changePw();
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

    &#email {
      width: 350px;
    }
  }
}
button[type="submit"] {
  margin-bottom: 25px;
}
</style>
