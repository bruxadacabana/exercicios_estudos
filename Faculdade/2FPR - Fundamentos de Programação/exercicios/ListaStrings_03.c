#include <stdio.h>
#include <string.h>

#define TAM 10

void copiaSub (char s[TAM], char sub[TAM], int indice, int quant);

void main(){
    int p, n;
    char origem[TAM], destino[TAM];

    printf("Digite uma string: ");
    gets(origem);
    printf("\0Digite a posicao onde iniciara a substring: ");
    scanf("%d", &p);
    printf("\0Digite a quantidade de caracteres a serem copiados: ");
    scanf("%d", &n);

    if ((p > strlen(origem)) || (p <= 0) || (n <= 0)){
        printf("Substring inválida");
    } else{
        copiaSub(origem, destino, p, n);
        printf("\nString: %s", origem);
        printf("\nSubstring: %s", destino);
    }

}

void copiaSub (char s[TAM], char sub[TAM], int indice, int quant){
    int i;
    
}