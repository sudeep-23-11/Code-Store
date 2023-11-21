* .insertOne({doc}) ---------------------------------------------- insert one doccument
* .insertMany([{doc1}, {doc2}]) ---------------------------------- insert many doccuments
*
*
* .updateOne({exp}, {$set: {f: nv}, $currentDate: {lastModified: true}}) -- update first document that matches exp with f: nv
* .updateMany({exp}, {$set: {f: nv}, $currentDate: {lastModified: true}}) - update all documents that matches exp with f: nv
* .findOneAndUpdate({exp}, {$set: {f: nv}, $currentDate: {lastModified: true}}, {returnNewDocument: false}) - update first document that matches exp with f: nv and return pre updated document
    * true ------------------------------------------------------- post
*
*
* .replaceOne({exp}, {doc}) -------------------------------------- replace first document that matches exp with doc
* .findOneAndReplace({exp}, {doc}, {returnNewDocument: false}) --- replace first document that matches exp with doc and return pre replaced document
    * true ------------------------------------------------------- post
*
*
* .deleteOne({exp}) ---------------------------------------------- delete first document that matches exp
* .deleteMany({exp}) --------------------------------------------- delete all documents that match exp
* .deleteMany({}) ------------------------------------------------ delete all documents
* .findOneAndDelete({exp}) --------------------------------------- delete first document that matches exp and return deleted document
*
*
* show dbs ------------------------------------------------------- list databases
* use db --------------------------------------------------------- start using database db
*
*
* .renameCollection(nco) ----------------------------------------- rename collection co to nco
* .drop() -------------------------------------------------------- delete collection co
* .distinct(f) --------------------------------------------------- find unique values of field f