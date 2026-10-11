#include <stdio.h>
union tp_basicos{
    int x;
    char y;
}basicos;

int main(){

    basicos.x = 100;
    printf("Valor do tipo char: %c\n", basicos.y);

    return 0;
}