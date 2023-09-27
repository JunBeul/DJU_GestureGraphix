var express = require('express');
var router = express.Router();
const nodemailer = require('nodemailer');

//db 연결 코드
const { MongoClient, ServerApiVersion } = require('mongodb');
const path = require("path");

const uri = process.env.MONG_D_URL || "mongodb+srv://mongnoj892:ScRC4W4GLaoyAsm1@cluster0.c593zzk.mongodb.net/?retryWrites=true&w=majority";
// Create a MongoClient with a MongoClientOptions object to set the Stable API version
const client = new MongoClient(uri, {
  serverApi: {
    version: ServerApiVersion.v1,
    strict: true,
    deprecationErrors: true,
  }
});

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.post('/login', async (req, res) => {
  const { login_id, login_pw } = req.body;

  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const query = {
      user_id: login_id,
      user_pw: login_pw
    };

    const loginData = await collection.findOne(query);

    if (!loginData) { // 사용자가 없는 경우
      res.status(401).json({message: '로그인 실패'});
    } else {
      if(loginData.isVerified === true) {
        // 사용자를 찾았고 인증이 된 경우
        res.status(200).json({ message: '로그인 성공' });
      } else {
        // 사용자를 찾았고 인증이 안 된 경우
        res.status(401).json({message: '로그인 실패'});
      }
    }
  } catch (error) {
    console.error("Error:", error);
    res.status(500).json({ message: '서버 오류' });
  } finally {
    // 연결 해제
    await client.close();
  }
});

router.post('/find/loginId', async (req, res) => {
  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { findLoginId_email } = req.body;

    const query = {
      email: findLoginId_email,
    };

    const findIdData = await collection.find(query).toArray();

    if (findIdData.length === 0) {
      res.status(401).json({ message: '등록된 ID가 존재하지 않습니다.' });
    } else {
      res.status(200).json({ founded_id: findIdData.map(doc => doc.user_id) });
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' });
  } finally {
    await client.close();
  }
});

router.post('/find/loginPw', async (req, res) => {
  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { findLoginPw_email, findLoginPw_id } = req.body;

    const query = {
      email: findLoginPw_email,
    };

    const findPwData = await collection.find(query).toArray();

    if (findPwData.length === 0) {
      res.status(401).json({ message: '해당 이메일은 등록되지 않았습니다.' });
    } else {
      const user_id = findPwData[0].user_id; // 첫 번째 사용자만 고려
      if (user_id !== findLoginPw_id) {
        res.status(401).json({ message: '입력된 ID가 잘못 되었습니다.' });
      } else {
        const founded_pw = findPwData[0].user_pw;
        res.status(200).json({ founded_pw });
      }
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' });
  } finally {
    await client.close();
  }
});

router.post('/emailCertification', async (req, res) => {
  const { signup_email, signup_id, signup_pw } = req.body;

  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");
    const emailQuery = {
      email: signup_email
    };
    const certificationData = await collection.findOne(emailQuery);

    if (!certificationData) {
      const idQuery = {
        user_id: signup_id
      };
      const duplicationData = await collection.findOne(idQuery);
      if (!duplicationData){
        const newMember = {
          email: signup_email,
          user_id: signup_id,
          user_pw: signup_pw,
          isVerified: false,
        };

        const result = await collection.insertOne(newMember);
        console.log('Inserted document with ID:', result.insertedId);

        const transporter = nodemailer.createTransport({
          service: 'Gmail', // 이메일 서비스 제공자 설정
          auth: {
            user: 'sslee3680035@gmail.com', // 이메일 발신자 이메일 주소
            pass: 'ndnf vopf nmwj ylxa', // 이메일 발신자 비밀번호
          },
        });

        const baseURL = process.env.BASE_URL || "http://localhost:3000";
        const mailOptions = {
          from: 'sslee3680035@gmail.com', // 이메일 발신자 주소
          to: signup_email, // 이메일 수신자 주소
          subject: '회원 가입 확인 이메일', // 이메일 제목
          html: `
          <p>회원 가입을 완료하려면 다음 링크를 클릭하세요:</p>
          <a href="${baseURL}/message?email=${signup_email}">이메일 확인 링크</a>
          `,
        };

        await transporter.sendMail(mailOptions, (error, info) => {
          if (error) {
            console.error('이메일 전송 실패:', error);
            res.status(500).json({message: '이메일 전송 실패'});
          } else {
            console.log('이메일 전송 성공:', info.response);
            res.status(200).json({message: '이메일 전송 성공'});
          }
        });
      } else {
        res.status(200).json({ message: '중복되는 아이디 입니다.' });
      }
    } else {
      res.status(200).json({ message: '이미 가입된 이메일 입니다.' });
    }
  }
    catch (error) {
    console.error("Error:", error);
    res.status(500).json({ message: '서버 오류' });
  } finally {
    // 연결 해제
    await client.close();
  }
});

router.post('/verifiedComplete', async (req , res) => {
  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { verificationEmail } = req.body;

    const query = {
      email: verificationEmail,
    };
    const updateQuery = {
      $set: { isVerified: true }
    };

    const verifiData = await collection.updateOne(query, updateQuery);

    if (verifiData.matchedCount !== 1) {
      res.status(401).json({ message: '회원 가입한 이메일이 아닙니다.' });
    } else {
      res.status(200).json({ message: '회원 가입 완료' });
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' });
  } finally {
    await client.close();
  }
});

router.post('/changePassword', async (req, res) => {
  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const {
      present_id,
      present_pw,
      change_pw,
    } = req.body;

    const query = {
      user_id: present_id,
      user_pw: present_pw,
    };

    const userData = await collection.findOne(query);

    if (!userData) {
      res.status(401).json({ message: '계정 정보가 존재하지 않습니다' });
    } else {
      const updateQuery = {
        $set: { user_pw: change_pw }
      };
      const changeData = await collection.updateOne(query, updateQuery);
      if (changeData.matchedCount !== 1) {
        res.status(401).json({ message: '변경에 실패했습니다.' });
      } else {
        res.status(200).json({ message: '비밀번호 변경 완료' });
      }
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' });
  } finally {
    await client.close();
  }
});

module.exports = router;
