<template>
  <div class="wapper">
    <div>{{ foo }}</div>
  </div>
</template>

<style lang="scss" scoped>

</style>

<script>
import html from '@/riggingMain/rigging.html'

export default{
  data() {
    return {
      html,
      foo: null
    }
  },
  mounted() {
    this.foo = require('@/riggingMain/rigging.html')
  },
}
</script>