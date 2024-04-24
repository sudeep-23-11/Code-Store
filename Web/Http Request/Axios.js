//Axios
import axios from 'axios';

const data = {
    x: 1,
    y: "a"
};
const replacedData = {
    x: 2,
    y: "b"
};
const updatedData = {
    y: "c"
};

axios.get('http://localhost:3000/api')
    .then(res => {
        console.log(res.data);
    })

axios.post('http://localhost:3000/api', data)
    .then(res => {
        console.log(res.data);
    })

axios.put('http://localhost:3000/api/69', replacedData)
    .then(res => {
        console.log(res.data);
    })

axios.patch('http://localhost:3000/api/69', updatedData)
    .then(res => {
        console.log(res.data);
    })

axios.delete('http://localhost:3000/api/69')
    .then(res => {
        console.error(res.data);
    })

// npm install axios