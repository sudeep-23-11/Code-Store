#MySQL
import mysql.connector as msc

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

# pip install mysql-connector-python