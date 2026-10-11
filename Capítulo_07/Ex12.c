#include <stdio.h>

int main(){

    char mercadoria[20];
    float valor, valor_avista10, valor_desconto10;

    printf("Mercadoria: ");
    fgets(mercadoria, 20, stdin);
    printf("Valor R$ ");
    scanf("%f", &valor);

    valor_avista10 = (valor/100)*90;
    valor_desconto10 = valor - valor_avista10;

    printf("--------------------\n");
    printf("Mercadoria: %s", mercadoria);
    printf("Valor total R$%.2f\n", valor);
    printf("Valor desconto R$%.2f\n", valor_desconto10);
    printf("Valor a ser pago R$%.2f\n", valor_avista10);

    return 0;
}