const mongoose = require ('mongoose');
const Schema =mongoose.Schema;

const todoSchema=new Schema({
    value:String,
    priority:String
})

const Todo=mongoose.model("Todo",todoSchema)
module.exports=Todo