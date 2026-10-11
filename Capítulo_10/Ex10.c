#include <stdio.h>

int main(){

    int a, *b = &a, **c = &b, ***d = &c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Dobro de A: %d\n", *b * 2);    
    printf("Triplo de A: %d\n", **c * 3);
    printf("Quádruplo de A: %d\n", ***d * 4);    

    return 0;
}