import { createStore } from "vuex";

export default createStore({
  state: {
    userData: null, // 유저 데이터 저장
  },
  mutations: {
    setUserData(state, userData) {
      state.userData = userData;
    },
  },
  actions: {
    updateUserData({ commit }, userData) {
      commit("setUserData", userData);
    },
  },
  getters: {
    getUserData: (state) => state.userData,
  },
  modules: {},
});
