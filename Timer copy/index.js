let but = document.getElementById("but")
let tttt = document.getElementById("inputt")
let body = document.getElementById("bd")
let bar = document.getElementById("bar")

let num = 100;


var y = setInterval(function () {
    bar.setAttribute("style", `width: ${num}%;`);
    num -= 10;
    if(num < 0)
    {
        clearInterval(y);
    }
}, 1000);

tttt.addEventListener("input", function () {
    console.log(tttt.value)
});