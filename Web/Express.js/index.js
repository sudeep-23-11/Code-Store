const express = require('express');
const path = require('path');

const port = 3000;
const app = express();
app.use(express.json());

app.get('/api', (req, res) => {
    res.send('<h1>Get Request</h1>');
})
app.post('/api', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/index.html'));
})
app.put('/api/:slug', (req, res) => {
    res.json({name: 'Put Request'});
})
app.patch('/api/:slug', (req, res) => {
    console.log(req.ip);
    console.log(req.protocol);
    console.log(req.hostname);
    console.log(req.originalUrl);
    console.log(req.path);
    console.log(req.baseUrl);
    console.log(req.body);
    console.log(req.params.slug);
})
app.delete('/api/:slug', (req, res) => {
    res.status(200);
    res.set('Content-Type', 'application/json');
    res.append('Content-Length', '100');
    console.log(res.get('Content-Length'));
    // res.redirect('/');
})

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})

// npm install express