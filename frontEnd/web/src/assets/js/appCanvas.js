import { GlowParticle } from "./glowparticle.js";

const COLORS = [
  {r: 217, g: 209, b:245}, //연보라
  {r: 252, g: 200, b:237}, //연분홍
  {r: 171, g: 241, b:206}, //연초록
  {r: 246, g: 229, b:178}, //연노랑
  {r: 178, g: 198, b:246}  //연파랑
];

export class app{
  constructor(canvas){
    this.canvas = canvas;
    this.ctx = this.canvas.getContext('2d');

    this.pixelRatio = (window.devicePixelRatio > 1) ? 2 : 1;

    this.totalParticles = 15;
    this.particles = [];
    this.maxRadius = 900;
    this.minRadius = 400;

    window.addEventListener('resize', this.resize.bind(this), false);
    this.resize();

    window.requestAnimationFrame(this.animate.bind(this));
  }

  resize(){
    this.stageWidth = document.body.clientWidth;
    this.stageHeight = document.body.clientHeight;

    this.canvas.width = this.stageWidth * this.pixelRatio;
    this.canvas.height = this.stageHeight * this.pixelRatio;
    this.ctx.scale(this.pixelRatio, this.pixelRatio);

    this.ctx.globalCompositeOperation = 'saturation';

    this.createParticles();
  }

  createParticles(){
    let curColor = 0;
    this.particles = [];

    for(let i = 0; i < this.totalParticles; i++){
      const item = new GlowParticle(
        Math.random() * this.stageWidth,
        Math.random() * this.stageHeight,
        Math.random() * (this.maxRadius - this.minRadius) + this.minRadius,
        COLORS[curColor]
      );

      if(++curColor >= COLORS.length){
        curColor = 0;
      }

      this.particles[i] = item;
    }
  }

  animate(){
    window.requestAnimationFrame(this.animate.bind(this));

    this.ctx.clearRect(0, 0, this.stageWidth, this.stageHeight);

    for(let i = 0; i < this.totalParticles; i++){
      const item = this.particles[i];
      item.animate(this.ctx, this.stageWidth, this.stageHeight);
    }
  }
}
