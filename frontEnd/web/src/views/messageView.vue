<template>
  <div class="warp">
    <h2 class="title">{{ title }}</h2>
    <p>{{ text }}</p>
    <p><router-link tag="a" to="/login">로그인 하러가기</router-link></p>
  </div>
</template>

<style lang="scss" scoped>
</style>

<script>
export default {
  name: 'message',
  data() {
    return {
      title : '',
      text : ''
    }
  },
}
</script>
