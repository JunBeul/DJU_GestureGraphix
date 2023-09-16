import { createRouter, createWebHistory } from "vue-router";

const routes = [
  {
    path: "/",
    redirect: "/login",
  },
  {
    path: "/login",
    name: "login",
    meta: {
      title: "로그인",
    },
    component: () => import("@/views/loginView.vue"),
  },
  {
    path: "/signup",
    name: "signup",
    meta: {
      title: "회원가입",
    },
    component: () => import("@/views/signupView.vue"),
  },
  {
    path: "/find/loginId",
    name: "loginid",
    meta: {
      title: "아이디 찾기",
    },
    component: () => import("@/views/findLoginIdView.vue"),
  },
  {
    path: "/find/loginPw",
    name: "loginpw",
    meta: {
      title: "비밀번호 찾기",
    },
    component: () => import("@/views/findLoginPwView.vue"),
  },
  {
    path: "/message",
    name: "message",
    meta: {
      title: "message",
    },
    component: () => import("@/views/messageView.vue"),
  },
  {
    path: "/ChangePw",
    name: "ChangePw",
    meta: {
      title: "비밀번호 변경",
    },
    component: () => import("@/views/ChangePw.vue"),
  },
];

const router = createRouter({
  history: createWebHistory(process.env.BASE_URL),
  routes,
});

router.afterEach((to, from) => {
  const title = to.meta.title || packageJson.name
  if(title) document.title = title
});

export default router;
