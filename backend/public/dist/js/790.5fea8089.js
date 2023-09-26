"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[790],{

/***/ 1790:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ signupView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/signupView.vue?vue&type=template&id=5517d212&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-5517d212"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", {
  class: "title"
}, "회원가입", -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "email"
}, "이메일", -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "id"
}, "아이디", -1));
const _hoisted_5 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "pw"
}, "비밀번호", -1));
const _hoisted_6 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "ConfirmPw"
}, "비밀번호 재입력", -1));
const _hoisted_7 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_8 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "SIGN UP", -1));
const _hoisted_9 = [_hoisted_7, _hoisted_8];
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_router_link = (0,runtime_core_esm_bundler/* resolveComponent */.up)("router-link");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_3, (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, [(0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "email",
    name: "email",
    id: "email",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.signup_email = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.signup_email]])])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_4, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "text",
    name: "id",
    id: "id",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[1] || (_cache[1] = $event => $data.signup_id = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.signup_id]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_5, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "password",
    name: "pw",
    id: "pw",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[2] || (_cache[2] = $event => $data.signup_pw = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.signup_pw]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_6, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "password",
    name: "ConfirmPw",
    id: "ConfirmPw",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[3] || (_cache[3] = $event => $data.signup_confirmPW = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.signup_confirmPW]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[4] || (_cache[4] = (...args) => $options.emailCertification && $options.emailCertification(...args))
  }, _hoisted_9), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/login"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("로그인 하러가기")]),
    _: 1
  })])]);
}
;// CONCATENATED MODULE: ./src/views/signupView.vue?vue&type=template&id=5517d212&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/signupView.vue?vue&type=script&lang=js
/* harmony default export */ var signupViewvue_type_script_lang_js = ({
  name: "signup",
  data() {
    return {
      signup_email: "",
      signup_id: "",
      signup_pw: "",
      signup_confirmPW: ""
    };
  },
  methods: {
    emailCertification(event) {
      event.preventDefault();
      const emailCUrl = "/emailCertification";
      const sendEmailCRequest = async () => {
        try {
          const response = await fetch(emailCUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json"
            },
            body: JSON.stringify({
              signup_id: this.signup_id,
              signup_pw: this.signup_pw,
              signup_email: this.signup_email
            })
          });
          const data = await response.json();
          alert(data.message);
        } catch (error) {
          console.error(error);
        }
      };
      const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
      // 함수 호출
      if (this.signup_email === "") alert("이메일을 입력해 주세요.");else if (!emailPattern.test(this.signup_email)) alert("올바른 이메일 형식이 아닙니다.");else if (this.signup_id === "") alert("아이디를 입력해 주세요.");else if (this.signup_pw === "") alert("비밀번호를 입력해 주세요.");else if (this.signup_confirmPW === "") alert("비밀번호 재입력 칸을 입력해 주세요.");else if (this.signup_confirmPW !== this.signup_pw) alert("비밀번호가 일치하지 않습니다.");else sendEmailCRequest();
    }
  }
});
;// CONCATENATED MODULE: ./src/views/signupView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/signupView.vue?vue&type=style&index=0&id=5517d212&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/signupView.vue?vue&type=style&index=0&id=5517d212&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/signupView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(signupViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-5517d212"]])

/* harmony default export */ var signupView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=790.5fea8089.js.map