#include <stdio.h>

int main(){

    int contador = 1, multiplos = 1;

    do{

        if(multiplos%3 == 0){
            contador++;
            printf("%d ", multiplos);
        }
        multiplos++;

    }while(contador <= 5);

    printf("\n");

    return 0;
}