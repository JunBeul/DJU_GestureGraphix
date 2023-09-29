<template>
  <div class="warp">
    <h2 class="title">{{ title }}</h2>
    <p class="text">{{ text }}</p>
    <p class="back" @click="back">뒤로가기</p>
  </div>
</template>

<style lang="scss" scoped>
.text{
  margin-bottom: 25px;
}
.back{
  color: #6faae7;
  cursor: pointer;
}
</style>

<script>
export default {
  name: 'message',
  data() {
    return {
      title : '404에러',
      text : '해당 페이지는 존재하지 않는 페이지입니다. 주소를 확인해주세요.'
    }
  },
  methods: {
    back: function(event){
      window.history.go(-1);
    }
  }
}
</script>
