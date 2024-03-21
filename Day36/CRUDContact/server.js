const express=require('express');
const bodyParser=require('body-parser')
const mongoose=require('mongoose')
const Contact = require('./model')

require('dotenv').config();
const port=5000;
const app=express();
app.use(bodyParser.json());
mongoose.connect(process.env.MONGO_URI,{
    useNewUrlParser: true,
    useUnifiedTopology: true
})
.then(()=>console.log("Connected to DB"))
.catch((e)=>console.log(e));

app.get('/contact/:name',async(req,res)=>{
    const name=req.params.name;
    try{
        const contact=await Contact.findOne({name})
        if(!contact){
            return res.status(404).json({message:"NO user"})
        }
        res.json(contact)
    }
    catch(e){
        console.error(e);
        res.status(500).json({message:"Internal error"})
    }
})
app.post('/contact',async(req,res)=>{
    const {name,phoneNumber}=req.body
    try{
        const newCont=new Contact({name,phoneNumber})
        await newCont.save()
        res.status(201).json(newCont);
    }
    catch(e){
        console.error(e);
        res.status(500).json({message:"Internal error"})
    }
})
app.put('/contact/:name',async(req,res)=>{
    const name=req.params.name;
    const {phoneNumber}=req.body;
    try{
        const val=await Contact.findOneAndUpdate({name},{phoneNumber},{new:true})
        if (!val) {
            return res.status(404).json({ message: 'Contact not found' });
    }
    res.json(val);
    }
    catch (error) {
        console.error('Error updating contact:', error);
        res.status(500).json({ message: 'Internal server error' });
      }
    }
)
app.get('/contact',async(req,res)=>{
    try{
        const cont=await Contact.find();
        res.json(cont);
    }
    catch (error) {
        console.error('Error fetching contacts:', error);
        res.status(500).json({ message: 'Internal server error' });
      }
})
app.listen(port,()=>{
    console.log("Server started")
})