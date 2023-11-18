import FunctionalComponent from "./components/FunctionalComponent.jsx";
import ClassComponent from "./components/ClassComponent.jsx";
import RouterDOM from "./components/RouterDOM.jsx";
import LifecycleMethods from "./components/LifecycleMethods.jsx";
import LifecycleHooks from "./components/LifecycleHooks.jsx";

function App() {

    let rfc = () => {
        let i = document.getElementById('a');
        i.innerHTML = 'css';
    }
    let rcc = () => {
        let i = document.getElementById('d');
        i.innerHTML = 'css';
    }

    return (
        <>
            <FunctionalComponent var={'html'} func={rfc} /><hr />
            <ClassComponent var={'html'} func={rcc} /><hr />
            <RouterDOM /><hr />
            <LifecycleMethods /><hr />
            <LifecycleHooks />
        </>
    );
}

export default App;

// npx create-react-app my-app
// npm start