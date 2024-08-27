function obterTextoBase(){
    const input = document.getElementById('texto-base');
    const texto = input.value;
    const textoBase = texto.split("");
    for (let i = 0; i <= textoBase.length; i++){
        if (textoBase[i] == "a"){
            textoBase[i] = "ai"
        }
        if (textoBase[i] == "e"){
            textoBase[i] = "enter"
        }
        if (textoBase[i] == "i"){
            textoBase[i] = "imes"
        }
        if (textoBase[i] == "o"){
            textoBase[i] = "ober"
        }
        if (textoBase[i] == "u"){
            textoBase[i] = "ufat"
        }
    }
    let textoConvertido = textoBase.join("");
    document.getElementById("principal__texto-resposta__texto").innerHTML = textoConvertido;
}

function descrip(){
    
}