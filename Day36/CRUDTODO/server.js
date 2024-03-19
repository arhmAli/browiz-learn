const express=require('express')
const mongoose=require('mongoose')
const bodyParser=require('body-parser')
const Todo=require('./model')
const port=5000
const app=express()
require('dotenv').config()
app.use(bodyParser.json());

mongoose.connect(process.env.MONGO_URI,{
useUnifiedTopology:true,
useNewUrlParser:true
})
.then(()=>console.log("Connected to db"))
.catch((e)=>console.log(e))
app.post('/todo/:item',async(req,res)=>{
    const {item}=req.params
    try{
        const data=await Todo.create({value:item})
        res.json(data)
    }
    catch(e){
        console.error(e)
        res.status(500).json({message:"Internal error"})
    }

})
app.get('/todo',async(req,res)=>{
    try{
        const item=await Todo.find();
        res.json(item)
    }
    catch(e){
        console.log(e)
        res.status(500).json({message:"Internal Error"})
    }
})
app.put('/todo/:item',async(req,res)=>{
const {item}=req.params
const  {val}=req.body
try{
    if(!val){
        // console.log(req.body.val)
        return res.status(400).json({ message: "New value is required in the request body" });
    }
    const data = await Todo.findOneAndUpdate(
        {value:item},
        {value:val},
        {new:true}
    )
    if(!data){
        console.log("There is no data under this")
    }
    res.json(data)
}
catch(e){
    console.log("Error")
    res.status(500).json({message:"Internal Error"})
}
})
app.delete('/todo/:item',async(req,res)=>{
    const {item}=req.params
    try{
        const data=await Todo.findOneAndDelete(
            {value:item}
        )
        if(!data){
            console.log("No data")
        }
        res.json(data)
    }
    catch(e){
        console.log("Error")
        res.status(500).json({message:"Internal Error"})
    
    }

})
app.listen(port,()=>{
console.log("Server Started"
)
})