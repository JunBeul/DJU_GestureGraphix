var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.post('/login', (req, res) => {
  const { username, password } = req.body;

  // 간단한 로그인 처리
  if (login_id === 'test' && login_pw === 'test') {
    res.status(200).json({ message: '로그인 성공' });
  } else {
    res.status(401).json({ message: '로그인 실패' });
  }
});

module.exports = router;
