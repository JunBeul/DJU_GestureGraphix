"use strict";
(self["webpackChunkweb"] = self["webpackChunkweb"] || []).push([[678],{

/***/ 2678:
/***/ (function(__unused_webpack_module, __webpack_exports__, __webpack_require__) {

// ESM COMPAT FLAG
__webpack_require__.r(__webpack_exports__);

// EXPORTS
__webpack_require__.d(__webpack_exports__, {
  "default": function() { return /* binding */ settingView; }
});

// EXTERNAL MODULE: ./node_modules/@vue/runtime-core/dist/runtime-core.esm-bundler.js
var runtime_core_esm_bundler = __webpack_require__(3396);
// EXTERNAL MODULE: ./node_modules/@vue/shared/dist/shared.esm-bundler.js
var shared_esm_bundler = __webpack_require__(7139);
// EXTERNAL MODULE: ./node_modules/@vue/runtime-dom/dist/runtime-dom.esm-bundler.js
var runtime_dom_esm_bundler = __webpack_require__(9242);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/settingView.vue?vue&type=template&id=4f501fdb&scoped=true

const _withScopeId = n => ((0,runtime_core_esm_bundler/* pushScopeId */.dD)("data-v-4f501fdb"), n = n(), (0,runtime_core_esm_bundler/* popScopeId */.Cn)(), n);
const _hoisted_1 = {
  class: "warp"
};
const _hoisted_2 = /*#__PURE__*/_withScopeId(() => /*#__PURE__*/(0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, "진행하시려면 비밀번호를 입력해주세요.", -1));
const _hoisted_3 = {
  class: "modalInputBox"
};
function render(_ctx, _cache, $props, $setup, $data, $options) {
  const _component_Modal = (0,runtime_core_esm_bundler/* resolveComponent */.up)("Modal");
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createElementBlock */.iD)("div", _hoisted_1, [$data.setModal ? ((0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createBlock */.j4)(_component_Modal, {
    key: 0,
    onClose: $options.closeModal,
    onCheck: $options.pushData
  }, {
    footer: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => []),
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createElementVNode */._)("h2", null, (0,shared_esm_bundler/* toDisplayString */.zw)($data.message.title), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("p", null, (0,shared_esm_bundler/* toDisplayString */.zw)($data.message.text), 1), _hoisted_2, (0,runtime_core_esm_bundler/* createElementVNode */._)("div", _hoisted_3, [(0,runtime_core_esm_bundler/* withDirectives */.wy)((0,runtime_core_esm_bundler/* createElementVNode */._)("input", {
      class: "modalInput",
      type: "password",
      placeholder: "비밀번호",
      "onUpdate:modelValue": _cache[0] || (_cache[0] = $event => $data.pw = $event)
    }, null, 512), [[runtime_dom_esm_bundler/* vModelText */.nr, $data.pw]])])]),
    _: 1
  }, 8, ["onClose", "onCheck"])) : (0,runtime_core_esm_bundler/* createCommentVNode */.kq)("", true), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, "아이디 : " + (0,shared_esm_bundler/* toDisplayString */.zw)($data.user.id), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, "이메일 : " + (0,shared_esm_bundler/* toDisplayString */.zw)($data.user.email), 1), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, [(0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "button",
    onClick: _cache[1] || (_cache[1] = (...args) => $options.changePw && $options.changePw(...args)),
    id: "changePw"
  }, " 비밀번호 변경 ")]), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, [(0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "button",
    onClick: _cache[2] || (_cache[2] = (...args) => $options.resetChar && $options.resetChar(...args)),
    id: "resetChar"
  }, " 모델 파일 초기화 "), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    type: "button",
    onClick: _cache[3] || (_cache[3] = (...args) => $options.resetBg && $options.resetBg(...args)),
    id: "resetBg"
  }, " 배경 파일 초기화 ")]), (0,runtime_core_esm_bundler/* createElementVNode */._)("div", null, [(0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
    class: "withdrawal",
    onClick: _cache[4] || (_cache[4] = (...args) => $options.withdrawal && $options.withdrawal(...args)),
    id: "withdrawal"
  }, " 회원 탈퇴 ")])]);
}
;// CONCATENATED MODULE: ./src/views/settingView.vue?vue&type=template&id=4f501fdb&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/templateLoader.js??ruleSet[1].rules[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/components/modal.vue?vue&type=template&id=48849636&scoped=true

