#include <stdio.h>

float serie_s(int n){
    float s = 0;
    for(int i = 1; i <= n; i++){
        s += (float)(n*n+1)/(float)(n+3);
    }
    return s;
}

int main(){

    int n_serie;
    float resultado;

    printf("Digite um valor: ");
    scanf("%d", &n_serie);

    resultado = serie_s(n_serie);

    printf("O valor da série S é de: %.2f.\n", resultado);

    return 0;
}