#include <stdio.h>

int main(){

    int soma = 0, pares = 1, verificador = 1;

    do{

        if(pares%2 == 0){
            verificador++;
            soma = soma + pares;
        }
        pares++;

    }while(verificador <= 50);

    printf("%d\n", soma);

    return 0;
}