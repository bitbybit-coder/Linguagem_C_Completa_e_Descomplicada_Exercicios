#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Digite o valor do salário R$ ");
    scanf("%f", &salario);
    printf("Digite o valor da prestção R$ ");
    scanf("%f", &prestacao);

    if(prestacao > (salario/100)*20){
        printf("Empréstimo não concedido.\n");
    }else{
        printf("Empréstimo concedido.\n");
    }

    return 0;
}