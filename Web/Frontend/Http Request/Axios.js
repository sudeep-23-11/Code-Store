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

axios.get('https://example.com/resource')
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

axios.post('https://example.com/resource', data)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

axios.put('https://example.com/resource/id', replacedData)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

axios.patch('https://example.com/resource/id', updatedData)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

axios.delete('https://example.com/resource/id')
    .then(res => {
        
    })
    .catch(err => {
        console.error(err);
    })

// npm install axios