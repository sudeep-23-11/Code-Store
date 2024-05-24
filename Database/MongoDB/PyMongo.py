#PyMongo
import pymongo as pm

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

# pip install pymongo