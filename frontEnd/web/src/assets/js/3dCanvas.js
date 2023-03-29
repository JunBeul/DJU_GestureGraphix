import * as THREE from '@/assets/js/three';

const scene = new THREE.Scene();
const camera = new THREE.PerspectiveCamera(
  75,
  window.innerWidth / window.innerHeight,
  0.1,
  1000
  );
  var renderer = new THREE.WebGLRenderer({antialias:true});

  renderer.setClearColor(new THREE.Color(0xeeeeee));
  renderer.setSize(window.innerWidth, window.innerHeight);
  renderer.shadowMapEnabled = true; 