import TabButton from "./components/TabButton";
import image from "./assets/react-core-concepts.png";
import CoreConcept from "./components/CoreConcept";
import { CORE_CONCEPTS, EXAMPLES } from "./data";
import { useState } from "react";

const comp = ["Fundamental", "Crucial", "Core"];

function desc(max){
    return Math.floor(Math.random()*max);
}

function Header(){
  let description = comp[desc(3)];
  return (<header>
  <img src={image} alt="Stylized atom" />
  <h1>React Essentials</h1>
  <p>
    {description} React concepts you will need for almost any app you are
    going to build!
  </p>
</header>)
}

function App() {

  const [val,setVal] = useState("Components");
  function handleClick(value){
    console.log("I am Clicked "+ value);
    setVal(value);
    console.log({val}+" "+EXAMPLES[{val}]);
    console.log({val});
  }

  return (
    <div>
      <Header />
 
      <main>
        <section id = "core-concepts">
          <ul>
            <CoreConcept  {...CORE_CONCEPTS[0]}>  </CoreConcept>
            <CoreConcept  {...CORE_CONCEPTS[1]}>  </CoreConcept>
            <CoreConcept  {...CORE_CONCEPTS[2]}>  </CoreConcept>
            <CoreConcept  {...CORE_CONCEPTS[3]}>  </CoreConcept>
          </ul>
          
         </section>
        <section id="examples">
          <menu>
            <TabButton onSelect = {() => handleClick('Components')}>Components</TabButton>
            <TabButton onSelect = {() => handleClick('JSX')}>JSX</TabButton>
            <TabButton onSelect = {() => handleClick('Props')}>Props</TabButton>
            <TabButton onSelect = {() => handleClick('State')}>State</TabButton>
          </menu>
          <p>{val}</p>
          console.log({val}+" "+EXAMPLES[{val}]);

        </section>
      </main>
    </div>
  );
}

export default App;
