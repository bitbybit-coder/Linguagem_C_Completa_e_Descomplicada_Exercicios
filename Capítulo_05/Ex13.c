#include <stdio.h>

int main(){

    int soma = 0;

    for(int i = 0; i < 1000; i++){
        if((i%3 == 0) || (i%5 == 0)){
            soma = soma + i;
        }
    }
    printf("A soma dos número naturais abaixo de 1000 é de %d.\n", soma);

    return 0;
}