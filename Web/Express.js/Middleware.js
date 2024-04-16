//Middleware
const express = require('express');
const path = require('path');

const port = 3000;
const app = express();

let middleware = (req, res, next) => {
    console.log('Middleware fuction');
    next();
}

app.use(middleware);
app.use(express.static(path.join(__dirname, 'public')));

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})