//Revisão de Funções
// Questão 01 - Desenvolver uma função que exiba os múltipos  de N compreendidos no intervalo definido por A e B
//multiplos são os resultados das multiplicaõe entre dois numeros inteiros


#include <stdio.h>

void multiplos (int num, int inicio, int fim);

void main(){
    int num, in, fi;
    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("Digite o numero inicial\n");
    scanf("%d", &in);
    printf("Digite o numero final\n");
    scanf("%d", &fi);

    multiplos(num, in, fi);


}

void multiplos(int num, int inicio, int fim){
    int i, m=0;
    for (i=0; m <= fim; i++){
        m = num * i;
        if (m >= inicio && m <= fim){
            printf("%d | ",m);
        }
    }
}