//Object
let obj1={
    app: "kotlin",
    web: "java",
    
    set setWeb(web) {this.web=web},
    get getWeb() {return this.web},
    App: function() {return this.app}
};
obj1.iq=100;
console.log(obj1.app, obj1["iq"]);
delete obj1.iq;

obj1.setWeb="javascript";
console.log(obj1.getWeb);
obj1.Web=function(n) {return this.web+" "+n}
console.log(obj1.App(), obj1.Web(5));
console.log(Object.values(obj1));

function obj2(app, web)
{
    this.app=app,
    this.web=web,
    this.App=function() {return this.app}
};
obj2.prototype.iq=100;
obj2.prototype.Web=function(n) {return this.web+" "+n}
t=new obj2("kotlin", "javascript");
console.log(t.App(), t.Web(5));

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