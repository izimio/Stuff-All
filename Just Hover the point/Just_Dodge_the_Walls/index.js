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

let i = 40;
let down = 0;
let trigger = 0;
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
                    t+= 3;
                    if (t >= 800) {
                        clearInterval(x);
                        var h = setInterval(function () {
                            rect13.setAttribute("style", `top: ${down}px; left: ${t}px`);
                            down--;
                            t++;
                            console.log(down)
                            if(down <= 400)
                                rect15.setAttribute("style", `top: 60%; left: 50%; background: goldenrod`);
                        }, 10);
                    }
                }, 1);
            }
        }, 1);
    }
})

rect15.addEventListener("click", (e) => {

})

/*
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

rect5.addEventListener("mouseover", (e) => {
    bar1.setAttribute("style",`width: 0px`);
})

bar2.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html"
})

bar1.addEventListener("mouseover", (e) => {
    document.location.href = "./zappatos.html"
})

*/