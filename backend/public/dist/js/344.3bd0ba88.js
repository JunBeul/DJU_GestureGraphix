"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[344],{

/***/ 9344:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ messageView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/shared/dist/shared.esm-bundler.js
var shared_esm_bundler = __webpack_require__(7139);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/messageView.vue?vue&type=template&id=a94309e8&scoped=true

const _withScopeId = n => (_pushScopeId("data-v-a94309e8"), n = n(), _popScopeId(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = {
  class: "title"
};
const _hoisted_3 = {
  class: "text"
};
function render(_ctx, _cache, $props, $setup, $data, $options) {
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", _hoisted_2, (0,shared_esm_bundler/* toDisplayString */.zw)($data.title), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", _hoisted_3, (0,shared_esm_bundler/* toDisplayString */.zw)($data.text), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
    class: "back",
    onClick: _cache[0] || (_cache[0] = (...args) => $options.back && $options.back(...args))
  }, "뒤로가기")]);
}
;// CONCATENATED MODULE: ./src/views/messageView.vue?vue&type=template&id=a94309e8&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/messageView.vue?vue&type=script&lang=js
/* harmony default export */ var messageViewvue_type_script_lang_js = ({
  name: "message",
  data() {
    return {
      title: "404에러",
      text: "해당 페이지는 존재하지 않는 페이지입니다. 주소를 확인해주세요."
    };
  },
  methods: {
    back: function (event) {
      window.history.go(-1);
    }
  }
});
;// CONCATENATED MODULE: ./src/views/messageView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/messageView.vue?vue&type=style&index=0&id=a94309e8&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/messageView.vue?vue&type=style&index=0&id=a94309e8&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/messageView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(messageViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-a94309e8"]])

/* harmony default export */ var messageView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=344.3bd0ba88.js.map