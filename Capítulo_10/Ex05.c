#include <stdio.h>

int main(){

    int  vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor de vetor[%d]: ", i);
        scanf("%d", &(*(vetor+i)));
    }
    printf("O dobro dos valores digitados é: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", 2 * *(vetor+i));
    }
    printf("\n");

    return 0;
}