let initialState="#FF0000";

const changeColor=(state=initialState, action)=> {
    if(state!=="#00FF00" && action.type==="Green")
    return action.payLoad;
    else if(state!=="#0000FF" && action.type==="Blue")
    return action.payLoad;
    else
    return state;
}

export default changeColor;