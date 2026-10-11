#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor_produto, valor_final;
    int estado;

    printf("Digite o valor do produto R$"); 
    scanf("%f", &valor_produto);

    printf("Estado de destino\nMG[1]    SP[2]\nRJ[3]    MS[4]\nCódigo estado:");
    scanf("%d", &estado);

    switch(estado){
        case 1:{
            valor_final = valor_produto + (valor_produto * 0.07);
            printf("Valor final do produto R$%f\n", valor_final);}
        break;
        case 2:{
            valor_final = valor_produto + (valor_produto * 0.12);
            printf("Valor final do produto R$%f\n", valor_final);}
        break;
        case 3:{
            valor_final = valor_produto + (valor_produto * 0.15);
            printf("Valor final do produto R$%f\n", valor_final);}
        break;
        case 4:{
            valor_final = valor_produto + (valor_produto + 0.08);
            printf("Valor final do produto R$%f\n", valor_final);}
        break;
        default : printf("Erro! Estado não encontrado.\n");
    }

    return 0;
}