//UrlModule
import url from 'url';

const u = new URL('https://username:password@example.com:3000/path/path?search=entity#hash');

console.log(u.href);
console.log(u.origin);
console.log(u.protocol);
console.log(u.host);
console.log(u.hostname);
console.log(u.port);

console.log(u.pathname);
console.log(u.search);
console.log(u.username);
console.log(u.password);
console.log(u.hash);