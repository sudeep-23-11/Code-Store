//LocalStorage
const x = {
    a: 123.456,
    b: "abcdef"
};

localStorage.setItem('secret_key', JSON.stringify(x));

const y = JSON.parse(localStorage.getItem('secret_key'));
console.log(y);

localStorage.removeItem('secret_key');
// localStorage.clear();