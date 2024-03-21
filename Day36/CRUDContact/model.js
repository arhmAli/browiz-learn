const mongoose=require('mongoose')
const Schema=mongoose.Schema;

const contactSchema=new Schema({
    name:{
        type:String
    },
    phoneNumber:{
        type:String
    }
})
const Contact=mongoose.model('contact',contactSchema)
module.exports=Contact;