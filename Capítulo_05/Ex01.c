#include <stdio.h>

int main(){

    int valor, i;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);

    for(i = 0; i <= valor; i++){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
