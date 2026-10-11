#include <stdio.h>

int main(){

    int matriz[5][5], soma_sem_diag = 0, soma_diag_sec = 0, resultado;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if(!(i == j) && !(i == 5 - 1 - j)){
                soma_sem_diag += matriz[i][j];
            }
            if(i == 5 - 1 - j){
                soma_diag_sec += matriz[i][j];
            }
        }
    }

    resultado = soma_sem_diag - soma_diag_sec;
    printf("A diferença dos valores é de %d.\n", resultado);

    return 0;
}