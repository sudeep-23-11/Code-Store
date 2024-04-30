//SignUp
import bcrypt from 'bcrypt';
import jsonwebtoken from 'jsonwebtoken';
import {model, transporter} from './config.js';

const signup = async (req, res) => {
    const {email, password, confirm_password} = req.body;
    const find_user = await model.findOne({email: {$eq: email}});

    if(!email || !password || !confirm_password)
    res.json({status: 'Failure', message: 'All fields required'});
    else if(find_user)
    res.json({status: 'Failure', message: 'Email already exist'});
    else if(password !== confirm_password)
    res.json({status: 'Failure', message: 'Password and Confirm Password should be same'});

    else
    {
        const hash_password = await bcrypt.hash(password, 10);
        const token = await jsonwebtoken.sign({email: email, password: hash_password}, 'secret_key', {expiresIn: '1h'});
        const link = `http://localhost:3000/verifyemail/${token}`
        await transporter.sendMail({
            from: '"Sudeep Kumar Srivastava" <sudeep@gmail.com>',
            to: 'aarush@gmail.com, aryan@gmail.com',
            subject: 'Verify Email',
            text: `${link}`
        });
        res.json({status: 'Success', message: 'Email successfully sent'});
    }
}

const verify_email = async (req, res) => {
    const {slug_token} = req.params;
    const {email, password} = await jsonwebtoken.verify(slug_token, 'secret_key');
    const user = new model({email: email, password: password});
    await model.insertMany([user]);
    const saved_user = await model.findOne({email: {$eq: email}});
    const token = await jsonwebtoken.sign({id: saved_user._id}, 'secret_key', {expiresIn: '1h'});
    res.json({status: 'Success', message: 'You have successfully signed up', token: token});
}

export {signup, verify_email};