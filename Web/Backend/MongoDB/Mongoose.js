//Mongoose
import mongoose from 'mongoose'; 

mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.durvk9p.mongodb.net/demo');

let schema = new mongoose.Schema({
    name: {
        type: String,
        default: "person",
        trim: true
    },
    id: {
        type: Number,
        max: 100,
        min: -100,
        required: true,
        unique: true,
        index: true
    },
    category: {
        type: String,
        enum: ["baniya", "jaat", "yadav"]
    }
});
let Data = mongoose.model('data', schema);

let d1 = new Data({name: '  aarush  ', id: 90, category: "baniya"});
let d2 = new Data({name: 'aryan', id: 60, category: "jaat"});
let d3 = new Data({id: -30, category: "yadav"});

let func = async () => {
    await Data.insertMany([d1, d2, d3]);
    await Data.updateMany({id: {$lt: 0}}, {$set: {id: 30}});
    await Data.deleteMany({id: {$eq: 60}});

    const res = await Data.find({});
    console.log(res);

    await mongoose.connection.close();
}
func();

// npm install mongoose