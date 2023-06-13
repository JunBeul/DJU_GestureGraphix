# backend
백엔드 작업물

# 로그인 기능
--------------------
## 입력한 아이디와 비밀번호를 검사해서 맞는지 틀린지 구별하고 그에 맞는 팝업창을 띄웁니다.
클라이언트에서 아이디와 비밀번호를 입력하면, 서버에 등록된 값과 맞는지 비교해서 성공 혹은 실패 값을 반환합니다.
현재 서버에 아이디와 비밀번호는 (test, test)로 저장되어 있습니다.

1. 옳은 값을 입력했을 때의 메세지

![ezgif com-video-to-gif (1)](https://leesamgsoo.github.io/imgvideo/%EB%A1%9C%EA%B7%B8%EC%9D%B8%20%EC%84%B1%EA%B3%B5.gif)

2. 틀린 값을 입력했을 때의 메세지

![ezgif com-video-to-gif (2)](https://leesamgsoo.github.io/imgvideo/%EB%A1%9C%EA%B7%B8%EC%9D%B8%20%EC%8B%A4%ED%8C%A8.gif)

-------------------------------
#기술 스택
1. MongoDB - Express.js - Vue.js - Node.js

# 로그인 기능 코드

### 프론트엔드 수정 부분
```
frontEnd/web/src/views/loginView.vue에 

로그인 데이터를 서버로 보내고 

서버에서 받은 데이터로 alert창을 띄우는 기능 추가
```
### 추가한 코드
```
frontEnd/web/src/views/loginView.vue 
line26 : @click="login"
line37 ~ 94 : script부분에 코드 추가
```

### 백엔드 수정 부분
```
backend/routes/index.js에

클라이언트로부터 데이터를 받아

로그인 정보가 맞는지 검사하고
(id와 pw는 test, test로 설정)

성공, 실패 여부를 클라이언트에 전송하는 기능 추가
```

