<template>
  <div>
    <h1 class="title">GestureGraphix</h1>
    <div class="contents">
      <router-view />
    </div>
    <p class="copy">ⓒ 2023. JunBeul. All rights reserved.</p>
  </div>
</template>

<script>
export default {
  name: "App",
  components: {},
};
</script>

<style lang="scss">
#app {
  width: 100vw;
  height: 100vh;

  display: flex;
  align-items: center;
  justify-content: center;

  background-image: url(./assets/bg.png);
  background-size: cover;
  background-position: center;
  .title {
    text-align: center;
    font-size: 64px;
    font-weight: 800;
    letter-spacing: 8px;
    margin-right: -8px;
    margin-bottom: 25px;
    color: #6faae7;
  }
  .contents {
    width: 600px;
    margin-bottom: 25px;

    background: rgba(255, 255, 255, 0.25);
    box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);
    backdrop-filter: blur(4px);
    -webkit-backdrop-filter: blur(4px);
    border-radius: 18px;
    border: 1px solid rgba(255, 255, 255, 0.18);
  }
  .copy {
    width: 600px;
    text-align: center;
    font-size: 12px;
  }
}
</style>
