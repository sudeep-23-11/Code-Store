//Server
import http from 'http';
import fs from 'fs';

const port = 3000;

const server = http.createServer((req, res) => {
    if(req.url === '/')
    {
        res.statusCode = 200;
        res.setHeader('Content-Type', 'text/html');
        res.end('<h1>Home Page</h1>');
    }
    else if(req.url === '/about')
    {
        res.statusCode = 200;
        res.setHeader('Content-Type', 'text/html');
        const data = fs.readFileSync('../public/about-page.html');
        res.end(data);
    }
    else if(req.url === '/json')
    {
        res.statusCode = 200;
        res.setHeader('Content-Type', 'application/json');
        res.end(JSON.stringify({name: 'JSON'}));
    }
    else
    res.statusCode = 404;
})

server.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})

// npm init
// npm install
// npm list
// npm outdated
// npm update
// npm install -g nodemon
// nodemon index.js