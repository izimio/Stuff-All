let cercle = document.getElementById("rond");
let point = document.getElementById("circle");

function entierAleatoire(min, max)
{
 return Math.floor(Math.random() * (max - min + 1)) + min;
}


cercle.addEventListener("mouseover", function(event) {
    let top = entierAleatoire(5,95);
    let left = entierAleatoire(5,95);
    cercle.setAttribute("style",`top: ${top}%; left: ${left}%`);

})

point.addEventListener("mouseover", function(event) {
    event.stopPropagation()
    alert("a")
    document.location.href="gg.html";
})