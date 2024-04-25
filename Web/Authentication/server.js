import express from 'express';
import signup from './SignUp.js';
import login from './LogIn.js';
import {change_password_middleware, change_password} from './ChangePassword.js';
import {reset_password, reset_email} from './ResetPassword.js'

const port = 3000;
const app = express();

app.use(express.json());
app.use('/changepassword', change_password_middleware);

app.post('/signup', signup);
app.post('/login', login);
app.patch('/changepassword', change_password);
app.post('/resetpassword', reset_password);
app.patch('/resetemail/:token', reset_email);

app.listen(port, () => {
    console.log(`Server is listening on ${port}`);
})

// npm install bcrypt jsonwebtoken nodemailer