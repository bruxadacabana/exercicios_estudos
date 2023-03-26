/*
converter temperatura de celsius para fahrenheit
*/

#include <stdio.h>

float converter (float C){
    float F;

    F = ((C * 1.8) + 32);

    return F;
}

int main(){
    float C, F;

    printf("Qual a temperatura (em celsius) que voce deseja converter? ");
    scanf("%f", &C);

    F = converter(C);

    printf("\nA temperatura em fahrenheit e: %.2f", F);

    return 0;
}