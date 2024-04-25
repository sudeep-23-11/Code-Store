//ChangePassword
import bcrypt from 'bcrypt';
import jsonwebtoken from 'jsonwebtoken';
import {model} from './config.js';

const change_password_middleware = async (req, res, next) => {
    const authorization = req.get('Authorization');

    if(authorization && authorization.startsWith('Bearer'))
    {
        const token = authorization.split(' ')[1];
        const {id} = await jsonwebtoken.verify(token, 'secret_key');
        req.user = await model.findById(id);
    }

    next();
}

const change_password = async (req, res) => {
    if(!req.user)
    res.json({status: 'Failure', message: 'You are not logged in'});

    else
    {
        const {password, confirm_password} = req.body;

        if(!password || !confirm_password)
        res.json({status: 'Failure', message: 'All fields required'});
        else if(password !== confirm_password)
        res.json({status: 'Failure', message: 'Password and Confirm Password should be same'});

        else
        {
            const hash_password = await bcrypt.hash(password, 10);
            await model.findByIdAndUpdate(req.user._id, {$set: {password: hash_password}});
            res.json({status: 'Success', message: 'Password successfully updated'});
        }
    }
}

export {change_password_middleware, change_password};