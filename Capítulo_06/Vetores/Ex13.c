#include <stdio.h>

int main(){

    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº valor de 10: ", i+1);
        scanf("%d", &vetor[i]);
        for(int j = 0; j < i; j++){
            if(vetor[j]==vetor[i]){
                i--;
                printf("Valor já digitado!\nTente novamente.\n");
            }
        }
    }

    printf("Valores digitados: \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}