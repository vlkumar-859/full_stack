

export default function CoreConcept(props){
    return (
            <li>
                {/* console.log({props}); */}
                <img src= {props.image} alt="" />
                <h3>{props.title}</h3>
                <p>{props.description}</p>
            </li>
    );
}