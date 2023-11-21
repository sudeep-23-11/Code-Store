const axios = require('axios');

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

//GetRequest
axios.get('https://example.com/resource')
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

//PostRequest
axios.post('https://example.com/resource', data)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

//PutRequest
axios.put('https://example.com/resource/id', replacedData)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

//PatchRequest
axios.patch('https://example.com/resource/id', updatedData)
    .then(res => {
        console.log(res.data);
    })
    .catch(err => {
        console.error(err);
    })

//DeleteRequest
axios.delete('https://example.com/resource/id')
    .then(res => {
        
    })
    .catch(err => {
        console.error(err);
    })

// npm install axios