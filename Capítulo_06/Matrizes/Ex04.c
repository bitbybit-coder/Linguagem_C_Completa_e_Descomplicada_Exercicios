#include <stdio.h>

int main(){

    int matriz[4][4], contador = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10){
                contador++;
            }
        }
    }
    
    printf("Foram digitador %d valores maiores do que dez.\n", contador);

    return 0;
}