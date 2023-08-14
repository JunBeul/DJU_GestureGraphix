var express = require('express');
var router = express.Router();

//db 연결 코드
const { MongoClient, ServerApiVersion } = require('mongodb');
const uri = "mongodb+srv://mongnoj892:ScRC4W4GLaoyAsm1@cluster0.c593zzk.mongodb.net/?retryWrites=true&w=majority";
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
      const filteredData = await collection.find(query).toArray();
      console.log("result:");
      console.log(filteredData);
      if(filteredData[0] === undefined){
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

  // 간단한 로그인 처리
  /*if (login_id === 'test' && login_pw === 'test') {
    res.status(200).json({ message: '로그인 성공' });
  } else {
    res.status(401).json({ message: '로그인 실패' });
  }*/
});

module.exports = router;
