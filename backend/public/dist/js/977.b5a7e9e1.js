"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[977],{

/***/ 1977:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ downloadView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/downloadView.vue?vue&type=template&id=805973ca&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-805973ca"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "text"
}, [/*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" GestureGraphix을 선택해주셔서 감사합니다!"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("br"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" 우리는 웹캠을 통한 3D 모션트래킹 서비스입니다!"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("br"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" 구글의 AI인 미디어 파이프를 활용하여 여러분께 환상적인 경험을 제공하고 있습니다."), /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("br"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" 기존의 다른 모션트래킹 서비스와 달리 AI를 활용하여 쉽고 정확한 서비스를 제공하고 있습니다. ")], -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "프로그램 다운로드", -1));
const _hoisted_5 = [_hoisted_3, _hoisted_4];
const _hoisted_6 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "text"
}, [/*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" 저희와 함께할 준비가 되셨다면 위의 다운로드 버튼을 눌러 프로그램을 설치해주세요!"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("br"), /*#__PURE__*/(0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" 같은 느낌의 소개문을 준비중에 있습니다. ")], -1));
function render(_ctx, _cache, $props, $setup, $data, $options) {
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[0] || (_cache[0] = (...args) => $options.download && $options.download(...args))
  }, _hoisted_5), _hoisted_6]);
}
;// CONCATENATED MODULE: ./src/views/downloadView.vue?vue&type=template&id=805973ca&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/downloadView.vue?vue&type=script&lang=js
/* harmony default export */ var downloadViewvue_type_script_lang_js = ({
  name: "download",
  data() {
    return {
      title: "",
      text: ""
    };
  },
  methods: {
    download: function (event) {
      const fileUrl = "https://elasticbeanstalk-ap-northeast-2-932716233989.s3.ap-northeast-2.amazonaws.com/capstoneDesign.zip"; // 실제 AWS S3 파일 URL로 대체
      window.open(fileUrl, "_blank"); // 새 창에서 파일 다운로드
    }
  }
});
;// CONCATENATED MODULE: ./src/views/downloadView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/downloadView.vue?vue&type=style&index=0&id=805973ca&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/downloadView.vue?vue&type=style&index=0&id=805973ca&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/downloadView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(downloadViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-805973ca"]])

/* harmony default export */ var downloadView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=977.b5a7e9e1.js.map