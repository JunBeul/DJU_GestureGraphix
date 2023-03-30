import { createRouter, createWebHistory } from "vue-router";

const routes = [
  {
    path: "/",
    redirect: "/login",
  },
  {
    path: "/about",
    name: "about",
    component: () => import("@/views/AboutView.vue"),
  },
  {
    path: "/login",
    name: "login",
    component: () => import("@/views/loginView.vue"),
  },
  {
    path: "/signup",
    name: "signup",
    component: () => import("@/views/signupView.vue"),
  },
  {
    path: "/signup",
    name: "signup",
    component: () => import("@/views/signupView.vue"),
  },
  {
    path: "/find/loginId",
    name: "loginid",
    component: () => import("@/views/findLoginIdView.vue"),
  },
  {
    path: "/find/loginPw",
    name: "loginpw",
    component: () => import("@/views/findLoginPwView.vue"),
  },
];

const router = createRouter({
  history: createWebHistory(process.env.BASE_URL),
  routes,
});

export default router;
