#include <stdio.h>

int main(){

    int vetor[100], verificador = 0, cont = 100;

    for(int i = 0; i < cont; i++){
        if(i%7 == 0){
            cont++;
            verificador--;
        }else{
            vetor[verificador] = i;
        }
        verificador++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}