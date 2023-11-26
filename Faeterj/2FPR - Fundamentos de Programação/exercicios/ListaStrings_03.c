#include <stdio.h>
#include <string.h>

#define TAM 20

void copiaSub (char s[TAM], char sub[TAM], int indice, int quant);

void main(){
    int p, n;
    char origem[TAM], destino[TAM];

    printf("Digite uma string: ");
    gets(origem);
    printf("\nDigite a posicao onde iniciara a substring: ");
    scanf("%d", &p);
    printf("\nDigite a quantidade de caracteres a serem copiados: ");
    scanf("%d", &n);

    if ((p > (strlen(origem))) || (p <= 0) || (n <= 0)){
        printf("Substring inválida");
    } else{
        copiaSub(origem, destino, p, n);
        printf("\nString: %s", origem);
        printf("\nSubstring: %s", destino);
    }

}

void copiaSub (char s[TAM], char sub[TAM], int indice, int quant){
    int i, j;
    for (
        i = (indice - 1), j=0; 
        (s[i] != '\0') && (j < quant); 
        i++, j++
        ){
            sub[j] = s[i];
    }
    sub[j] = '\0';
}
