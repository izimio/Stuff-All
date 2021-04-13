let hours = document.getElementById("hours")
let minute = document.getElementById("minute")
let secondes = document.getElementById("secondes")
let milisecondes = document.getElementById("milisecondes")
let but = document.getElementById("but")
let but2 = document.getElementById("but2")
let save = document.getElementById("saves")

let div = document.createElement("div");
let p = document.createElement("p");

div.classList.add("save")


let trig = 0;
let valueHours = 0
let valueminute = 59
let valuesecondes = 50

p.textContent = ` ${valueHours} heures | ${valueminute} minutes ${valuesecondes} secondes `

div.appendChild(p);

hours.textContent = valueHours
minute.textContent = valueminute
secondes.textContent = valuesecondes

but.addEventListener("click", (e) => {
    console.log(trig)
    trig++;
    if (trig % 2 == 1) {
        var y = setInterval(function () {
            valuesecondes++;
            hours.textContent = valueHours
            minute.textContent = valueminute
            secondes.textContent = valuesecondes
            if (valuesecondes >= 60) {
                valuesecondes = 0;
                valueminute++;
                if (valueminute >= 60) {
                    valueminute = 0;
                    valueHours++;
                }
            }
            if (trig % 2 == 0) {
                clearInterval(y);
            }
        }, 1000);
    }
})


but2.addEventListener("click", (e) => {
    let div = document.createElement("div");
    let p = document.createElement("p");

    div.classList.add("save")
    p.textContent = ` ${valueHours} heures | ${valueminute} minutes ${valuesecondes} secondes `

    div.appendChild(p);
    save.appendChild(div)
})