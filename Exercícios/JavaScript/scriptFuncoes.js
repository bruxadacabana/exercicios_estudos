/*
FUNÇÕES são trechos de código
> return RETORNA ALGO
> () local por onde vc pode passar parâmetros

TIPOS
> COMUM: tem um nome pelo qual é chamada
> ANÔNIMA: não é possível ser chamada pelo nome
> ARROW FUNCTION: tipo de função que torna o cógigo dentro dele mais acessível
*/

function somar (x1, x2){
    return x1 + x2;
}

console.log(somar(1, 2));

function calc (xx1, xx2, xx3){
    return eval(`${xx1} ${xx3} ${xx2}`);
}

console.log(calc(1, 3, '*'))
