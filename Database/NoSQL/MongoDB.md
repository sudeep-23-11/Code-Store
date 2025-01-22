# Database D
* show dbs --------------------------------- list
* use D ------------------------------------ create and connect
* D.dropDatabase() ------------------------- delete


# Collection C
* show collections ------------------------- list
* D.createCollection(C) -------------------- create
* D.C.drop() ------------------------------- delete
* D.C.renameCollection(C') ----------------- rename to C'
* D.C.distinct(X) -------------------------- distinct values of X
* D.C.countDocuments({E}) ------------------ count all that match E


# Document D
* .insertOne({D}) -------------------------- insert one
* .insertMany([{D1}, {D2}]) ---------------- insert many
* .updateOne({E}, {$set: {X: x, Y: y}}) ---- update first with X=x, Y=y that match E
* .updateMany({E}, {$set: {X: x, Y: y}}) --- update all with X=x, Y=y that match E
* .replaceOne({E}, {D'}) ------------------- replace first with D' that match E
* .deleteOne({E}) -------------------------- delete first that match E
* .deleteMany({E}) ------------------------- delete all that match E
* .deleteMany() ---------------------------- delete all
* .findOne({E}) ---------------------------- read first that match E
* .find({E}) ------------------------------- read all that match E
    * {$not: {E}} -------------------------- that do not match E
    * {$and: [{E1}, {E2}]} ----------------- that match both E1 and E2
    * {$or: [{E1}, {E2}]} ------------------ that match either E1 or E2
    * {$nor: [{E1}, {E2}]} ----------------- that match neither E1 nor E2
    * {X: {$eq: x}} ------------------------ X=x
    * {X: {$ne: x}} ------------------------ X!=x
    * {X: {$gt: x}} ------------------------ X>x
    * {X: {$gte: x}} ----------------------- X>=x
    * {X: {$lt: x}} ------------------------ X<x
    * {X: {$lte: x}} ----------------------- X<=x
    * {X: {$exists: false}} ---------------- X is null
    * {X: {$exists: true}} ----------------- X is not null
    * {X: {$in: [x1, x2]}} ----------------- X is x1, x2
    * {X: {$nin: [x1, x2]}} ---------------- X is not x1, x2
    * {X: {$type: [dx1, dx2]}} ------------- datatype of X is dx1, dx2
* .find() ---------------------------------- read all
*
*
* .findOneAndUpdate({E}, {$set: {X: x, Y: y}}, {returnNewDocument: false}) - update first with X=x, Y=y that match E, return pre updated
    * {returnNewDocument: true} -------------------------------------------- return post updated
* .findOneAndReplace({E}, {D'}, {returnNewDocument: false}) ---------------- replace first with D' that match E, return pre replaced
    * {returnNewDocument: true} -------------------------------------------- return post replaced
* .findOneAndDelete({E}) --------------------------------------------------- delete first that match E, return deleted document
*
*
* .sort({X: 1}) ---------------------------- sort in ascending order according to X
* .sort({X: -1}) --------------------------- sort in descending order according to X
* .limit(N) -------------------------------- limit to N
* .skip(N) --------------------------------- skip first N