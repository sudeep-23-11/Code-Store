const x = {
    a: null,
    b: true,
    c: 123.456,
    d: "abcdef",
    e: [123, 456],
    f: {g: "abc", h: "def"}
};

const y = JSON.stringify(x);
console.log(y);

const z = JSON.parse(y);
console.log(z);