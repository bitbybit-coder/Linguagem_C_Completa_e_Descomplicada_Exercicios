#include <stdio.h>

int main(){

    int valores[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\n-Ordem inversa-\n ");
    for(int i = 5; i >= 0; i--){
        printf(" %d", valores[i]);
    }
    printf("\n");

    return 0;
}