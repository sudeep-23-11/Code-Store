//Path
import path from 'path';

const p = 'C:\\mydir\\myfile.js';

console.log(path.basename(p));
console.log(path.dirname(p));
console.log(path.extname(p));
console.log(path.format(path.parse(p)));

console.log(path.isAbsolute('mydir\\myfile.js'));
console.log(path.join('C:', 'mydir', 'myfile.js'));
console.log(path.normalize('C:\\\\mydir\\\\myfile.js'));