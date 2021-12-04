//esse é um comentário
/* esse também é um comentário */

var olaMundo = 'Olá, Mundo!'; //declarando variável
console.log(olaMundo); //esse comando escreve no console

/*
VARIÁVEIS
var VARIÁVEL
let LEVA EM CONSIDERAÇÃO ONVE A VARIÁVEL FOI CRIADA, É POSSÍVEL CRIAR VARIÁVEIS QUE EXISTEM APENAS DENTRO DE UM BLOCO
const CONSTANTE/VALOR NÃO MUDA
array VARIÁVEL QUE GUARDA VÁRIAS VARIÁVEIS

typeof RETORNA TIPO

CONVERSÃO DE VARIÁVEIS
parseInt, parseFloat

OPERADORES
= atribuição
== comparação sem importar tipo
=== comparação contando com tipo
!== comparação se é diferente
*/

let a = 10;
const b = '10';
console.log(a == b);
console.log(a === b);

/*operadores lógicos
&& AMBAS AS CONDIÇÕES PRECISAM SER VERDADEIRAS
|| PELO MENOS UMA CONDIÇÃO PRECISA SER VERDADEIRA
*/

var cor = 'vermelho';

if (cor === 'verde'){
    console.log('SIGA');
} else if (cor === 'vermelho') {
    console.log('PARE');
} else{
    console.log('ATENÇÃO');
}