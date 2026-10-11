#include <stdio.h>
#include <math.h>

int main(){

    float quadrado[5], vetor[5];

    for(int i = 0; i < 5; i++ ){
        printf("%dº valor real: ", i+1);
        scanf("%f", &vetor[i]);
        quadrado[i] = vetor[i] * vetor[i];
    }

    for(int i = 0; i < 5; i++){
        printf("quadrado[%d] = %.2f\n", i+1, quadrado[i]);
    }
    printf("\n");

    return 0;
}