#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(){

    float altura, raio, volume;

    printf("Altura do cilindro: ");
    scanf("%f", &altura);
    printf("Raio do cilindro: ");
    scanf("%f", &raio);

    volume = pi * pow(raio, 2) * altura;

    printf("Volume : %f\n", volume);

    return 0;
}