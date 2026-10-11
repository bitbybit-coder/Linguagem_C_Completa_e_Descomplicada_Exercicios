#include <stdio.h>

void retorna_partes(float v, int *p_int, float *p_fra){
    *p_int = v;
    *p_fra = v - *p_int;
}

int main(){

    float valor, parte_fracionaria;
    int parte_inteira;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    retorna_partes(valor, &parte_inteira, &parte_fracionaria);

    printf("Parte inteira: %d\n, parte_inteira");
    printf("Parte fracionária: %f", parte_fracionaria);

    return 0;
}
