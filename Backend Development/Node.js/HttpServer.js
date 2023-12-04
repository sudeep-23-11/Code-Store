//HttpServer
import http from 'http';
import fs from 'fs';

const port = process.env.PORT || 3000;

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
        const data = fs.readFileSync('./public/index.html');
        res.end(data);
    }
    else if(req.url === '/json')
    {
        res.statusCode = 200;
        res.setHeader('Content-Type', 'application/json');
        res.end(JSON.stringify({name: 'sudeep'}));
    }
    else
    res.statusCode = 404;
})

server.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
})