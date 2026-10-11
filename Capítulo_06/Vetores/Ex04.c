#include <stdio.h>

int main(){

    int A[6] = {1,0,5,-2,-5,-7}, soma = 0;

    /*Por se tratar de poucos valores a soma e a atribuição poderiam ser realizadas de 
    forma manual porem, optei por realiza-las através de um comando de repetição iterativo.*/
    for(int i = 0; i < 6; i++){
        if(i == 0 || i == 1 || i == 5){
            soma += A[i];
            if(i == 5){
                printf("\n-Soma A[0]+A[1]+A[5]: %d\n", soma);
            }
        }else{
            if(i == 4){
                A[i] = 100;
            }
        }
    }
    printf("-Valores por linha-\n");
    for(int i = 0; i < 6; i++){
        printf("\n%d\n", A[i]);
    }

    return 0;
}