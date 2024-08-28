alert("Bem vindo ao jogo do número secreto!");
let numMax = 5000;
let numSecreto = parseInt (Math.random() * numMax + 1);
let chute;
let tentativas = 1;

while(chute != numSecreto){
    chute = prompt(`Tente descobrir qual o número secreto! (está entre 1 e ${numMax})`);
    if (numSecreto == chute){
        break;
    } else {
        if(chute > numSecreto){
            alert(`O número secreto é menor que ${chute}`);
        } else {
            alert(`O numero secreto é maior do que ${chute}`);
        }
        tentativas++;
    }
}
let palavraTentativa = tentativas > 1 ? 'tentativas' : 'tentativa';
alert(`Parabéns, você conseguiu acertar o número secreto (${numSecreto}) com ${tentativas} ${palavraTentativa}!`);
/*
if (tentativas > 1){
    alert(`Parabéns, você conseguiu acertar o número secreto (${numSecreto}) com ${tentativas} tentativas!`);
} else {
    alert(`Parabéns, você conseguiu acertar o número secreto (${numSecreto}) com ${tentativas} tentativa!`);
}*/