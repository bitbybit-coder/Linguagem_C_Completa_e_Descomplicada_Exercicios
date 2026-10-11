#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &x, &y);

    printf("ou exclusivo: %d\n", x ^ y);    
    printf("ou bit a bit: %d\n", x | y);
    printf("bit a bit: %d\n", x & y);    

    return 0;
}