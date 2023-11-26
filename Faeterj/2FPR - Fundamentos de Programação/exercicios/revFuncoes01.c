/*
Exibir os multiplos de N compreendidos no intervalo entre A e B
*/

#include <stdio.h>

void funcao (int N, int A, int B){
    int i, j = 0;
    for (i = 0; j < B; i++){
        j = (N * i);
        if (j >= A){
            printf(" \n%d", j);
        }
    }

}

int main (){
    int n, a, b;
    printf("Digite o numero do qual voce quer saber o multiplo: ");
    scanf("%d", &n);
    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &a);
    printf("Digite o ultimo numero do intervalo: ");
    scanf("%d", &b);
    funcao(n, a, b);

}