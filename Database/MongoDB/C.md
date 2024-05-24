* model.exists({exp}) -------------------------------------------- find _id of first document that matches exp
* model.findById(id) --------------------------------------------- find document with _id=id
* model.findByIdAndUpdate(id, {$set: {f: nv}}) ------------------- update document with _id=id with f: nv
* model.findByIdAndDelete(id) ------------------------------------ delete document with _id=id
*
*
* mongoose.connection.db.admin().listDatabases() ----------------- list databases
* mongoose.connection.db.dropDatabase() -------------------------- delete database db
* mongoose.connection.db.databaseName ---------------------------- show database name
* mongoose.connection.db.listCollections().toArray() ------------- list collections
* mongoose.connection.db.createCollection(co) -------------------- create collection co
* mongoose.connection.db.renameCollection(co, nco) --------------- rename collection co to nco
* mongoose.connection.db.dropCollection(co) ---------------------- delete collection co
* model.collection.collectionName -------------------------------- show collection name
* mongoose.modelNames() ------------------------------------------ list models
* mongoose.deleteModel(mo) --------------------------------------- delete model mo
*
*
* co.insert_many().inserted_ids ---------------------------------- list _ids of inserted documents
* co.update_many().modified_count -------------------------------- count all modified documents
* co.delete_many().deleted_count --------------------------------- count all deleted documents
*
*
* client.list_database_names() ----------------------------------- list databases
* client.drop_database(db) --------------------------------------- delete database db
* db.name -------------------------------------------------------- show database name
* db.list_collection_names() ------------------------------------- list collections
* db.create_collection(co) --------------------------------------- create collection co
* db.drop_collection(co) ----------------------------------------- delete collection co
* co.name -------------------------------------------------------- show collection name
* co.full_name --------------------------------------------------- show database.collection name
* co.rename(nco) ------------------------------------------------- rename collection co to nco
* co.drop() ------------------------------------------------------ delete collection co