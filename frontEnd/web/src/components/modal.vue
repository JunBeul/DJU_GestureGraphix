<template>
  <transition name="modal" appear>
    <div class="modal modal-overlay" @click.self="$emit('close')">
      <div class="modal-window">
        <div class="modal-content">
          <slot/>
        </div>
        <footer class="modal-footer">
          <slot name="footer">
            <button class="close" @click="$emit('close')">취소</button>
            <button class="check" @click="$emit('check')">확인</button>
          </slot>
        </footer>
      </div>
    </div>
  </transition>
</template>

<script>
export default {
  name: "modal",
};
</script>

<style lang="scss" scoped>
.modal {
  &.modal-overlay {
    display: flex;
    align-items: center;
    justify-content: center;
    position: fixed;
    z-index: 30;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.5);
    margin: 0;
    border-radius: 18px;
  }

  &-window {
    background: #fff;
    border-radius: 18px;
    overflow: hidden;
    padding: 20px;
  }

  &-content {
  }

  &-footer {
    display: flex;
    justify-content: space-around;
    padding-top: 10px;
  }
}
button{
  width: 120px;
  height: 30px;
  border-radius: 18px;
}
.close{
  background-color: #6faae7;
  color: #fff;
}
.check{
  background-color: #F34A4A;
  color: #fff;
}
// 오버레이 트랜지션
.modal-enter-active, .modal-leave-active {
  transition: opacity 0.4s;

  // 오버레이에 포함되어 있는 모달 윈도의 트랜지션
  .modal-window {
    transition: opacity 0.4s, transform 0.4s;
  }
}

// 딜레이가 적용된 모달 윈도가 제거된 후에 오버레이가 사라짐
.modal-leave-active {
  transition: opacity 0.6s ease 0.4s;
}

.modal-enter, .modal-leave-to {
  opacity: 0;

  .modal-window {
    opacity: 0;
    transform: translateY(-20px);
  }
}
</style>
