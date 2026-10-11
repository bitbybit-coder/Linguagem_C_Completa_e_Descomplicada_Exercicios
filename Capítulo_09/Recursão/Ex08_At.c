#include <stdio.h>

int retorna_multiplicacao(float mpno, int mpdr){
    if(mpdr == 1){
        return mpno;
    }
    return  mpno + retorna_multiplicacao(mpno, --mpdr);
}

int main(){

    int multiplicando, multiplicador, resultado;

    printf("Digite o valor do multiplicando: ");
    scanf("%d", &multiplicando);
    printf("Digite o valor do multiplicador: ");
    scanf("%d", &multiplicador);

    resultado = retorna_multiplicacao(multiplicando, multiplicador);

    printf("A multiplicação de %d por %d é igual a: %d.\n", multiplicando, multiplicador, resultado);

    return 0;
}