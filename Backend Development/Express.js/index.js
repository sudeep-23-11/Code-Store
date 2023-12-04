const express = require('express');
const path = require('path');
const bodyParser = require('body-parser');

const port = process.env.PORT || 3000;
const app = express();
app.use(bodyParser.json());

app.get('/', (req, res) => {
    res.end('<h1>Home Page</h1>');
})
app.get('/about', (req, res) => {
    console.log(req.ip);
    console.log(req.protocol);
    console.log(req.hostname);
    console.log(req.originalUrl);
    console.log(req.path);
    console.log(req.baseUrl);
    console.log(req.body);
    
    res.sendFile(path.join(__dirname, 'public/index.html'));
})
app.get('/json', (req, res) => {
    res.status(200);
    res.set('Content-Type', 'application/json');
    res.append('Content-Length', '100');
    console.log(res.get('Content-Length'));

    res.json({name: 'sudeep'});
})
app.get('/:slug', (req, res) => {
    // res.redirect('/');

    const slug = req.params.slug;
    res.send(`<h1>${slug}</h1>`);
})

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})

// npm install express