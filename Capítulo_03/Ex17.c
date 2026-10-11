#include <stdio.h>

int main(){

    unsigned char x;
    unsigned int y;

    printf("Digite um valor: ");
    scanf("%d", &y);

    x = ~y;

    printf("Complemento bit a bit: %d\n", x);

    return 0;
}