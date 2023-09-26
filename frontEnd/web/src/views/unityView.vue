<template>
  <p>This is the Next Page.</p>
</template>

<script>
export default {
  mounted() {
    // 페이지가 로드되면 Unity WebGL 빌드 페이지로 바로 이동
    window.location.href = "webBuild/GestureGraphix.html";
  }
};
</script>

<style scoped>

</style>