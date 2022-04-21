let initialState=0;

const changeCount=(state=initialState, action)=> {
    if(action.type==="Increment")
    return state+action.payLoad;
    else if(action.type==="Decrement")
    return state-action.payLoad;
    else
    return state;
}

export default changeCount;