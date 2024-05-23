//ResetPassword
import bcrypt from 'bcrypt';
import jsonwebtoken from 'jsonwebtoken';
import {model, transporter} from './config.js';

const reset_password = async (req, res) => {
    const {email} = req.body;
    const find_user = await model.findOne({email: {$eq: email}});

    if(!email)
    res.json({status: 'Failure', message: 'Email is required'});
    else if(!find_user)
    res.json({status: 'Failure', message: 'Email does not exist'});

    else
    {
        const token = await jsonwebtoken.sign({id: find_user._id}, 'secret_key', {expiresIn: '1h'});
        const link = `http://localhost:3000/resetemail/${token}`
        await transporter.sendMail({
            from: '"Sudeep Kumar Srivastava" <sudeep@gmail.com>',
            to: 'aarush@gmail.com, aryan@gmail.com',
            subject: 'Password Reset',
            html: `<h1>${link}</h1>`
        });
        res.json({status: 'Success', message: 'Email successfully sent'});
    }
}

const reset_email = async (req, res) => {
    const {password, confirm_password} = req.body;
    const {slug_token} = req.params;

    if(!password || !confirm_password)
    res.json({status: 'Failure', message: 'All fields required'});
    else if(password !== confirm_password)
    res.json({status: 'Failure', message: 'Password and Confirm Password should be same'});

    else
    {
        const {id} = await jsonwebtoken.verify(slug_token, 'secret_key');
        const hash_password = await bcrypt.hash(password, 10);
        await model.findByIdAndUpdate(id, {$set: {password: hash_password}});
        res.json({status: 'Success', message: 'Password successfully updated'});
    }
}

export {reset_password, reset_email};