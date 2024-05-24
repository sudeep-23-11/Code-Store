//Mongoose
import mongoose from 'mongoose'; 

let func = async () => {
    await mongoose.connect('mongodb+srv://sudeep-23-11:sudeep23modb@cluster0.jbr7ldh.mongodb.net/demo');

    let schema = new mongoose.Schema({
        name: {
            type: String,
            default: "person",
            trim: true
        },
        iq: {
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

    let d1 = new model({name: '  aarush  ', iq: 90, category: "baniya"});
    let d2 = new model({name: 'aryan', iq: 60, category: "jaat"});
    let d3 = new model({iq: -30, category: "yadav"});

    await model.insertMany([d1, d2, d3]);
    await model.updateMany({iq: {$lt: 0}}, {$set: {iq: 30}});
    await model.deleteMany({iq: {$eq: 60}});
    
    const res = await model.find({});
    for (let i=0;i<res.length;i++)
        console.log(res[i]);
    
    await mongoose.connection.close();
}
func();

// npm install mongoose