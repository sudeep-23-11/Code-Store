#Database
import pymysql
import psycopg2
import pymongo

def sql() :
    conn = pymysql.connect(
        host = 'localhost',
        port = 3306,
        database = 'demo',
        user = 'root',
        password = '1234'
    )
    # conn = psycopg2.connect(
    #     host = 'localhost',
    #     port = 5432,
    #     database = 'demo',
    #     user = 'postgres',
    #     password = '1234'
    # )
    cur = conn.cursor()
    cur.execute('create table data (name varchar(255), iq varchar(255))')
    data = [
        ('aarush', '90'),
        ('aryan', '60'),
        ('shivam', '-30')
    ]
    cur.executemany('insert into data (name, iq) values (%s, %s)', data)
    cur.execute('update data set iq=%s where iq<%s', ('30', '0'))
    cur.execute('delete from data where iq=%s', ('60',))
    cur.execute('select * from data')
    print(cur.fetchall())
    # print(cur.fetchone())
    # print(cur.fetchmany(10))
    conn.commit()
    cur.close()
    conn.close()
sql()

def no_sql() :
    conn = pymongo.MongoClient('mongodb+srv://sudeep:sudeep@cluster0.vcuxp.mongodb.net')
    db = conn['demo']
    co = db['data']
    d1 = {'name': 'aarush', 'iq': 90}
    d2 = {'name': 'aryan', 'iq': 60}
    d3 = {'name': 'shivam', 'iq': -30}
    co.insert_many([d1, d2, d3])
    co.update_many({'iq': {'$lt': 0}}, {'$set': {'iq': 30}})
    co.delete_many({'iq': {'$eq': 60}})
    print(list(co.find()))
    conn.close()
no_sql()

# pip install pymysql
# pip install psycopg2
# pip install pymongo