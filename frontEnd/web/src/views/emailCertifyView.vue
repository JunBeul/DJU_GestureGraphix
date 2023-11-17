<template>
  <div class="warp">
    <h2 class="title">{{ title }}</h2>
    <p>{{ text }}</p>
    <p>
      <router-link tag="a" @click="verifiedComplete" to="/login"
      >{{ verificationEmail }} 이메일로 회원가입 하고 로그인
        하러가기</router-link
      >
    </p>
  </div>
</template>

<script>
export default {
  name: "emailCertify",
  data() {
    return {
      title: "",
      text: "",
      verificationEmail: "",
    };
  },
  mounted() {
    this.verifyDecrypt();
  },
  methods: {
    async verifyDecrypt() {
      try {
        const encryptedSUEData = this.$route.query.data;
        if (!encryptedSUEData) {
          throw new Error("Invalid encrypted data.");
        }

        const decryptUri = "/decryptEmail";
        const response = await fetch(decryptUri, {
          method: "POST",
          headers: {
            "Content-Type": "application/json",
          },
          body: JSON.stringify({
            encryptedData: encryptedSUEData,
          }),
        });

        if (!response.ok) {
          throw new Error("Failed to decrypt data.");
        } else {
          const data = await response.json();
          this.verificationEmail = data.email;
        }
      } catch (error) {
        console.error("Error decrypting data:", error);
        // Handle the error, show a message to the user, etc.
      }
    },
    async verifiedComplete(event) {
      event.preventDefault();
      const veriComp = "/verifiedComplete";
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

        if (!response.ok) {
          throw new Error("Failed to complete verification.");
        }

        const data = await response.json();
        alert(data.message);
      } catch (error) {
        console.error(error);
        // Handle the error, show a message to the user, etc.
      }
    },
  },
};
</script>