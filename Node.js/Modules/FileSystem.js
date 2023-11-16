//FileSystemModule
import fs from 'fs';

const d = 'Hello World ';

// fs.writeFile('./a.txt', d, 'utf8', (err) => {})
// fs.appendFile('./a.txt', d, 'utf8', (err) => {})
// fs.rename('./a.txt', './b.txt', (err) => {})
// fs.copyFile('./b.txt', './c.txt', (err) => {})
// fs.readFile('./c.txt', 'utf8', (err, data) => {
//     console.log(data);
// })
// fs.rm('./b.txt', (err) => {})
// fs.mkdir('./abc', (err) => {})
// fs.rmdir('./abc', (err) => {})

fs.writeFileSync('./a.txt', d, 'utf8')
fs.appendFileSync('./a.txt', d, 'utf8')
fs.renameSync('./a.txt', './b.txt')
fs.copyFileSync('./b.txt', './c.txt')
console.log(fs.readFileSync('./c.txt', 'utf8'))
fs.rmSync('./b.txt')
fs.mkdirSync('./abc')
fs.rmdirSync('./abc')