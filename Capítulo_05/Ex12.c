#include <stdio.h>


int main(){

    int num, soma = 0;

    do{
        printf("Digite um valor positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    for(int i = 1; i < num; i++){
        if(num%i == 0){
            soma = soma + i;
        }
    }
    printf("A soma dos divisores de %d é %d.\n", num, soma);

    return 0;
}