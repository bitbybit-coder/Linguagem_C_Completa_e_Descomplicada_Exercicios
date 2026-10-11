#include <stdio.h>

int main(){

    int num, verificador = 0;

    do{
        printf("Digite um valor inteiro maior que 1: ");
        scanf("%d", &num);
    }while(num <= 1);

    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            verificador = verificador + 1;
        }
    }

    if(verificador == 2){
        printf("O valor digitado é um número primo.\n");
    }else{
        printf("O valor digitado não é um número primo.\n");
    }

    return 0;
}