#include <stdio.h>

int fatorial(int f){
    int fat = 1;
    for(int i = 1; i <= f; i++){
        fat *= i;
    }
    return fat;
}

int main(){

    int valor, fat;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    fat = fatorial(valor);

    printf("O fatorial de %d é %d\n", valor, fat);

    return 0;
}