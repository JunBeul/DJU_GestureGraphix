var express = require('express');
var router = express.Router();

//db 연결 코드
const { MongoClient, ServerApiVersion } = require('mongodb');
const uri = "보안상 삭제";
// Create a MongoClient with a MongoClientOptions object to set the Stable API version
const client = new MongoClient(uri, {
  serverApi: {
    version: ServerApiVersion.v1,
    strict: true,
    deprecationErrors: true,
  }
});
//db 연결 코드 끝

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.post('/login', (req, res) => {
  const { login_id, login_pw } = req.body;

  async function run() {
    try {
      // Connect the client to the server	(optional starting in v4.7)
      await client.connect();
      const database = client.db("gesture_graphix");
      const collection = database.collection("gg_member");
      // Send a ping to confirm a successful connection
      /*await client.db("admin").command({ ping: 1 });
      console.log("Pinged your deployment. You successfully connected to MongoDB!");*/

      const query = {
        user_id: login_id,
        user_pw: login_pw
      };
      const loginData = await collection.find(query).toArray();
      console.log("result:");
      console.log(loginData);
      if(loginData[0] === undefined){
        res.status(401).json({ message: '로그인 실패' });
      } else{
        res.status(200).json({ message: '로그인 성공' });
      }
    } catch (err) {
      console.error("Error:", err);
    } finally {
      // Ensures that the client will close when you finish/error
      await client.close();
    }
  }
  run().catch(console.dir);

});

router.post('/find/loginId', async (req, res) => {
  try {
    await client.connect();
    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { findLoginId_email } = req.body; // Extract email from request body

    const query = {
      email: findLoginId_email,
    };

    const findIdData = await collection.find(query).toArray();
    console.log("result:");
    console.log(findIdData);

    if (findIdData.length === 0) { // Check if data exists using array length
      res.status(401).json({ message: '등록된 ID가 존재하지 않습니다.' });
    } else {
      res.status(200).json({ founded_id: findIdData.map(doc => doc.user_id) });
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' }); // Handle server errors
  } finally {
    await client.close();
  }
});

router.post('/find/loginPw', async (req, res) => {
  try {
    await client.connect();
    const database = client.db("gesture_graphix");
    const collection = database.collection("gg_member");

    const { findLoginPw_email, findLoginPw_id } = req.body; // Extract email from request body

    const query = {
      email: findLoginPw_email,
    };

    const findPwData = await collection.find(query).toArray();
    console.log("result:");
    console.log(findPwData);

    if (findPwData.length === 0) { // Check if data exists using array length
      res.status(401).json({ message: '해당 이메일은 등록되지 않았습니다.' });
    } else if(findPwData.map(doc => doc.user_id) != findLoginPw_id){
      res.status(401).json({ message: '입력된 ID가 잘못 되었습니다.' });
    } else {
      res.status(200).json({ founded_pw: findPwData.map(doc => doc.user_pw) });
    }
  } catch (err) {
    console.error("Error:", err);
    res.status(500).json({ message: '서버 오류가 발생했습니다.' }); // Handle server errors
  } finally {
    await client.close();
  }
});

module.exports = router;
