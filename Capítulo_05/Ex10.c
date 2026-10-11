#include <stdio.h>

int main(){

    int valores, contador = 1;
    float media = 0;

    do{

        printf("Digite o %dº valor inteiro positivo: ", contador);
        scanf("%d", &valores);
        contador++;

        if(valores < 0){
            printf("Valor inválido!\nTente novamente.\n");
            contador--;
        }else{
            media = media + valores;
        }

    }while(contador <= 10);

    printf("A média dos valores é de %f.\n", media/10);


    return 0;
}