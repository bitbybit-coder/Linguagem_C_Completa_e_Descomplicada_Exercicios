#include <stdio.h>

int main(){

    float valores[5], media = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%f", &valores[i]);
        media += valores[i];
    }

    printf("\n-Valores lidos e sua média-\n");
    for(int i = 0; i < 5; i++){
        printf("%.2f ", valores[i]);
    }
    printf("\nMédia %.2f\n", media / 5);

    return 0;
}