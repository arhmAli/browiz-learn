const express=require('express')
const mongoose=require('mongoose')
const bodyParser=require('body-parser')
const cors=require('cors')

const app=express()
const port=5000;
app.use(bodyParser.json())
app.use(cors())
// XN1JzAZDe6vvVgSS
mongoose.connect('mongodb+srv://admin:XN1JzAZDe6vvVgSS@cluster0.jefb8pb.mongodb.net/?retryWrites=true&w=majority&appName=Cluster0',{
    useNewURLParser:true,
    useUnifiedTopology:true
})
.then(()=>console.log("Connected to Db"))
.catch((e)=>console.log(e))

const itemSchema=new mongoose.Schema({
    name:{
        type:String,
        required:true
    },
    description:String,
    price:Number
});
const Item=mongoose.model("Item",itemSchema,"items")

app.get('/api/name',async(req,res)=>{
    try{
        const items=await Item.find();
        res.json(items)
        console.log(items)
    }
    catch(e){
        console.log(e)
        res.status(500).json({e:"server error"})
    }
})
app.post('/api/name', async (req, res) => {
    try {
      const newItem = await Item.create(req.body);
      res.json(newItem);
    } catch (error) {
      console.error('Error creating item:', error);
      res.status(500).json({ error: 'Server error' });
    }
  });
app.delete('/api/name/:id', async (req, res) => {
    try {
      await Item.findByIdAndDelete(req.params.id);
      res.json({ message: 'Item deleted successfully' });
    } catch (error) {
      console.error('Error deleting item:', error);
      res.status(500).json({ error: 'Server error' });
    }
});

app.listen(port,()=>{
    console.log(`Server running at port ${port}`)
})