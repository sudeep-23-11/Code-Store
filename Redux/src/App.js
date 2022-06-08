import {Provider} from "react-redux";

import "./App.css";
import C1 from "./components/C1.jsx";
import C2 from "./components/C2.jsx";
import C3 from "./components/C3.jsx";
import store from "./store.js";

function App() {
  return (
    <>
      <Provider store={store}>
        <C1 />
        <C2 />
      </Provider>
      <C3 />
    </>
  );
}

export default App;