"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[475],{

/***/ 4475:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ findLoginIdView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginIdView.vue?vue&type=template&id=55f5bb5f&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-55f5bb5f"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", {
  class: "title"
}, "아이디 찾기", -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "email"
}, "가입하신 이메일을 입력해 주세요.", -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_5 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "전송", -1));
const _hoisted_6 = [_hoisted_4, _hoisted_5];
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_router_link = (0,runtime_core_esm_bundler/* resolveComponent */.up)("router-link");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_3, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "email",
    name: "email",
    id: "email",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.findLoginId_email = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.findLoginId_email]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[1] || (_cache[1] = (...args) => $options.findLoginId && $options.findLoginId(...args))
  }, _hoisted_6), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/login"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("로그인 하러가기")]),
    _: 1
  })])]);
}
;// CONCATENATED MODULE: ./src/views/findLoginIdView.vue?vue&type=template&id=55f5bb5f&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginIdView.vue?vue&type=script&lang=js
/* harmony default export */ var findLoginIdViewvue_type_script_lang_js = ({
  name: "findLoginId",
  data() {
    return {
      findLoginId_email: "",
      founded_id: ""
    };
  },
  methods: {
    async findLoginId() {
      try {
        // 아이디 찾기 요청을 보낼 서버 주소
        const findIdUrl = "/find/loginId"; // Express 서버의 로그인 라우트에 맞게 변경

        // 아이디 찾기 요청을 보내는 비동기 함수
        const response = await fetch(findIdUrl, {
          method: "POST",
          headers: {
            "Content-Type": "application/json"
          },
          body: JSON.stringify({
            findLoginId_email: this.findLoginId_email
          })
        });
        const data = await response.json();

        // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
        if (response.ok) {
          this.founded_id = "등록된 아이디는 " + data.founded_id + " 입니다.";
          alert(this.founded_id);
        } else {
          alert("해당 이메일은 등록되지 않았습니다.");
        }
      } catch (error) {
        console.error(error);
      }
    }
  }
});
;// CONCATENATED MODULE: ./src/views/findLoginIdView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginIdView.vue?vue&type=style&index=0&id=55f5bb5f&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/findLoginIdView.vue?vue&type=style&index=0&id=55f5bb5f&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/findLoginIdView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(findLoginIdViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-55f5bb5f"]])

/* harmony default export */ var findLoginIdView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=475.77a21e4b.js.map