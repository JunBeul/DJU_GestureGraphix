import { createRouter, createWebHistory } from "vue-router";

const routes = [
  {
    path: "/",
    redirect: "/login",
  },
  {
    path: "/main",
    redirect: "/main/download",
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
    path: "/changePw",
    name: "changePw",
    meta: {
      title: "비밀번호 변경",
    },
    component: () => import("@/views/changePwView.vue"),
  },

  /** 메인 */
  {
    path: "/main/test",
    name: "nav",
    meta: {
      title: "네비",
    },
    component: () => import("@/components/Navigation.vue"),

    children: [
      {
        path: "/main/download",
        name: "download",
        meta: {
          title: "다운로드",
        },
        component: () => import("@/views/downloadView.vue"),
      },
      {
        path: "/main/character",
        name: "character",
        meta: {
          title: "모델 업로드",
        },
        component: () => import("@/views/characterView.vue"),
      },
      {
        path: "/main/backgraund",
        name: "backgraund",
        meta: {
          title: "배경 업로드",
        },
        component: () => import("@/views/backgraundView.vue"),
      },
      {
        path: "/main/setting",
        name: "setting",
        meta: {
          title: "설정",
        },
        component: () => import("@/views/settingView.vue"),
      },
    ],
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
