#include <stdio.h>

int main(){

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("%dº valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                if(vetor[i] == vetor[j]){
                    printf("Vetor[%d] = %d, repetido!\n", i+1, vetor[i]);
                }
            }
        }
    }

    return 0;
}