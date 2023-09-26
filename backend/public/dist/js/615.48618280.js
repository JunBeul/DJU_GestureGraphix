"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[615],{

/***/ 2615:
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
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/messageView.vue?vue&type=template&id=402db5ce

const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = {
  class: "title"
};
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_router_link = (0,runtime_core_esm_bundler/* resolveComponent */.up)("router-link");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", _hoisted_2, (0,shared_esm_bundler/* toDisplayString */.zw)($data.title), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, (0,shared_esm_bundler/* toDisplayString */.zw)($data.text), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, [(0,runtime_core_esm_bundler/* createVNode */.Wm)(_component_router_link, {
    tag: "a",
    onClick: $options.verifiedComplete,
    to: "/login"
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)((0,shared_esm_bundler/* toDisplayString */.zw)($data.verificationEmail) + "이메일로 회원가입 하고 로그인 하러가기", 1)]),
    _: 1
  }, 8, ["onClick"])])]);
}
;// CONCATENATED MODULE: ./src/views/messageView.vue?vue&type=template&id=402db5ce

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/messageView.vue?vue&type=script&lang=js
/* harmony default export */ var messageViewvue_type_script_lang_js = ({
  name: "message",
  data() {
    return {
      title: "",
      text: "",
      verificationEmail: ""
    };
  },
  created() {
    // 이메일 정보를 URL 파라미터에서 읽어옴
    this.verificationEmail = this.$route.query.email;
    console.log("Verification email:", this.verificationEmail);
  },
  methods: {
    verifiedComplete(event) {
      event.preventDefault();
      const veriComp = "/verifiedComplete";
      const sendVerifiedChangeRequest = async () => {
        try {
          const response = await fetch(veriComp, {
            method: "POST",
            headers: {
              "Content-Type": "application/json"
            },
            body: JSON.stringify({
              verificationEmail: this.verificationEmail
            })
          });
          const data = await response.json();
          alert(data.message);
        } catch (error) {
          console.error(error);
        }
      };
      sendVerifiedChangeRequest();
    }
  }
});
;// CONCATENATED MODULE: ./src/views/messageView.vue?vue&type=script&lang=js
 
// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/messageView.vue




;
const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(messageViewvue_type_script_lang_js, [['render',render]])

/* harmony default export */ var messageView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=615.48618280.js.map