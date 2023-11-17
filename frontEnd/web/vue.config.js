const { defineConfig } = require("@vue/cli-service");

module.exports = defineConfig({
  chainWebpack: config => {
    config.module
      .rule('html')
      .test(/\.html$/)
      .use('html-loader')
      .loader('html-loader')
  },
  
  transpileDependencies: true,
  lintOnSave: false,
  css: {
    loaderOptions: {
      sass: {
        additionalData: `
          @import "@/assets/scss/reset.scss";
        `,
      },
    },
  },
  
  configureWebpack: {
    optimization: {
      minimize: false, // CSS Minimizer 플러그인 비활성화
    },
  },
});
