const { defineConfig } = require("@vue/cli-service");

module.exports = defineConfig({
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
  chainWebpack: (config) => {
    // html-loader를 추가
    config.module
      .rule("html")
      .test(/\.html$/)
      .use("html-loader")
      .loader("html-loader")
      .end();
  },
  configureWebpack: {
    optimization: {
      minimize: false, // CSS Minimizer 플러그인 비활성화
    },
  },
});
