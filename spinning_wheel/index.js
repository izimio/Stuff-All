let wheel = document.getElementById("wheel");
let button = document.getElementById("but");
let input = document.getElementById("tour");
function entierAleatoire(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

button.addEventListener("click", (e) => {

    let deg = entierAleatoire(3600000, 3000999999);
    let time = deg / 360 - 40;
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
                                document.location.href = "https://www.google.com/search?q=blue+waffle+maladie&tbm=isch&ved=2ahUKEwiE1YTvvu_vAhUNNhoKHcivAoMQ2-cCegQIABAA&oq=blue+waffle+maladie&gs_lcp=CgNpbWcQA1DQGViUHWCuH2gAcAB4AIABAIgBAJIBAJgBAKABAaoBC2d3cy13aXotaW1nwAEB&sclient=img&ei=FGhvYIT7F43saMjfipgI&bih=1010&biw=2048&client=firefox-b-d&safe=strict#imgrc=y0on745EUOYzBM";
            }
            else{
                alert("PERDU")
                document.location.href = "http://www.rrrgggbbb.com/";
            }
        })
    },time * 1000)
})
