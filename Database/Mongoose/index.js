const mongoose = require('mongoose');

mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.durvk9p.mongodb.net/demo');

schema = new mongoose.Schema({
    name: String,
    iq: Number
});
Data = mongoose.model('data', schema);

d1 = new Data({name: 'aarush', iq: 90});
d2 = new Data({name: 'aryan', iq: 60});
d3 = new Data({name: 'shivam', iq: -30});

let func = async () => {
    await Data.insertMany([d1, d2, d3]);
    await Data.updateMany({iq: {$lt: 0}}, {$set: {iq: 30}, $currentDate: {lastModified: true}});
    await Data.deleteMany({iq: {$eq: 60}});

    const res = await Data.find({});
    console.log(res);

    await mongoose.connection.close();
}
func();

// npm install mongoose