//SignUp
import bcrypt from 'bcrypt';
import jsonwebtoken from 'jsonwebtoken';
import {model} from './config.js';

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
        const user = new model({email: email, password: hash_password});
        await model.insertMany([user]);
        const saved_user = await model.findOne({email: {$eq: email}});
        const token = await jsonwebtoken.sign({id: saved_user._id}, 'secret_key', {expiresIn: '1h'});
        res.json({status: 'Success', message: 'You have successfully signed up', token: token});
    }
}

export default signup;