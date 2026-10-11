#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor da posição [%d]: ", i);
        scanf("%d", &(*(vetor+i)));
    }
    for(int i = 0; i < 5; i++){
        if(*(vetor+i)%2 == 0){
            printf("%p\n", &(*(vetor+i)));
        }
    }

    return 0;
}