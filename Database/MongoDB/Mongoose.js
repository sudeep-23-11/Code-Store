//Mongoose
import mongoose from 'mongoose'; 

mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.jbr7ldh.mongodb.net/demo');

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
let model = mongoose.model('data', schema);

let d1 = new model({name: '  aarush  ', id: 90, category: "baniya"});
let d2 = new model({name: 'aryan', id: 60, category: "jaat"});
let d3 = new model({id: -30, category: "yadav"});

let func = async () => {
    await model.insertMany([d1, d2, d3]);
    await model.updateMany({id: {$lt: 0}}, {$set: {id: 30}});
    await model.deleteMany({id: {$eq: 60}});

    const res = await model.find({});
    console.log(res);

    await mongoose.connection.close();
}
func();

// npm install mongoose