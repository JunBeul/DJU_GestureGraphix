<template>
  <div class="warp">
    <Modal @close="closeModal" @check="pushData" v-if="setModal">
      <!-- default 슬롯 콘텐츠 -->
      <h2>{{ message.title }}</h2>
      <p>{{ message.text }}</p>
      <p>진행하시려면 비밀번호를 입력해주세요.</p>
      <div class="modalInputBox">
        <input class="modalInput" type="password" placeholder="비밀번호" v-model="pw">
      </div>
      <!-- /default -->
      <!-- footer 슬롯 콘텐츠 -->
      <template slot="footer">
      </template>
      <!-- /footer -->
    </Modal>

    <div>아이디 : {{ user.id }}</div>
    <div>이메일 : {{ user.email }}</div>
    <div>
      <button type="button" @click="changePw" id="changePw">비밀번호 변경</button>
    </div>
    <div>
        <button type="button" @click="resetChar" id="resetChar">모델 파일 초기화</button>
        <button type="button" @click="resetBg" id="resetBg">배경 파일 초기화</button>
    </div>
    <div>
      <button class="withdrawal" @click="withdrawal" id="withdrawal">회원 탈퇴</button>  
    </div>
  </div>
</template>

<style lang="scss" scoped>
.warp{
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;

  .modal-content{

    *{
      margin: 10px 0;
    }
    *:first-child{
      margin-top: 0;
    }
    h2{
      font-size: 22px;
    }
    .modalInputBox{
      border-bottom: 3px solid #6faae7;
      .modalInput {
        width: 100%;
        margin: 0;
        padding: 5px;
      }
    }
  }

  div{
    margin: 10px;
  }
  div:first-child{
    margin-top: 0;
  }
  div:last-child{
    margin-bottom: 0;
  }
  .withdrawal{
    background-color: #F34A4A;
    width: 150px;
    height: 40px;
    color: #fff;
    display: flex;
    align-items: center;
    justify-content: center;
    border-radius: 20px;
    cursor: pointer;
  }
}
</style>

<script>
import Modal from '@/components/modal.vue'
export default {
  name: 'Download',
  components: { Modal },
  data() {
    return {
      user : {
        id: "admin",
        email: "admin@admin.com"
      },
      setModal: 0,
      pw: "",
      message: {
        title: "tempTitle",
        text: "tempText",
      },
      selectElement: '',
    }
  },
  methods: {
    changePw: function(event){
      this.message.title = "비밀번호 변경";
      this.message.text = "비밀번호를 변경하시겠습니까?";
      this.selectElement = event.target.id;
      this.pw="";
      this.setModal = 1;
    },
    resetChar: function(event){
      this.message.title = "모델 파일을 전부 삭제하시겠습니까?";
      this.message.text = "모든 파일은 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw="";
      this.setModal = 1;
    },
    resetBg: function(event){
      this.message.title = "배경 파일을 전부 삭제하시겠습니까?";
      this.message.text = "모든 파일은 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw="";
      this.setModal = 1;
    },
    withdrawal: function(event){
      this.message.title = "정말 회원을 탈퇴하시겠습니까?";
      this.message.text = "모든 개인정보는 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw="";
      this.setModal = 1;
    },
    closeModal(){
      this.setModal = 0;
    },
    doSend(){
      this.closeModal();
    },
    pushData(){
      if(this.pw != ''){
        alert(`선택한 타입 = ${this.selectElement} / 입력한 비밀번호 = ${this.pw}`);
        /* 유저가 어떤 버튼을 눌러 모달창에 접근했는지 selectElement 안에 저장해둠
        비밀변호 변경: changePw - 비밀번호 변경 페이지로 이동
        모델 파일들 초기화: resetChar
        배경 파일들 초기화: resetBg
        회원 탈퇴: withdrawal
        */
        this.setModal = 0;
      } else {
        alert("비밀번호를 입력해 주세요.");
      }
    }
  },
}
</script>
