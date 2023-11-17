"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[125],{

/***/ 5177:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ emailCertifyView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/shared/dist/shared.esm-bundler.js
var shared_esm_bundler = __webpack_require__(7139);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/emailCertifyView.vue?vue&type=template&id=602744ce

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
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createTextVNode */.Uk)((0,shared_esm_bundler/* toDisplayString */.zw)($data.verificationEmail) + " 이메일로 회원가입 하고 로그인 하러가기", 1)]),
    _: 1
  }, 8, ["onClick"])])]);
}
;// CONCATENATED MODULE: ./src/views/emailCertifyView.vue?vue&type=template&id=602744ce

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/emailCertifyView.vue?vue&type=script&lang=js
/* harmony default export */ var emailCertifyViewvue_type_script_lang_js = ({
  name: "emailCertify",
  data() {
    return {
      title: "",
      text: "",
      verificationEmail: ""
    };
  },
  mounted() {
    this.verifyDecrypt();
  },
  methods: {
    async verifyDecrypt() {
      try {
        const encryptedSUEData = this.$route.query.data;
        if (!encryptedSUEData) {
          throw new Error("Invalid encrypted data.");
        }
        const decryptUri = "/decryptEmail";
        const response = await fetch(decryptUri, {
          method: "POST",
          headers: {
            "Content-Type": "application/json"
          },
          body: JSON.stringify({
            encryptedData: encryptedSUEData
          })
        });
        if (!response.ok) {
          throw new Error("Failed to decrypt data.");
        } else {
          const data = await response.json();
          this.verificationEmail = data.email;
        }
      } catch (error) {
        console.error("Error decrypting data:", error);
        // Handle the error, show a message to the user, etc.
      }
    },

    async verifiedComplete(event) {
      event.preventDefault();
      const veriComp = "/verifiedComplete";
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
        if (!response.ok) {
          throw new Error("Failed to complete verification.");
        }
        const data = await response.json();
        alert(data.message);
      } catch (error) {
        console.error(error);
        // Handle the error, show a message to the user, etc.
      }
    }
  }
});
;// CONCATENATED MODULE: ./src/views/emailCertifyView.vue?vue&type=script&lang=js
 
// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/emailCertifyView.vue




;
const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(emailCertifyViewvue_type_script_lang_js, [['render',render]])

/* harmony default export */ var emailCertifyView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=125.b990582e.js.map