const modalvue_type_template_id_48849636_scoped_true_withScopeId = n => (_pushScopeId("data-v-48849636"), n = n(), _popScopeId(), n);
const modalvue_type_template_id_48849636_scoped_true_hoisted_1 = {
  class: "modal-window"
};
const modalvue_type_template_id_48849636_scoped_true_hoisted_2 = {
  class: "modal-content"
};
const modalvue_type_template_id_48849636_scoped_true_hoisted_3 = {
  class: "modal-footer"
};
function modalvue_type_template_id_48849636_scoped_true_render(_ctx, _cache, $props, $setup, $data, $options) {
  return (0,runtime_core_esm_bundler/* openBlock */.wg)(), (0,runtime_core_esm_bundler/* createBlock */.j4)(runtime_dom_esm_bundler/* Transition */.uT, {
    name: "modal",
    appear: ""
  }, {
    default: (0,runtime_core_esm_bundler/* withCtx */.w5)(() => [(0,runtime_core_esm_bundler/* createElementVNode */._)("div", {
      class: "modal modal-overlay",
      onClick: _cache[2] || (_cache[2] = (0,runtime_dom_esm_bundler/* withModifiers */.iM)($event => _ctx.$emit('close'), ["self"]))
    }, [(0,runtime_core_esm_bundler/* createElementVNode */._)("div", modalvue_type_template_id_48849636_scoped_true_hoisted_1, [(0,runtime_core_esm_bundler/* createElementVNode */._)("div", modalvue_type_template_id_48849636_scoped_true_hoisted_2, [(0,runtime_core_esm_bundler/* renderSlot */.WI)(_ctx.$slots, "default", {}, undefined, true)]), (0,runtime_core_esm_bundler/* createElementVNode */._)("footer", modalvue_type_template_id_48849636_scoped_true_hoisted_3, [(0,runtime_core_esm_bundler/* renderSlot */.WI)(_ctx.$slots, "footer", {}, () => [(0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
      class: "close",
      onClick: _cache[0] || (_cache[0] = $event => _ctx.$emit('close'))
    }, "취소"), (0,runtime_core_esm_bundler/* createElementVNode */._)("button", {
      class: "check",
      onClick: _cache[1] || (_cache[1] = $event => _ctx.$emit('check'))
    }, "확인")], true)])])])]),
    _: 3
  });
}
;// CONCATENATED MODULE: ./src/components/modal.vue?vue&type=template&id=48849636&scoped=true

;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/components/modal.vue?vue&type=script&lang=js
/* harmony default export */ var modalvue_type_script_lang_js = ({
  name: "modal"
});
;// CONCATENATED MODULE: ./src/components/modal.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/components/modal.vue?vue&type=style&index=0&id=48849636&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/components/modal.vue?vue&type=style&index=0&id=48849636&lang=scss&scoped=true

// EXTERNAL MODULE: ./node_modules/vue-loader/dist/exportHelper.js
var exportHelper = __webpack_require__(89);
;// CONCATENATED MODULE: ./src/components/modal.vue




;


const __exports__ = /*#__PURE__*/(0,exportHelper/* default */.Z)(modalvue_type_script_lang_js, [['render',modalvue_type_template_id_48849636_scoped_true_render],['__scopeId',"data-v-48849636"]])

/* harmony default export */ var modal = (__exports__);
;// CONCATENATED MODULE: ./node_modules/thread-loader/dist/cjs.js!./node_modules/babel-loader/lib/index.js??clonedRuleSet-40.use[1]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/settingView.vue?vue&type=script&lang=js

