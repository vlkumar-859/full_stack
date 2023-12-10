console.log("hello world..!");

document.getElementById("myForm").addEventListener("submit", function(event){
    event.preventDefault();

    var name = document.getElementById("name").value;
    var mail =  document.getElementById("mail").value;

    console.log(`
        name : ${name}
        mail : ${mail}
    `)
});

var arr = ['a','b','c','d'];

for(var x in arr)
{
    console.log(x);
};

console.log(this);

var obj = {
    firstname : "hello"
};
var func = function(){
    return this;
}
console.log(func());

console.log(document.getElementById("a").innerText);

document.getElementById("a").addEventListener("click", () => {
    return document.getElementById("c").innerHTML = "clicke";    
})   









































































































