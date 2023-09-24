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
      title: "login",
    },
    component: () => import("@/views/loginView.vue"),
  },
  {
    path: "/signup",
    name: "signup",
    meta: {
      title: "signup",
    },
    component: () => import("@/views/signupView.vue"),
  },
  {
    path: "/find/loginId",
    name: "loginid",
    meta: {
      title: "findID",
    },
    component: () => import("@/views/findLoginIdView.vue"),
  },
  {
    path: "/find/loginPw",
    name: "loginpw",
    meta: {
      title: "findPW",
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
    path: "/unityView",
    name: "unityView",
    meta: {
      title: "unityView",
    },
    component: () => import("@/views/unityView.vue"),
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