/* harmony default export */ var settingViewvue_type_script_lang_js = ({
  name: "Download",
  components: {
    Modal: modal
  },
  data() {
    return {
      user: {
        id: "admin",
        email: "admin@admin.com"
      },
      setModal: 0,
      pw: "",
      message: {
        title: "tempTitle",
        text: "tempText"
      },
      selectElement: ""
    };
  },
  computed: {
    userData() {
      return this.$store.getters.getUserData;
    }
  },
  watch: {
    // 감시자를 사용하여 userData 값이 변경될 때마다 실행됩니다
    userData: {
      handler(newUserData) {
        // userData 값이 변경되면 id와 email 값을 업데이트합니다
        this.user.id = newUserData.id;
        this.user.email = newUserData.email;
      },
      immediate: true // 컴포넌트가 생성될 때 즉시 실행됩니다
    }
  },

  methods: {
    changePw: function (event) {
      this.message.title = "비밀번호 변경";
      this.message.text = "비밀번호를 변경하시겠습니까?";
      this.selectElement = event.target.id;
      this.pw = "";
      this.setModal = 1;
    },
    resetChar: function (event) {
      this.message.title = "모델 파일을 전부 삭제하시겠습니까?";
      this.message.text = "모든 파일은 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw = "";
      this.setModal = 1;
    },
    resetBg: function (event) {
      this.message.title = "배경 파일을 전부 삭제하시겠습니까?";
      this.message.text = "모든 파일은 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw = "";
      this.setModal = 1;
    },
    withdrawal: function (event) {
      this.message.title = "정말 회원을 탈퇴하시겠습니까?";
      this.message.text = "모든 개인정보는 삭제되며, 복구되지 않습니다.";
      this.selectElement = event.target.id;
      this.pw = "";
      this.setModal = 1;
    },
    closeModal() {
      this.setModal = 0;
    },
    doSend() {
      this.closeModal();
    },
    pushData() {
      if (this.pw != "") {
        alert(`선택한 타입 = ${this.selectElement} / 입력한 비밀번호 = ${this.pw}`);
        /* 유저가 어떤 버튼을 눌러 모달창에 접근했는지 selectElement 안에 저장해둠
        비밀변호 변경: changePw - 비밀번호 변경 페이지로 이동
        모델 파일들 초기화: resetChar
        배경 파일들 초기화: resetBg
        회원 탈퇴: withdrawal
        */
        this.setModal = 0;
      } else {
        alert("비밀번호를 입력해 주세요.");
      }
    }
  }
});
;// CONCATENATED MODULE: ./src/views/settingView.vue?vue&type=script&lang=js
 
;// CONCATENATED MODULE: ./node_modules/mini-css-extract-plugin/dist/loader.js??clonedRuleSet-22.use[0]!./node_modules/css-loader/dist/cjs.js??clonedRuleSet-22.use[1]!./node_modules/vue-loader/dist/stylePostLoader.js!./node_modules/postcss-loader/dist/cjs.js??clonedRuleSet-22.use[2]!./node_modules/sass-loader/dist/cjs.js??clonedRuleSet-22.use[3]!./node_modules/vue-loader/dist/index.js??ruleSet[0].use[0]!./src/views/settingView.vue?vue&type=style&index=0&id=4f501fdb&lang=scss&scoped=true
// extracted by mini-css-extract-plugin

;// CONCATENATED MODULE: ./src/views/settingView.vue?vue&type=style&index=0&id=4f501fdb&lang=scss&scoped=true

;// CONCATENATED MODULE: ./src/views/settingView.vue




;


const settingView_exports_ = /*#__PURE__*/(0,exportHelper/* default */.Z)(settingViewvue_type_script_lang_js, [['render',render],['__scopeId',"data-v-4f501fdb"]])

/* harmony default export */ var settingView = (settingView_exports_);

/***/ })

}]);
//# sourceMappingURL=678.13e3cd9d.js.map