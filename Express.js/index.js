const express = require('express');
const path = require('path');

const port = process.env.PORT || 3000;
const app = express();

app.get('/', (req, res) => {
    res.status(200);
    res.send('<h1>Home Page</h1>');
})
app.get('/about', (req, res) => {
    res.sendFile(path.join(__dirname, 'public/index.html'));
})
app.get('/json', (req, res) => {
    res.json({'hello': 'world'});
})
app.get('/:slug', (req, res) => {
    const slug = req.params.slug;
    res.send(`${slug}`);
})

app.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})

// npm install express