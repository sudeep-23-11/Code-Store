import {Provider} from "react-redux";

import Count from "./components/Count.jsx";
import Color from "./components/Color.jsx";
import ReducerHook from "./components/ReducerHook.jsx";
import store from "./store.js";

function App() {
    return (
        <>
            <Provider store={store}>
                <Count /><hr />
                <Color /><hr />
            </Provider>
            <ReducerHook />
        </>
    );
}

export default App;

// npm install redux
// npm install react-redux
// npm install @reduxjs/toolkit