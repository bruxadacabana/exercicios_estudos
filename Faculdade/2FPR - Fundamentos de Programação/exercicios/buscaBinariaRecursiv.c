#include <stdio.h>

int buscaBinariaRec (int vetor [], int inicio, int fim, int numero);
//int buscaBinaria ();

void main (){
    int vet[15] = {4, 5, 8, 9, 11, 12, 15, 16, 18, 20, 21, 22, 25, 26, 30};

    printf("buscar (8) retorna %d\n", buscaBinariaRec(vet, 0, 14, 8));
    printf("buscar (25) retorna %d\n", buscaBinariaRec(vet, 0, 14, 25));
}

int buscaBinariaRec (int vetor [], int inicio, int fim, int numero){
    
    int meio=0;

    meio = (inicio + fim)/meio;
    printf("comparando %d com %d\n", numero, vetor[meio]);
    // testa antes se ainda tem espaço no vetor
    if (inicio <= fim) {
        if (numero == vetor[meio]){  // testa se numero está no meio
            return meio;
        } else if (numero < vetor[meio]) {  //testa se numero está a esquerda do meio (menor do que o meio do vetor)
            return buscaBinariaRec (vetor, inicio, meio-1, numero);
        } else {
            return buscaBinariaRec (vetor, meio + 1, fim, numero);
        }
    } else {
        return -1;  // numero não está no vetor
    }

}