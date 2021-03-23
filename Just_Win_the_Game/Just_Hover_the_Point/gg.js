let s = document.getElementById("gg");
let k = document.getElementById("bd");

let color = [
    "brown",
    "green",
    "red",
    "blue",
    "yellow",
    "black",
    "purple",
    "orange",
    "cyan",
    "AliceBlue",
    "AntiqueWhite",
    "Aqua",
    "Aquamarine",
    "Azure",
    "Beige",
    "BlueViolet",
    "Chartreuse",
    "Crimson",
    "CornflowerBlue",
    "Cornsilk",
    "Chocolate",
    "DarkGreen",
    "DarkMagenta",
    "DarkOliveGreen"
]

function entierAleatoire(min, max)
{
 return Math.floor(Math.random() * (max - min + 1)) + min;
}

setInterval(function() {
    let t = entierAleatoire(1,10);
    let i = entierAleatoire(0,23);
    s.setAttribute("style",`color: ${color[i]}; font-size: ${t}em`);
    k.setAttribute("style",`background: ${color[i - 1]}`);
    if(t == i)
    {
        let op = 0;
        var x = setInterval(function() {
            let t = entierAleatoire(1,10);
            let i = entierAleatoire(0,23);
            s.setAttribute("style",`color: ${color[i]}; font-size: ${t}em`);
            k.setAttribute("style",`background: ${color[i - 1]}`);
            if(t == i)
            {
                op++;
                if(op == 3)
                    clearInterval(x);
            }
        }, 100);
    }
}, 800);