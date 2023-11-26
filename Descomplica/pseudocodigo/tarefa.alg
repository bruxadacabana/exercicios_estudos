algoritmo "tarefa"

funcao multip (a,b:real):real
    inicio
        retorne a*b
fimfuncao

var
    a,b: real
inicio
    escreval("Digite o primeiro valor: ")
    leia(a)
    escreval("Digite o segundo valor: ")
    leia(b)
    escreval("O resultado da multiplicação é: ", multip(a,b))
fimalgoritmo