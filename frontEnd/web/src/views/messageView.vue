<template>
  <div class="warp">
    <h2 class="title">{{ title }}</h2>
    <p class="text">{{ text }}</p>
    <p class="back" @click="back">뒤로가기</p>
  </div>
</template>

<style lang="scss" scoped>
</style>

<script>
export default {
  name: "message",
  data() {
    return {
      title : '',
      text : ''
    }
  },
}
</script>
