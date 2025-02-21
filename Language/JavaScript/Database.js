//Database
import knex from 'knex';
import mongoose from 'mongoose'; 

let sql = async () => {
    const conn = await knex({
        client: 'mysql2',
        connection: {
            host: 'localhost',
            port: 3306,
            database: 'demo',
            user: 'root',
            password: '1234'
        }
    });
    // const conn = await knex({
    //     client: 'pg',
    //     connection: {
    //         host: 'localhost',
    //         port: 5432,
    //         database: 'demo',
    //         user: 'postgres',
    //         password: '1234'
    //     }
    // });
    await conn.raw('create table data (name varchar(255), iq varchar(255))');
    await conn.raw('insert into data (name, iq) values (?, ?)', ['aarush', 90]);
    await conn.raw('insert into data (name, iq) values (?, ?)', ['aryan', 60]);
    await conn.raw('insert into data (name, iq) values (?, ?)', ['shivam', -30]);
    await conn.raw('update data set iq=? where iq<?', [30, 0]);
    await conn.raw('delete from data where iq=?', [60]);
    const res = await conn.raw('select * from data');
    console.log(res[0]);
    // console.log(res.rows);
    await conn.destroy();
}
sql();

let no_sql = async () => {
    await mongoose.connect('mongodb+srv://sudeep:sudeep@cluster0.vcuxp.mongodb.net/demo');
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
    console.log(res);
    await mongoose.connection.close();
}
no_sql();

// npm install knex
// npm install mysql2
// npm install pg
// npm install mongoose