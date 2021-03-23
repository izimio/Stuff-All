let rect1 = document.getElementById("1");
let rect2 = document.getElementById("2");
let rect3 = document.getElementById("3");
let rect4 = document.getElementById("4");
let rect5 = document.getElementById("5");
let rect6 = document.getElementById("6");
let rect7 = document.getElementById("7");
let rect8 = document.getElementById("8");
let rect9 = document.getElementById("9");
let rect10 = document.getElementById("10");
let rect11 = document.getElementById("11");
let rect12 = document.getElementById("12");
let rect13 = document.getElementById("13");
let rect14 = document.getElementById("14");
let rect15 = document.getElementById("15");
// BARRIERE

let bar1 = document.getElementById("bar1");
let bar2 = document.getElementById("bar2");
let bar3 = document.getElementById("bar3");
// BARRIERE 

//BUTTON
let but1 = document.getElementById("but1");
let but2 = document.getElementById("but2");
let but3 = document.getElementById("but3");
let hide1 = document.getElementById("hide1");
let hide2 = document.getElementById("hide2");
//BUTTON

//DANGER 
let danger1 = document.getElementById("d1");
let danger2 = document.getElementById("d2");
let danger3 = document.getElementById("d3");
let danger4 = document.getElementById("d4");
let danger5 = document.getElementById("d5");
let danger6 = document.getElementById("d6");
let dangerC = document.getElementById("dc");
let dTop;
let dLeft;
// DANGER

// FUNCTIONS
function entierAleatoire(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}
// FUNCTIONS

// LOAD
setInterval(function () {
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger1.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger2.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dangerC.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger3.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger4.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger5.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
    dTop = entierAleatoire(1, 99);
    dLeft = entierAleatoire(1, 99);
    danger6.setAttribute("style", `top: ${dTop}%; left: ${dLeft}%`);
}, 1000);

let i = 40;
let down = 0;
let trigger = 0;
let triggerC = 0;
// LOAD

setInterval(function () {
    i += 5;
    rect10.setAttribute("style", `top: ${i}%`);
    if (i == 100)
        i = 40;
}, 60);


rect13.addEventListener("click", (e) => {
    trigger++;
    if (trigger == 1) {
        var y = setInterval(function () {
            rect13.setAttribute("style", `top: ${down}px`);
            down++;
            if (down == 500) {
                let t = 0;
                clearInterval(y);
                var x = setInterval(function () {
                    rect13.setAttribute("style", `top: ${down}px; left: ${t}px`);
                    t++;
                    if (t >= 800) {
                        clearInterval(x);
                        var h = setInterval(function () {
                            rect13.setAttribute("style", `top: ${down}px; left: ${t}px`);
                            down--;
                            t++;
                            console.log(down)
                            if (down <= 400)
                                rect15.setAttribute("style", `top: 60%; left: 50%; background: goldenrod`);
                            if (down <= 0) {
                                clearInterval(h);
                                down = 450;
                                t = 800;
                                var e = setInterval(function () {
                                    rect13.setAttribute("style", `top: ${down}px; left: ${t}px`);
                                    down++;
                                    t--;
                                    if (down >= 540) {
                                        triggerC = 1;
                                        clearInterval(e);
                                        dangerC.classList.add("dangerC")
                                        var u = setInterval(function () {
                                            rect13.setAttribute("style", `top: ${down}px; left: ${t}px`);
                                            t--;
                                        }, 5);
                                    }
                                }, 100);
                            }
                        }, 10);
                    }
                }, 1);
            }
        }, 1);
    }
})

but1
but1.addEventListener("click", (e) => {
    hide1.classList.remove("hide");
})

but2.addEventListener("click", (e) => {
    hide2.classList.remove("hide");
})

but3.addEventListener("click", (e) => {
    document.location.href = "http://ankana87.unblog.fr/noelcest-noel/case-13/#comment-7137";
})

rect15.addEventListener("click", (e) => {
    e.stopPropagation();
})

rect13.addEventListener("click", (e) => {
    e.stopPropagation();
})
rect1.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})
rect2.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})
rect3.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})
rect4.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect6.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect7.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect8.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect9.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect10.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

rect12.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

danger1.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

danger2.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

danger3.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

dangerC.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html";
})

// BARRIERE DESTROYER
rect5.addEventListener("mouseover", (e) => {
    bar1.setAttribute("style",`width: 0px`);
})

rect11.addEventListener("mouseover", (e) => {
    bar2.setAttribute("style",`width: 0px`);
})

rect14.addEventListener("mouseover", (e) => {
    bar3.setAttribute("style",`width: 0px`);
})

// BARRIERE DESTROYER

bar1.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html"
})

bar2.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html"
})

bar3.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html"
})

