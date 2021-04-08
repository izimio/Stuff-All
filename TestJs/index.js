let all = document.getElementById("bd");

let diva = document.createElement("div");
let h2 = document.createElement("h2");
h2.textContent = "Coucou les amis";
let p = document.createElement("p");
let p2 = document.createElement("p");
p.textContent = "Je vous aimes fort";
p2.textContent = "x";

let all2 = document.getElementById("ht");

let ha = document.createElement("span");

let trigger = 0;
diva.appendChild(h2);
diva.appendChild(p);
diva.appendChild(p2);
diva.classList.add("huhu");
ha.classList.add("haha");

all2.addEventListener("mouseover", (e) => {
    let left2 = e.clientX;
    let top2 = e.clientY;
        ha.setAttribute("style",`top: ${top2}px; left: ${left2}px;`);
        all.appendChild(ha);
})


p2.addEventListener("click", (e) => {
    e.stopPropagation();
    diva.setAttribute("style",`top: ${top}px; left: ${left}px; display : none`);
})