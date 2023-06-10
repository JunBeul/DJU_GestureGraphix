# backend
백엔드 작업물

# 로그인 기능 추가

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

