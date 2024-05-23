import mongoose from 'mongoose';
import nodemailer from 'nodemailer';

mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.durvk9p.mongodb.net/demo');
const schema = new mongoose.Schema({
    email: String,
    password: String
});
const model = mongoose.model('data', schema);

const transporter = nodemailer.createTransport({
    host: 'smtp.gmail.com',
    port: 587,
    secure: false,
    auth: {
        user: 'sudeep@gmail.com',
        pass: 'sudeep'
    }
});

export {model, transporter};