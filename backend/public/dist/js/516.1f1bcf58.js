"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[516],{

/***/ 6516:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ loginView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/loginView.vue?vue&type=template&id=48d973e5&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-48d973e5"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", {
  class: "title"
}, "로그인", -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "id"
}, "ID", -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "pw"
}, "PW", -1));
const _hoisted_5 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_6 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "LOG IN", -1));
const _hoisted_7 = [_hoisted_5, _hoisted_6];
const _hoisted_8 = {
  class: "signup-forgotten"
};
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_router_link = (0,runtime_core_esm_bundler/* resolveComponent */.up)("router-link");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_3, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "text",
    name: "id",
    id: "id",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.login_id = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.login_id]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_4, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "password",
    name: "pw",
    id: "pw",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[1] || (_cache[1] = $event => $data.login_pw = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.login_pw]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[2] || (_cache[2] = (...args) => $options.login && $options.login(...args))
  }, _hoisted_7), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", _hoisted_8, [(0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("아직 회원이 아니신가요? "), (0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/signup"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("회원가입하기")]),
    _: 1
  })]), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/find/loginId"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("아이디")]),
    _: 1
  }), (0,runtime_core_esm_bundler/* createTextVNode */.Uk)(" / "), (0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    to: "/find/loginPw"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)("비밀번호 찾기")]),
    _: 1
  })])])]);
}
;// CONCATENATED MODULE: ./src/views/loginView.vue?vue&type=template&id=48d973e5&scoped=true

// EXTERNAL MODULE: ./node_modules/core-js/modules/es.array.push.js
var es_array_push = __webpack_require__(7658);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/loginView.vue?vue&type=script&lang=js

/* harmony default export */ var loginViewvue_type_script_lang_js = ({
  name: "login",
  data() {
    return {
      login_id: "",
      login_pw: "",
      loginSuccess: false
    };
  },
  methods: {
    login(event) {
      event.preventDefault();
      // 로그인 요청을 보낼 서버 주소
      const loginUrl = "/login"; // Express 서버의 로그인 라우트에 맞게 변경

      // 로그인 요청을 보내는 비동기 함수
      const sendLoginRequest = async () => {
        try {
          // axios를 사용하지 않고 fetch API를 사용하여 로그인 요청을 보냄
          const response = await fetch(loginUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json"
            },
            body: JSON.stringify({
              login_id: this.login_id,
              login_pw: this.login_pw
            })
          });
          const data = await response.json();

          // 서버로부터의 응답을 기반으로 팝업 메시지를 설정
          if (response.ok) {
            this.$store.dispatch("updateUserData", data.user);
            this.$router.push({
              path: "/main/setting"
            });
          } else {
            this.loginSuccess = false;
            alert(data.message);
          }
        } catch (error) {
          console.error(error);
        }
      };

      // 로그인 요청 함수 호출
      if (this.login_id === "") alert("아이디를 입력해 주세요.");else if (this.login_pw === "") alert("비밀번호를 입력해 주세요.");else sendLoginRequest();
    }
  }
});
;// CONCATENATED MODULE: ./src/views/loginView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/loginView.vue?vue&type=style&index=0&id=48d973e5&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/loginView.vue?vue&type=style&index=0&id=48d973e5&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/loginView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(loginViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-48d973e5"]])

/* harmony default export */ var loginView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=516.1f1bcf58.js.map