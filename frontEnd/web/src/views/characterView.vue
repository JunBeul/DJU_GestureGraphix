<template>
  <div class="warp">
    <div class="flexWarp">
      <div class="charFile anime" v-for="dataList in user">
        <p>{{dataList.fileName}}</p>
        <button type="button" class="icon anime" @click="charDel">
          <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 512 512"><path d="M302.96 76c6.31 1.52 12.21 3.86 16.79 8.73 5.66 6.03 8.09 13.25 7.99 21.46-.07 5.94-.01 11.87-.01 18.16h68.38c7.47 0 9.87 2.42 9.88 9.88 0 5.39.02 10.78 0 16.17-.02 6.93-2.56 9.46-9.57 9.49-6.89.02-13.78-.02-20.67 0-1.13 0-2.27.11-3.84.18v5.05c0 78.62-.04 157.25.04 235.87.01 11.61-3.53 21.35-12.93 28.54-5.79 4.43-12.44 6.4-19.61 6.41-55.59.05-111.18.12-166.77-.03-19.31-.05-32.48-14.13-32.51-34.19-.05-41.48-.03-82.96-.03-124.44 0-37.5 0-74.99-.01-112.49v-4.99h-13.87c-4.09 0-8.18.09-12.26-.04-4.99-.15-7.78-2.93-7.88-7.95-.12-6.09-.06-12.19-.03-18.28.03-6.5 2.65-9.16 9.17-9.17 21.49-.03 42.98-.01 64.46-.01h4.62v-17.81c-.01-5.33.71-10.49 3.31-15.26 4.36-7.98 10.96-12.88 19.84-14.71.55-.11 1.08-.37 1.62-.57h93.9Zm-127.27 90.01v234.02h160.65V166.01H175.69Zm123.6-61.28h-86.41v19.4h86.41v-19.4Z"/><path d="M205.49 282.58v-67c0-8.18 2.27-10.45 10.38-10.45 3.39 0 6.79-.1 10.17.04 4.75.19 7.5 3 7.79 7.75.05.82.02 1.64.02 2.45v134.7c0 7.92-2.33 10.24-10.24 10.25-3.04 0-6.08.02-9.12 0-6.27-.06-8.9-2.66-8.99-8.99-.06-4.33-.01-8.65-.01-12.98v-55.77ZM305.72 283.07v67c0 7.94-2.32 10.25-10.19 10.26-3.51 0-7.02.1-10.52-.04-4.57-.19-7.28-2.95-7.61-7.54-.07-.93-.03-1.87-.03-2.81V215.6c0-8.15 2.3-10.45 10.4-10.46 3.04 0 6.08-.03 9.12 0 6.13.08 8.81 2.79 8.83 9.17.05 15.32.02 30.63.02 45.95v22.8Z"/></svg>
        </button>
      </div>
      <div class="charUpload anime" @click="charUpload">
        <input type="file" id="file" @change="fileChange" style="display: none;">
        <p>모델 업로드</p>
      </div>
    </div>
  </div>
</template>

<style lang="scss" scoped>
  .warp{
    width: 100%;
    height: 100%;
    padding: 30px;
    overflow-y: scroll;
    .flexWarp{
      width: 100%;
      display: flex;
      flex-direction: column;
      .charFile{
        width: 100%;
        display: flex;
        text-align: center;
        border-radius: 100px;
        padding: 5px;
        margin-bottom: 10px;
        p{
          height: 25px;
          flex-grow: 1;
          line-height: 25px;
        }
        .icon{
          background-color: transparent;
          height: 25px;
          width: auto;
          margin: 0;
          padding: 0;
          svg{
            fill: #3A3A3A;
            height: 100%;
          }:hover{
            fill: #F34A4A;
          }
        }
      }
      .charFile:hover{
        box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);
      }
      .charUpload{
        width: 100%;
        background-color: #6faae7;
        height: 35px;
        display: flex;
        justify-content: center;
        align-items: center;
        border-radius: 100px;
        cursor: pointer;
        p{
          color: #fff;
        }
      }
      .charUpload:hover{
        box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);
      }
    }
  }
  .warp::-webkit-scrollbar {
    width: 8px;
  }
  .warp::-webkit-scrollbar-thumb {
    background: #6faae7;
    border-radius: 10px;
  }
</style>

<script>
export default {
  name: 'character',
  data() {
    return {
      user : [{
        imgSrc: "asdf",
        fileName: "파일1"
      },
      {
        imgSrc: "asdf",
        fileName: "파일2"
      },
      {
        imgSrc: "asdf",
        fileName: "파일3"
      },
      {
        imgSrc: "asdf",
        fileName: "파일4"
      },
      {
        imgSrc: "asdf",
        fileName: "파일5"
      },
      {
        imgSrc: "asdf",
        fileName: "파일6"
      },
      {
        imgSrc: "asdf",
        fileName: "파일7"
      },
      {
        imgSrc: "asdf",
        fileName: "파일8"
      },
      {
        imgSrc: "asdf",
        fileName: "파일9"
      },
      {
        imgSrc: "asdf",
        fileName: "파일10"
      },
      {
        imgSrc: "asdf",
        fileName: "파일1"
      },
      {
        imgSrc: "asdf",
        fileName: "파일2"
      },
      {
        imgSrc: "asdf",
        fileName: "파일3"
      },
      {
        imgSrc: "asdf",
        fileName: "파일4"
      },
      {
        imgSrc: "asdf",
        fileName: "파일5"
      },
      {
        imgSrc: "asdf",
        fileName: "파일6"
      },
      {
        imgSrc: "asdf",
        fileName: "파일7"
      },
      {
        imgSrc: "asdf",
        fileName: "파일8"
      },
      {
        imgSrc: "asdf",
        fileName: "파일9"
      },
      {
        imgSrc: "asdf",
        fileName: "파일10"
      },
      {
        imgSrc: "asdf",
        fileName: "파일1"
      },
      {
        imgSrc: "asdf",
        fileName: "파일2"
      },
      {
        imgSrc: "asdf",
        fileName: "파일3"
      },
      {
        imgSrc: "asdf",
        fileName: "파일4"
      },
      {
        imgSrc: "asdf",
        fileName: "파일5"
      },
      {
        imgSrc: "asdf",
        fileName: "파일6"
      },
      {
        imgSrc: "asdf",
        fileName: "파일7"
      },
      {
        imgSrc: "asdf",
        fileName: "파일8"
      },
      {
        imgSrc: "asdf",
        fileName: "파일9"
      },
      {
        imgSrc: "asdf",
        fileName: "파일10"
      }]
    }
  },
  methods: {
    charDel: function(event){
      if(confirm('파일을 삭제하시겠습니까?')){
        //확인
      } else {
        //아니요
      }
    },
    charUpload: function(event){
      document.querySelector('#file').click();
    },
    fileChange: function(event){
      console.log(this.file_name = event.target.files[0].name);
    }
  }
}
</script>
