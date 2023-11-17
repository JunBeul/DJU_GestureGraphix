var express = require('express');
var router = express.Router();

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

const nodemailer = require('nodemailer');
const transporter = nodemailer.createTransport({
  service: 'Gmail', // 이메일 서비스 제공자 설정
  auth: {
    user: 'sslee3680035@gmail.com', // 이메일 발신자 이메일 주소
    pass: process.env.EMAIL_PASS || 'ndnf vopf nmwj ylxa', // 이메일 발신자 비밀번호
  },
});
const baseURL = process.env.BASE_URL || "http://localhost:3000";

const crypto = require('crypto');
const secretKey = process.env.SECRET_KEY || 'your_secret_key'; // Replace with your secret key

// Function to encrypt user data
function encryptData(data) {
  const cipher = crypto.createCipher('aes-256-cbc', secretKey);
  let encrypted = cipher.update(data, 'utf-8', 'hex');
  encrypted += cipher.final('hex');
  return encrypted;
}

function decryptData(encryptedData) {
  const decipher = crypto.createDecipher("aes-256-cbc", secretKey);
  let decrypted = decipher.update(encryptedData, "hex", "utf-8");
  decrypted += decipher.final("utf-8");
  return decrypted;
}

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
        const userData = { email: loginData.email, id: login_id };
        res.status(200).json({ message: '로그인 성공', user: userData });
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

        const signUpEmailData = { email: signup_email };

        const encryptedSUEData = encryptData(JSON.stringify(signUpEmailData));

        const mailOptions = {
          from: 'sslee3680035@gmail.com', // 이메일 발신자 주소
          to: signup_email, // 이메일 수신자 주소
          subject: 'Gesture Graphix', // 이메일 제목
          html: `
          <p>Gesture Graphix 회원 가입을 완료하려면 다음 링크를 클릭하세요:</p>
          <a href="${baseURL}/emailCertify?data=${encodeURIComponent(encryptedSUEData)}">이메일 확인 링크</a>
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

router.post('/decryptEmail', async (req , res) => {
  const { encryptedData } = req.body;
  if (!encryptedData) {
    return res.status(400).send('Invalid data.');
  }

  try {
    // Decrypt user data from the link
    const decryptedData = decryptData(decodeURIComponent(encryptedData));
    const data = JSON.parse(decryptedData);

    // Pass the decrypted user data to the Vue.js application
    res.status(200).json({email: data.email});
  } catch (error) {
    console.error('Error decrypting user data:', error);
    res.status(500).send('An error occurred while decrypting user data.');
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
      console.log(verificationEmail);
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

    const findIdData = await collection.findOne(query);

    if (!findIdData) {
      res.status(401).json({ message: '등록된 ID가 존재하지 않습니다.' });
    } else {
      const findIdMail = {
        from: 'sslee3680035@gmail.com', // 이메일 발신자 주소
        to: findLoginId_email, // 이메일 수신자 주소
        subject: 'Gesture Graphix', // 이메일 제목
        html: `
          <p>해당 이메일로 가입된 GesturGraphix의 아이디는 ${findIdData.user_id} 입니다.</p>
          `,
      };

      await transporter.sendMail(findIdMail, (error, info) => {
        if (error) {
          console.error('이메일 전송 실패:', error);
          res.status(500).json({message: '이메일 전송 실패'});
        } else {
          console.log('이메일 전송 성공:', info.response);
          res.status(200).json({message: '입력한 이메일로 이메일을 전송했습니다.'});
        }
      });
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

    const { findLoginPw_email, findLoginPw_id, findLoginPw_pw} = req.body;

    const query = {
      email: findLoginPw_email,
    };

    const findPwData = await collection.findOne(query);

    if (!findPwData) {
      res.status(401).json({ message: '해당 이메일은 등록되지 않았습니다.' });
    } else {
      const user_id = findPwData.user_id;
      const user_pw = findPwData.user_pw;
      if (user_id !== findLoginPw_id) {
        res.status(401).json({ message: '입력된 ID가 잘못 되었습니다.' });
      } else if (findLoginPw_email && findLoginPw_id && findLoginPw_pw && user_pw !== findLoginPw_pw) {
        res.status(401).json({ message: '입력된 PW가 잘못 되었습니다.' });
      } else {
        /*이메일로 chagepw페이지 전송*/
        const findPwEmailData = { email: findLoginPw_email };
        const encryptedFPEData = encryptData(JSON.stringify(findPwEmailData));

        const changePwMail = {
          from: 'sslee3680035@gmail.com', // 이메일 발신자 주소
          to: findLoginPw_email, // 이메일 수신자 주소
          subject: 'Gesture Graphix', // 이메일 제목
          html: `
          <p>해당 이메일로 가입된 Gesture Graphix의 비밀번호를 변경하려면 다음 링크를 클릭하세요:</p>
          <a href="${baseURL}/ChangePw?data=${encryptedFPEData}">비밀번호 변경 링크</a>
          `,
        };

        await transporter.sendMail(changePwMail, (error, info) => {
          if (error) {
            console.error('이메일 전송 실패:', error);
            res.status(500).json({message: '이메일 전송 실패'});
          } else {
            console.log('이메일 전송 성공:', info.response);
            res.status(200).json({message: '입력한 이메일로 보낸 링크를 확인해주세요.'});
          }
        });
      }
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
      changPwEmail,
      change_pw,
    } = req.body;

    const query = {
      email: changPwEmail,
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
router.post('/removeUser', async (req, res) => {
  try {
    // MongoDB 클라이언트 연결
    await client.connect();

    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { removeUser_email, removeUser_id, removeUser_pw} = req.body;

    const query = {
      email: removeUser_email,
    };

    const removeUserData = await collection.findOne(query);

    if (!removeUserData) {
      res.status(401).json({ message: '해당 이메일은 등록되지 않았습니다.' });
    } else {
      const user_id = removeUserData.user_id;
      const user_pw = removeUserData.user_pw;
      if (user_id !== removeUser_id) {
        res.status(401).json({ message: '입력된 ID가 잘못 되었습니다.' });
      } else if (user_pw !== removeUser_pw) {
        res.status(401).json({ message: '입력된 PW가 잘못 되었습니다.' });
      } else {
        const result = await collection.deleteOne(query);

        if (result.deletedCount === 1) {
          res.status(200).json({ message: '회원 탈퇴가 완료되었습니다.' });
        } else {
          res.status(404).json({ message: '회원 탈퇴에 실패했습니다.' });
        }
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
