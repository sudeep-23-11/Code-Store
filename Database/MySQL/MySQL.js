//MySQL
import mysql from 'mysql2/promise';

let func = async () => {
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
func();

// npm install mysql2