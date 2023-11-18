const increment = (num) => {
    return {
        type: "Increment",
        payLoad: num
    }
}

const decrement = (num) => {
    return {
        type: "Decrement",
        payLoad: num
    }
}

export {increment, decrement};