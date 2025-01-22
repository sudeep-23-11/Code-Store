//Database
import mysql from 'mysql2/promise';
import mongoose from 'mongoose'; 

let mysql_func = async () => {
    const connection = await mysql.createConnection({
        host: 'localhost',
        user: 'root',
        password: 'sudeep23mysq',
        database: 'demo'
    });
    await connection.execute('create table data (name varchar(255), iq varchar(255))');
    await connection.execute('insert into data (name, iq) values (?, ?)', ['aarush', 90]);
    await connection.execute('insert into data (name, iq) values (?, ?)', ['aryan', 60]);
    await connection.execute('insert into data (name, iq) values (?, ?)', ['shivam', -30]);
    await connection.execute('update data set iq=? where iq<?', [30, 0]);
    await connection.execute('delete from data where iq=?', [60]);
    const [res] = await connection.execute('select * from data');
    for (let i=0;i<res.length;i++)
        console.log(res[i]);
    await connection.end();
}
mysql_func();

let mongodb_func = async () => {
    await mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.jbr7ldh.mongodb.net/demo');
    let schema = new mongoose.Schema({
        name: {
            type: String,
            default: "person",
            trim: true
        },
        iq: {
            type: Number,
            max: 100,
            min: -100,
            required: true,
            unique: true,
            index: true
        },
        category: {
            type: String,
            enum: ["baniya", "jaat", "yadav"]
        }
    });
    let model = mongoose.model('data', schema);
    let d1 = new model({name: '  aarush  ', iq: 90, category: "baniya"});
    let d2 = new model({name: 'aryan', iq: 60, category: "jaat"});
    let d3 = new model({iq: -30, category: "yadav"});
    await model.insertMany([d1, d2, d3]);
    await model.updateMany({iq: {$lt: 0}}, {$set: {iq: 30}});
    await model.deleteMany({iq: {$eq: 60}});
    const res = await model.find();
    for (let i=0;i<res.length;i++)
        console.log(res[i]);
    await mongoose.connection.close();
}
mongodb_func();

// npm install mysql2
// npm install mongoose