"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[238],{

/***/ 4238:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ findLoginPwView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginPwView.vue?vue&type=template&id=558e9132&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-558e9132"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", {
  class: "title"
}, "비밀번호 찾기", -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "email"
}, "가입하신 이메일을 입력해 주세요.", -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "id"
}, "가입하신 아이디를 입력해주세요.", -1));
const _hoisted_5 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_6 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "전송", -1));
const _hoisted_7 = [_hoisted_5, _hoisted_6];
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_router_link = (0,runtime_core_esm_bundler/* resolveComponent */.up)("router-link");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_3, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "email",
    name: "email",
    id: "email",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.findLoginPw_email = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.findLoginPw_email]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_4, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "text",
    name: "id",
    id: "id",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[1] || (_cache[1] = $event => $data.findLoginPw_id = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.findLoginPw_id]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[2] || (_cache[2] = (...args) => $options.findLoginPw && $options.findLoginPw(...args))
  }, _hoisted_7), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/login"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("로그인 하러가기")]),
    _: 1
  })])]);
}
;// CONCATENATED MODULE: ./src/views/findLoginPwView.vue?vue&type=template&id=558e9132&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginPwView.vue?vue&type=script&lang=js
/* harmony default export */ var findLoginPwViewvue_type_script_lang_js = ({
  name: "findLoginPw",
  data() {
    return {
      findLoginPw_email: "",
      findLoginPw_id: ""
    };
  },
  methods: {
    async findLoginPw() {
      const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
      // 함수 호출
      if (this.findLoginPw_email === "") alert("이메일을 입력해 주세요.");else if (!emailPattern.test(this.findLoginPw_email)) alert("올바른 이메일 형식이 아닙니다.");else if (this.findLoginPw_id === "") alert("아이디를 입력해 주세요.");else {
        try {
          // 아이디 찾기 요청을 보낼 서버 주소
          const findPwUrl = "/find/loginPw"; // Express 서버의 로그인 라우트에 맞게 변경

          // 아이디 찾기 요청을 보내는 비동기 함수
          const response = await fetch(findPwUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json"
            },
            body: JSON.stringify({
              findLoginPw_email: this.findLoginPw_email,
              findLoginPw_id: this.findLoginPw_id
            })
          });
          const data = await response.json();

          // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
          alert(data.message);
        } catch (error) {
          console.error(error);
        }
      }
    }
  }
});
;// CONCATENATED MODULE: ./src/views/findLoginPwView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/findLoginPwView.vue?vue&type=style&index=0&id=558e9132&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/findLoginPwView.vue?vue&type=style&index=0&id=558e9132&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/findLoginPwView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(findLoginPwViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-558e9132"]])

/* harmony default export */ var findLoginPwView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=238.2b648554.js.map