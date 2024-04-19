//General
import {html, css} from './ImportExport.js';
import js from './ImportExport.js';
import * as web from './ImportExport.js';

var x=2**3;
console.log(x, typeof(x));

let y=5;
const z="5";
console.log(y==z, y===z, y!=z, y!==z);

console.log(html, css);
js();
console.log(web.html, web.css);