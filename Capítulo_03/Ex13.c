#include <stdio.h>
#include <math.h>

int main(){

    float a, b, hip;

    printf("Hipotenusa de um triângulo\n");
    printf("Digite o valor A e B respectivamente: ");
    scanf("%f %f", &a, &b);

    hip = sqrt(pow(a, 2) + pow(b, 2));

    printf("Hipotenusa %f\n", hip);

    return 0;
}