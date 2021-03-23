let horiz = document.getElementById("horiz");
let verti = document.getElementById("verti");
let body = document.getElementById("air");
let timmer = document.getElementById("timmer");
let value = document.getElementById("value");
let but = document.getElementById("button");
let record = document.getElementById("record");

record.textContent += "0"
let highscore = 0;
let toucheC = 0;
let toucheP = 0;
let toucheM = 0;
let time = 10;
let cercle = document.getElementById("rond");
let point = document.getElementById("circle");

function entierAleatoire(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}


but.addEventListener("click", (e) => {
    let time = 10;
    timmer.textContent = time;
    toucheC = 0;
    toucheP = 0;
    toucheM = 0;
    let t = setInterval(function () {
        time--;
        timmer.textContent = time;
        if (time <= 0) {
            clearInterval(t)
            alert("nombre total de tir : " + (toucheC + toucheP + toucheM) + " fois\nImprecis :" + toucheC + "\nprecis :" + toucheP + "\nraté :" + toucheM)
            if (toucheP > highscore)
            {
                highscore = toucheP
                record.textContent = " Meilleur score :" + toucheP ;
            }
        }
    }, 1000);
})


setInterval(function () {
    let top = entierAleatoire(1, 90);
    let left = entierAleatoire(1, 90);
    cercle.setAttribute("style", `top: ${top}%; left: ${left}%`);
}, 1000);


cercle.addEventListener("click", (e) => {
    toucheC++;
    console.log("a")
})

point.addEventListener("click", (e) => {
    toucheP++;
})

body.addEventListener("click", (e) => {
    toucheM++;
})