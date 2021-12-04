document.getElementById("botao").addEventListener("click", validacao)

function validacao(){
    if (document.getElementById("nome").value != ""  && document.getElementById("email").value != "" && document.getElementById("telefone")){
        alert("Prontinho! Você receberá as novidades por email!")
    } else{
        alert("Por favor, tenha certeza de que preencheu todos os campos!")
    }
}
