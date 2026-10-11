#include <stdio.h>
#include <math.h>

float retornaS(int n){
    if(n == 1){
        return 2;
    }
    float s = ((float)(1+pow(n, 2))) / n;
    return s + retornaS(n-1);
}

int main(){

    int n;
    float serie;

    printf("Digite o valor de n:");
    scanf("%d", &n);

    serie = retornaS(n);

    printf("A série S é igual a: %f", serie);

    printf("\n");

    return 0;
}