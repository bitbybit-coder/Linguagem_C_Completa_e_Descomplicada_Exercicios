#include <stdio.h>

int main(){

    int matriz[3][3], vetor[3] = {0, 0, 0}, cont = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o %dº de 9 valores: ", cont);
            scanf("%d", &matriz[i][j]);
            cont++;
            if(j == 0){
                vetor[j] += matriz[i][j];
            }else{
                if(j == 1){
                    vetor[j] += matriz[i][j];
                }else{
                    if(j == 2){
                        vetor[j] += matriz[i][j];
                    }
                }
            }
        }
    }

    printf("A soma das colunas presentes na matriz é de: \n");
    for(int i = 0; i < 3; i++){
        printf("%d  ",vetor[i]);
    }
    printf("\n");

    return 0;
}