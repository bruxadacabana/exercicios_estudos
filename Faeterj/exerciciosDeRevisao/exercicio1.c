/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do
distribuidor e dos impostos (aplicados ao custo de fábrica). Desenvolver um algotimo que
calcule o custo ao consumidor de determinado carro
*/

#include <stdio.h>
void exercicio1(){
    float preco, porcDist, imp, precoT;
    printf("Qual o custo de fabrica desse carro?\n");
    scanf("%f", &preco);
    printf("Qual a porcentagem do distribuidor?\n");
    scanf("%f", &porcDist);
    printf("Qual a porcentagem de importos?\n");
    scanf("%f", &imp);
    precoT = (preco +
              (preco - ((porcDist* preco)/100)) +
              (preco - ((imp * preco)/100))
              );
    printf("O custo ao consumidor é de R$ %.2f", precoT);
}
