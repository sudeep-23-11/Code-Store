import {combineReducers, createStore} from 'redux';

import changeCount from "./reducers/count.js";
import changeColor from "./reducers/color.js";

const rootReducer = combineReducers({
    count: changeCount,
    color: changeColor
})
const store = createStore(rootReducer);

export default store;