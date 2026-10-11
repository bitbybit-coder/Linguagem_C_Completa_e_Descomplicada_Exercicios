#include <stdio.h>
#include <stdlib.h>

int main(){

    int *matriz, n;

    printf("Didite o valor d n (nxn): ");
    scanf("%d", &n);

    matriz = (int*) malloc(n * n * sizeof(int*));

    if(matriz == NULL){
        printf("Erro. Memória Insuficiente!.\n");
        exit(1);
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j){
                    matriz[i * n +j] = 0;
                }else if(i < j){
                    matriz[i * n +j] = 1;
                }else{
                    matriz[i * n +j] = -1;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", matriz[i * n + j]);
        }
        printf("\n");
    }

    free(matriz);
    matriz = NULL;

    return 0;
}