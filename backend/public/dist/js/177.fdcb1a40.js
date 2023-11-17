"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[177],{

/***/ 2177:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ changePwView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/changePwView.vue?vue&type=template&id=1e230a3c&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-1e230a3c"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", {
  class: "title"
}, "비밀번호 변경", -1));
const _hoisted_3 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "pw"
}, "변경할 비밀번호", -1));
const _hoisted_4 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("label", {
  for: "ConfirmPw"
}, "변경할 비밀번호 확인", -1));
const _hoisted_5 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
  class: "anime"
}, null, -1));
const _hoisted_6 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", {
  class: "anime"
}, "확인", -1));
const _hoisted_7 = [_hoisted_5, _hoisted_6];
function render(_ctx, _cache, $props, $setup, $data, $options) {
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [_hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_3, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "password",
    name: "pw",
    id: "pw",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.change_pw = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.change_pw]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("form", null, [_hoisted_4, (0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
    type: "password",
    name: "ConfirmPw",
    id: "ConfirmPw",
    required: "required",
    class: "anime",
    "onUpdate:modelValue": _cache[1] || (_cache[1] = $event => $data.change_confirmPW = $event)
  }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.change_confirmPW]])]), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "submit",
    onClick: _cache[2] || (_cache[2] = (...args) => $options.changePassword && $options.changePassword(...args))
  }, _hoisted_7)]);
}
;// CONCATENATED MODULE: ./src/views/changePwView.vue?vue&type=template&id=1e230a3c&scoped=true

// EXTERNAL MODULE: ./node_modules/core-js/modules/es.array.push.js
var es_array_push = __webpack_require__(7658);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/changePwView.vue?vue&type=script&lang=js

/* harmony default export */ var changePwViewvue_type_script_lang_js = ({
  name: "ChangePw",
  data() {
    return {
      change_pw: "",
      change_confirmPW: "",
      changPwEmail: ""
    };
  },
  mounted() {
    this.changePwDecrypt();
  },
  methods: {
    async changePwDecrypt() {
      try {
        const encryptedFPEData = this.$route.query.data;
        if (!encryptedFPEData) {
          throw new Error("Invalid encrypted data.");
        }
        const decryptUri = "/decryptEmail";
        const response = await fetch(decryptUri, {
          method: "POST",
          headers: {
            "Content-Type": "application/json"
          },
          body: JSON.stringify({
            encryptedData: encryptedFPEData
          })
        });
        if (!response.ok) {
          throw new Error("Failed to decrypt data.");
        } else {
          const data = await response.json();
          this.changPwEmail = data.email;
        }
      } catch (error) {
        console.error("Error decrypting data:", error);
        // Handle the error, show a message to the user, etc.
      }
    },

    changePassword(event) {
      event.preventDefault();
      const changePwUrl = "/changePassword";
      const changePw = async () => {
        try {
          const response = await fetch(changePwUrl, {
            method: "POST",
            headers: {
              "Content-Type": "application/json"
            },
            body: JSON.stringify({
              changPwEmail: this.changPwEmail,
              change_pw: this.change_pw
            })
          });
          const data = await response.json();
          alert(data.message);
          if (response.ok) this.$router.push({
            path: "/login"
          });
        } catch (error) {
          console.error(error);
        }
      };
      // 함수 호출
      if (this.change_pw === "") alert("변경할 비밀번호를 입력해 주세요.");else if (this.change_confirmPW === "") alert("비밀번호 확인 칸을 입력해 주세요.");else if (this.change_pw !== this.change_confirmPW) alert("변경할 비밀번호가 일치하지 않습니다.");else changePw();
    }
  }
});
;// CONCATENATED MODULE: ./src/views/changePwView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/changePwView.vue?vue&type=style&index=0&id=1e230a3c&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/changePwView.vue?vue&type=style&index=0&id=1e230a3c&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/views/changePwView.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(changePwViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-1e230a3c"]])

/* harmony default export */ var changePwView = (__exports__);

/***/ })

}]);
//# sourceMappingURL=177.fdcb1a40.js.map