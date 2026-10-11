#include <stdio.h>

int main(){

    int idade, ano_atual, ano_nasc;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    ano_nasc = ano_atual - idade;

    printf("Ano de nascimento: %d\n",ano_nasc);

    return 0;
}