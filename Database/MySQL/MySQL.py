import mysql.connector as msc

cnx = msc.connect(user='root', password='sudeep23mysq', host='localhost', database='demo')
cursor = cnx.cursor()

cursor.execute('create table data (name varchar(255), iq varchar(255))')

cursor.execute('insert into data (name, iq) values (%s, %s)', ('Aarush', '90'))
cursor.execute('insert into data (name, iq) values (%s, %s)', ('Aryan', '60'))
cursor.execute('insert into data (name, iq) values (%s, %s)', ('Shivam', '-30'))

cursor.execute('update data set iq=%s where iq<%s', ('30', '0'))
cursor.execute('delete from data where iq=%s', ('60',))

cursor.execute('select * from data')
for name, iq in cursor :
    print(f"{name} {iq}")

cnx.commit()
cursor.close()
cnx.close()

# pip install mysql-connector-python