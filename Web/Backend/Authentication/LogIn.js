//LogIn
import bcrypt from 'bcrypt';
import jsonwebtoken from 'jsonwebtoken';
import {model} from './config.js';

const login = async (req, res) => {
    const {email, password} = req.body;
    const find_user = await model.findOne({email: {$eq: email}});

    if(!email || !password)
    res.json({status: 'Failure', message: 'All fields required'});
    else if(!find_user)
    res.json({status: 'Failure', message: 'Email does not exist'});

    else
    {
        const check_password = await bcrypt.compare(password, find_user.password);

        if(!check_password)
        res.json({status: 'Failure', message: 'Incorrect password'});
        else
        {
            const token = await jsonwebtoken.sign({id: find_user._id}, 'secret_key', {expiresIn: '1h'});
            res.json({status: 'Success', message: 'You have successfully logged in', token: token});
        }
    }
}

export default login;