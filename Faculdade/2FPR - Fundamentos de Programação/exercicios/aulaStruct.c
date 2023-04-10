#include <stdio.h>

typedef struct {
    float altura, peso;
    int idade;
} TPessoa;

void funcPovo (){
    TPessoa povo[10];

    for (i=0; i<10; i++){
        printf("Altura: ");
        scanf("%f", &povo[i].altura);
        printf("Altura: ");
        scanf("%f", &povo[i].peso);
        printf("Altura: ");
        scanf("%d", &povo[i].idade);
    }
}

void funcPessoa (){
    TPessoa p1;

    printf("Altura: ");
    scanf("%f", &p1.altura);
    printf("Altura: ");
    scanf("%f", &p1.peso);
    printf("Altura: ");
    scanf("%d", &p1.idade);
}