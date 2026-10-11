#include <stdio.h>

int main(){

    int vetor[8], x, y;

    for(int i = 0; i < 8; i++){
        printf("Digite o %dº valor do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    do{
        printf("Digite dois valores de 0 á 7 para X e Y repectivamente: ");
        scanf("%d %d", &x, &y);
    }while((x < 0 || x > 7) || (y < 0 || y > 7));
    
    printf("vetor[%d] + vetor[%d] = %d.\n", x, y, vetor[x]+vetor[y]);

    return 0;
}