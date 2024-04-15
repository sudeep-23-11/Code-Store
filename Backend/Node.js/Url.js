//Url
const url = new URL('https://username:password@example.com:3000/path/path?search=entity#hash');

console.log(url.href);
console.log(url.origin);
console.log(url.protocol);
console.log(url.host);
console.log(url.hostname);
console.log(url.port);

console.log(url.pathname);
console.log(url.search);
console.log(url.username);
console.log(url.password);
console.log(url.hash);