# JavaScript
* mongoose.connection.D.admin().listDatabases() ----- list
* mongoose.connection.D.dropDatabase() -------------- delete
* mongoose.connection.D.databaseName ---------------- name
* mongoose.connection.D.listCollections().toArray() - list
* mongoose.connection.D.createCollection(C) --------- create
* mongoose.connection.D.dropCollection(C) ----------- delete
* mongoose.connection.D.renameCollection(C, C') ----- rename to C'
* model.collection.collectionName ------------------- name
* mongoose.modelNames() ----------------------------- list
* mongoose.deleteModel(M) --------------------------- delete
* model.exists({E}) --------------------------------- read id of first that match E
* model.findById(I) --------------------------------- read all for id=I
* model.findByIdAndUpdate(I, {$set: {X: x, Y: y}}) -- update all with X=x, Y=y for id=I
* model.findByIdAndDelete(I) ------------------------ delete all for id=I

# Python
* client.list_database_names() ---------------------- list
* client.drop_database(D) --------------------------- delete
* D.name -------------------------------------------- name
* D.list_collection_names() ------------------------- list
* D.create_collection(C) ---------------------------- create
* C.drop() ------------------------------------------ delete
* C.rename(C') -------------------------------------- rename to C'
* C.name -------------------------------------------- name
* C.insert_many().inserted_ids ---------------------- list inserted ids
* C.update_many().modified_count -------------------- count all modified
* C.delete_many().deleted_count --------------------- count all deleted