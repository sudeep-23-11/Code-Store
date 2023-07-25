//Object
let name1={
    first:"ABC",
    last:"DEF",
    First:function(n)
    {
        return n+" "+this.first;
    }
};
name1.Last=function()
{
    return this.last;
}
console.log(name1.First(1), name1.Last());
let name2={first:"GHI", last:"JKL"};
let name3={first:"MNO", last:"PQR"};
console.log(name1.First.call(name2, 2), name1.Last.call(name2));
console.log(name1.First.apply(name3, [3]), name1.Last.apply(name3));
function name4(first, last)
{
    this.first=first,
    this.last=last,
    this.First=function()
    {
        return this.n+" "+this.first;
    }
};
name4.prototype.n=0;
name4.prototype.Last=function()
{
    return this.last;
}
name2=new name4("ABC", "DEF");
name3=new name4("GHI", "JKL");
console.log(name2.First(), name2.Last());
console.log(name3.First(), name3.Last());