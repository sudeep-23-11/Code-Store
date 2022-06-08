import "./App.css";
import C1 from "./components/C1.jsx";
import C2 from "./components/C2.jsx";
import C3 from "./components/C3.jsx";
import C6 from "./components/C6.jsx";

function App() {

  let click=()=> {
    let i=document.getElementById("A");
    i.innerHTML="Vue";
  }
  
  return (
    <>
      <C1 l1="React" l2="Angular" lf={click} />
      <C2 />
      <C3 />
      <C6 />
    </>
  );
}

export default App;