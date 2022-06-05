//Objects
let details={
    name:"Sudeep",
    skill:"AppDev",
    get skl() {
        return this.skill;
    },
    set skl(skill) {
        this.skill=skill;
    }
};
details.age=19
console.log(details.name, details["age"]);
delete details["age"];
console.log(details.skl);
details.skl="WebDev";
for(let i of Object.values(details))
console.log(i);