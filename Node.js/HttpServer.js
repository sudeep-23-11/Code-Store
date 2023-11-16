//HttpServer
import https from 'http';
import fs from 'fs';

const port = process.env.PORT || 3000;

const server = https.createServer((req, res) => {
    res.writeHead(200, {'Content-Type': 'text/html'});
    
    if(req.url === '/')
    {
        const data = fs.readFileSync('./home.html');
        res.end(data);
    }
    else if(req.url === '/about')
    {
        const data = fs.readFileSync('./about.html');
        res.end(data);
    }
    else
    res.end('<h1>Page Not Found</h1>');
})

server.listen(port, () => {
    console.log(`Server is listening on port ${port}`);
});