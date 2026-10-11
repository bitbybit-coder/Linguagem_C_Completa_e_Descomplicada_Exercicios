#include <stdio.h>


int main(){

    int num;

    do{
        printf("Digite um valor positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    printf("DIVISORES DE %d:\n", num);
    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            printf("%d  ", i);
        }
    }
    printf("\n");

    return 0;
}