import {combineReducers} from "redux";

import changeCount from "./count.js";
import changeColor from "./color.js";

const rootReducer = combineReducers({
    count: changeCount,
    color: changeColor
})

export default rootReducer;