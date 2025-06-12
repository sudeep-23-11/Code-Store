//Object
let obj1={
    web: "javascript",
    Web: function() {return this.web},

    set setWeb(web) {this.web=web},
    get getWeb() {return this.web},
}
console.log(obj1["web"], obj1.Web());
obj1.setWeb="typescript";
console.log(obj1.getWeb);

obj1["iq"]=100;
obj1.Iq=function(n) {return this.iq*n}
console.log(obj1["iq"], obj1.Iq(5));
let {web, iq} = obj1;
console.log(web, iq);
console.log(Object.values(obj1));
delete obj1["iq"];
delete obj1.Iq;

function obj2(web)
{
    this.web=web,
    this.Web=function() {return this.web}
};
obj2.prototype["iq"]=100;
obj2.prototype.Iq=function(n) {return this.iq*n}
let t=new obj2("javascript");
console.log(t.Web(), t.Iq(5));

let obj3={
    Print: function(x, y) {return this.app+" "+this.web+" "+x+" "+y}
};
let obj4={
    app: "kotlin",
    web: "javascript"
};
console.log(obj3.Print.call(obj4, 2, 3));
console.log(obj3.Print.apply(obj4, [2, 3]));
let b=obj3.Print.bind(obj4, 2, 3)
console.log(b());