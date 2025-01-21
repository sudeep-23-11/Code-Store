#Database
import mysql.connector as msc
import pymongo as pm

connection = msc.connect(
    host='localhost',
    user='root',
    password='sudeep23mysq',
    database='demo'
)
cursor = connection.cursor()
cursor.execute('create table data (name varchar(255), iq varchar(255))')
cursor.execute('insert into data (name, iq) values (%s, %s)', ('aarush', '90'))
cursor.execute('insert into data (name, iq) values (%s, %s)', ('aryan', '60'))
cursor.execute('insert into data (name, iq) values (%s, %s)', ('shivam', '-30'))
cursor.execute('update data set iq=%s where iq<%s', ('30', '0'))
cursor.execute('delete from data where iq=%s', ('60',))
cursor.execute('select * from data')
res = cursor.fetchall()
for i in res :
    print(i)
connection.commit()
cursor.close()
connection.close()

client = pm.MongoClient('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.jbr7ldh.mongodb.net')
db = client['demo']
co = db['data']
d1 = {'name': 'aarush', 'iq': 90}
d2 = {'name': 'aryan', 'iq': 60}
d3 = {'name': 'shivam', 'iq': -30}
co.insert_many([d1, d2, d3])
co.update_many({'iq': {'$lt': 0}}, {'$set': {'iq': 30}})
co.delete_many({'iq': {'$eq': 60}})
res = co.find({})
for i in res :
    print(i)
client.close()

# pip install mysql-connector-python
# pip install pymongo