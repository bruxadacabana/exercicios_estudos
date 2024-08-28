let listaNumSorteados = [];
let limite = 100;

function gerarNumeroAleatorio(){
    let numeroEscolhido = parseInt(Math.random() * limite + 1);
    let quantElementos = listaNumSorteados.length;

    if (quantElementos == limite){
        listaNumSorteados = [];
    }

    if (listaNumSorteados.includes(numeroEscolhido)){
        return gerarNumeroAleatorio();
    } else {
        listaNumSorteados.push(numeroEscolhido);
        console.log(listaNumSorteados);
        return numeroEscolhido;
    }
}

function limparCampo(){
    chute = document.querySelector('input');
    chute.value = '';
}

function exibirTextoNaTela (tag, texto){
    let campo = document.querySelector(tag);
    campo.innerHTML = texto;
    responsiveVoice.speak(texto, 'Brazilian Portuguese Female', {rate:1.4});
}

let numeroSecreto;
let tentativas;

function iniciarJogo(){
    limparCampo();
    numeroSecreto = gerarNumeroAleatorio();
    tentativas = 1;
    exibirTextoNaTela('h1', 'Jogo do número secreto');
    exibirTextoNaTela('p', 'Escolha um número entre 1 e 100');
    document.getElementById("reiniciar").setAttribute('disabled', true);
}

function verificarChute(){
    let chute = document.querySelector('input').value;
    if (chute == numeroSecreto){
        exibirTextoNaTela('h1', 'Acertoou!');
        let palavraTentativa = tentativas > 1 ? 'tentativas' : 'tentativa';
        exibirTextoNaTela('p', `Você acertou o número secreto com ${tentativas} ${palavraTentativa}!`);
        document.getElementById("reiniciar").removeAttribute('disabled');
    } else{
        if (chute > numeroSecreto){
            exibirTextoNaTela('p', 'O número secreto é menor do que seu chute');
        } else {
            exibirTextoNaTela('p', 'O número secreto é maior do que seu chute');
        }
        tentativas++;
        limparCampo();
    }
}