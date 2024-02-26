const express=require("express")
const mongoose=require("mongoose")
const cors=require("cors")
const bodyParser=require("body-parser")
require('dotenv').config();

const port=5000;
const app=express();
app.use(bodyParser.json())
app.use(cors())
mongoose.connect(process.env.MONGO_URI,{
    useNewUrlParser:true,
    useUnifiedTopology:true
})
.then(()=>console.log("Conected to Db"))
.catch((e)=>console.log(e))
const studentSchema=new mongoose.Schema({
    name:String,
    regNum:String,
    gpa:Number
})
const laptopSchema=new mongoose.Schema({
    name:String,
    price:Number
})
const student=mongoose.model("Student",studentSchema,"students")
const laptop=mongoose.model("laptop",laptopSchema,"items")
app.get('/api/student',async(req,res)=>{
    try{
        const info=await student.find()
        res.json(info)
        console.log(info)
    }
    catch(e){
        console.log(e)
        res.status(500).json({e:"Server error"})
    }
})
// app.put('/api/student',async(req,res)=>{
//     try{
//     const data=req.body
//     console.log(data)
//     res.json({message:"Data sent to Db",data})
//     }
//     catch(e){
//         res.status(500).json({e:"Server erro"})
//     }
// })
app.post('/api/student', async (req, res) => {
    try {
        const data = await student.create(req.body);
        console.log(data); 
        res.json({ message: "Student data saved successfully", data });
    } catch (error) {
        res.status(500).json({ error: 'Server error' });
    }
});
app.get('/api/items',async(req,res)=>{
        try{
            const item=await laptop.find()
            res.json(item)
            console.log(item)
        }
        catch(e){
            console.log(e)
            res.status(500).json({e:"Server Error"})
        }
})
app.post('/api/items',async(req,res)=>{
    try{
    const data=await laptop.create(req.body)
    console.log(data)
    res.json({message:"Data sent to Db",data})
    }
    catch(e){
        res.status(500).json({e:"Server erro"})
    }
})

app.listen(port,()=>{
    console.log(`Server running at local host ${port}`)
})