#include <stdio.h>

int main(){

    int x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if(x%2 == 0){
        printf("O valor digitado é par.\n");
    }else{
        printf("O valor digitado é ímpar.\n");
    }

    return 0;
}