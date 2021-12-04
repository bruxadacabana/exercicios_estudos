var nome = alert("Qual o seu nome?");
function escreverNome(){
    nome.innerHTML="Seja bem-vinde, " + nome + "!!";
}
window.onload=escreverNome;