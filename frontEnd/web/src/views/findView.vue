<template>
  <div class="Warp">
    <nav>
      <ul>
        <li><router-link tag="a" to="/loginid">아이디 찾기</router-link></li>
        <li><router-link tag="a" to="/loginpw">비밀번호 찾기</router-link></li>
      </ul>
    </nav>
    <router-view />
  </div>
</template>
