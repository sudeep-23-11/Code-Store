export const increment=(num)=> {
    return {
        type: "Increment",
        payLoad: num
    }
}

export const decrement=(num)=> {
    return {
        type: "Decrement",
        payLoad: num
    }
}