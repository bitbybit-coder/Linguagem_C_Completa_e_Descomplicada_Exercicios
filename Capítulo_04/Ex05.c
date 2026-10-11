#include <stdio.h>
#include <math.h>

int main(){

    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    if(x > 0){
        printf("Valor ao quadrado: %f\n", pow(x, 2));
        printf("Raiz quadrada do valor: %f\n", sqrt(x));
    }

    return 0;
}