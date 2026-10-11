#include <stdio.h>

int somatorio(int n){
    int soma = 0;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main(){

    int numero, soma;

    printf("Digite um valor para soma: ");
    scanf("%d", &numero);

    soma = somatorio(numero);

    printf("A soma de 1 até %d é de %d.\n", numero, soma);

    return 0;
}