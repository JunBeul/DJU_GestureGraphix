<template>
  <div class="warpper">
    <canvas id="canvasBG"></canvas>
    <!-- <canvas id="canvasBG-3D"></canvas> -->
    <div class="contentsWarpper">
      <h1 class="title">GestureGraphix</h1>
      <div class="contents">
        <router-view />
      </div>
      <p class="copy">ⓒ 2023. JunBeul. All rights reserved.</p>
    </div>
  </div>
</template>

<script>
import { app } from '@/assets/js/appCanvas';
// import { GLTFLoader } from 'three/addons/loaders/GLTFLoader.js';
// import * as THREE from 'three';


export default {
  name: "App",
  components: {},
};

// let scene = new THREE.Scene();
// const renderer = new THREE.WebGLRenderTarget({
//   canvas : document.querySelector('#canvasBG-3D')
// });

// let loader = new GLTFLoader();
// const modelUrl = new URL('../assets/shiba/scene.gltf', import.meta.url).href;
// loader.load(modelUrl, function(gltf){
//   scene.add(gltf.scene);
//   renderer.render(scene);
// });

window.onload = () => {
  let canvasTemp = document.querySelector('#canvasBG');
  new app(canvasTemp);
}
</script>

<style lang="scss">
.warpper {
  width: 100vw;
  height: 100vh;
  position: relative;

  #canvasBG{
    width: 100%;
    height: 100%;
    position: absolute;
    left: 0;
    top: 0;
  }
  .contentsWarpper{
    width: 100%;
    height: 100%;

    display: flex;
    flex-direction: column;
    align-items: center;
    justify-content: center;

    h1.title {
      z-index: 1;
      text-align: center;
      font-size: 64px;
      font-weight: 800;
      letter-spacing: 8px;
      margin-right: -8px;
      margin-bottom: 25px;
      color: #6faae7;
    }

    h2.title{
      text-align: center;
      font-size: 24px;
      font-weight: 700;
      letter-spacing: 6px;
      margin-right: -6px;
      margin-bottom: 25px;
      color: #000;
    }

    .contents {
      width: 600px;
      margin-bottom: 25px;
      padding: 25px;

      background: rgba(255, 255, 255, 0.25);
      box-shadow: 0 8px 32px 0 rgba(31, 38, 135, 0.37);
      backdrop-filter: blur(4px);
      -webkit-backdrop-filter: blur(4px);
      border-radius: 18px;
      border: 1px solid rgba(255, 255, 255, 0.18);

      > div.warp{
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: center;
      }

      form {
        width: 100%;
        margin-bottom: 25px;

        display: flex;
      }
      
      input {
        height: 40px;
        padding: 11px 20px;
        box-sizing: border-box;
        border-radius: 20px;
        border: solid 2px #fff;
        background-color: #fff;
        font-size: 16px;
      }
      input:focus {
        outline: none;
        background-color: #fff0;
      }
      input:valid,
      input:focus {
        background-color: #fff0;
      }
      button[type = submit] {
        width: 140px;
        height: 60px;
        position: relative;

        overflow: hidden;
        border: none;
        border-radius: 18px;
        cursor: pointer;
        div {
          width: 200%;
          height: 100%;
          position: absolute;
          top: 0;
          left: 0;
          background: linear-gradient(45deg, #6faae7, #fbc0ff, #ffe8c0);
        }
        p {
          position: absolute;
          top: 50%;
          left: 50%;
          transform: translate(-50%, -50%);

          color: #fff;
          font-size: 16px;
          font-weight: 800;
        }
        &:hover {
          div {
            left: -100%;
          }
          p {
            color: #515151;
          }
        }
      }
      button[type = button] {
        background-color: #6faae7;
        height: 40px;
        width: 140px;
        margin-left: 10px;
        border-radius: 20px;
        color: #fff;
      }

      a {
        color: #6faae7;
        text-decoration-line: none;
      }
    }

    .copy {
      z-index: 1;
      width: 600px;
      text-align: center;
      font-size: 12px;
    }
  }
}
</style>
