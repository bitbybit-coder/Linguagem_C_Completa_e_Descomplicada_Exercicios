#include <stdio.h>

int main(){

    int matriz[3][3], menor;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i+1, j+1 );
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(menor > matriz[i][j]){
                menor = matriz[i][j];
            }
        }
    }

    printf("Menor valor digitado : %d\n", menor);

    return 0;
}
