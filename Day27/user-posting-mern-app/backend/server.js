const express=require('express')
const mongoose=require('mongoose')
const bodyParser=require('body-parser')
const cors=require('cors')
const User=require('./model/User')
require('dotenv').config();
const port=3200
const app=express()
app.use(bodyParser.json())
app.use(cors())
mongoose.connect(process.env.MONGO_URI,{
    useNewUrlParser:true,
    useUnifiedTopology:true
})
.then(()=>console.log("Connected to db"))
.catch((e)=>console.log(e))
// const userSchema=new mongoose.Schema({
//     username:String,
//     password:String
// })
// const User=mongoose.model('User',userSchema,'users')
app.get('/',async(req,res)=>{
    try{
        const data=await User.find()
        res.send(data)
    }
    catch(e){
        res.send({message:"Error occured",e})
    }
})
app.get('/register',async(req,res)=>{
    try{
        const data=await User.find()
        res.send(data)
        console.log(data)
    }
    catch(e){
        res.send({message:"Error occured",e})
    }
})
app.post('/register',async(req,res)=>{
    try{
        const data=await User.create(req.body)
        res.send({message:"User registered",data})
    }
    catch(e){
        res.send({message:"Error occured",e})
    }
})
app.listen(port,()=>{
console.log(`Server started at ${port}`)
})