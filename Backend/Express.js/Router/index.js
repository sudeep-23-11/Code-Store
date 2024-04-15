//Router
const express = require('express');
const path = require('path');
const router = require(path.join(__dirname, 'routes.js'));

const port = 3000;
const app = express();
app.use('/router', router);

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})