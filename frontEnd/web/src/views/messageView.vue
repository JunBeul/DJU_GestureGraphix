<template>
  <div class="warp">
    <h2 class="title">{{ title }}</h2>
    <p>{{ text }}</p>
    <p><router-link tag="a" @click="verifiedComplete" to="/login">{{verificationEmail}}이메일로 회원가입 하고 로그인 하러가기</router-link></p>
  </div>
</template>

<style lang="scss" scoped>
</style>

<script>
export default {
  name: "message",
  data() {
    return {
      title: "",
      text: "",
      verificationEmail: "",
    };
  },
  created() {
    // 이메일 정보를 URL 파라미터에서 읽어옴
    this.verificationEmail = this.$route.query.email;
    console.log("Verification email:", this.verificationEmail);
  },
  methods: {
    verifiedComplete(event) {
      event.preventDefault();
      const veriComp = "/verifiedComplete";
      const sendVerifiedChangeRequest = async () => {
        try {
          const response = await fetch(veriComp, {
            method: "POST",
            headers: {
              "Content-Type": "application/json",
            },
            body: JSON.stringify({
              verificationEmail: this.verificationEmail,
            }),
          });

          const data = await response.json();
          alert(data.message);
        } catch (error) {
          console.error(error);
        }
      };
      sendVerifiedChangeRequest();
    },
  },
};
</script>
