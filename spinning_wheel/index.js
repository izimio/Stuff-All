let wheel = document.getElementById("wheel");
let button = document.getElementById("but");
let input = document.getElementById("tour");
function entierAleatoire(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

button.addEventListener("click", (e) => {

    let deg = entierAleatoire(360, 3000);
    let time = deg / 360;
    wheel.setAttribute("style", `    transition: ${time}s;
    transform: rotate(${deg}deg);`);

    setTimeout(function() {
        input.value = ""
        time = time.toFixed(0);
        input.setAttribute("style", `display: inline`);
        console.log(time)
        input.addEventListener("change", (e) =>{
            console.log(time)
            if(input.value == time )
            {   
                alert("Bravo tu as trouvé le bon nombre de tour ")
                                document.location.href = "https://pornhub.com";
            }
            else{
                alert("PERDU")
                document.location.href = "http://www.rrrgggbbb.com/";
            }
        })
    },time * 1000)
})
