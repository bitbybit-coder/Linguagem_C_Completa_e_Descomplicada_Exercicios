#include <stdio.h>

#define pi 3.141592

int main(){

    float g, r;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &g);

    r = g * pi / 180;

    printf("Conversão em radianos: %f\n", r);


    return 0;
}