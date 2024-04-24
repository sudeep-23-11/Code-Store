//Fetch
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

fetch('http://localhost:3000/api', {
    method: 'GET'
})
    .then(res => res.json())
    .then(data => {
        console.log(data);
    })

fetch('http://localhost:3000/api', {
    method: 'POST',
    headers: {
        'Content-Type': 'application/json',
    },
    body: JSON.stringify(data)
})
    .then(res => res.json())
    .then(data => {
        console.log(data);
    })

fetch('http://localhost:3000/api/69', {
    method: 'PUT',
    headers: {
        'Content-Type': 'application/json',
    },
    body: JSON.stringify(replacedData)
})
    .then(res => res.json())
    .then(data => {
        console.log(data);
    })

fetch('http://localhost:3000/api/69', {
    method: 'PATCH',
    headers: {
        'Content-Type': 'application/json',
    },
    body: JSON.stringify(updatedData)
})
    .then(res => res.json())
    .then(data => {
        console.log(data);
    })

fetch('http://localhost:3000/api/69', {
    method: 'DELETE'
})
    .then(res => res.json())
    .then(data => {
        console.log(data);
    })