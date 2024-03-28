const initialState = "#FF0000";

const changeColor = (state=initialState, action) => {
    if(action.type === "Blue")
    return action.payLoad;
    else if(action.type === "Green")
    return action.payLoad;
    else
    return state;
}

export default changeColor;