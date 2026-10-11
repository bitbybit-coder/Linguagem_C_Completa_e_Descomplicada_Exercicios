#include <stdio.h>

int main (){

    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Divisão (desloc. bits): %d\n", x >> 1);
    printf("Multiplicação (desloc. bits): %d\n", x << 1);

    return 0;
}