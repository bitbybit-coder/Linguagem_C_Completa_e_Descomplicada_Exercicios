#include <stdio.h>

void preenche_vetor(int *vtr, int szmx, int valor){
    for(int i = 0; i < szmx; i++){
        *(vtr+i) = valor;
    }
}

int main(){

    int vetor[5], valor = 10;
    preenche_vetor(vetor, 5, valor);

    for(int i = 0; i < 5; i++){
        printf("%d ", *(vetor+i));
    }printf("\n");

    return 0;
}