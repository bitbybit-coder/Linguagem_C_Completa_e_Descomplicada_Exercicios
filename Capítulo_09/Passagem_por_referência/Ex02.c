#include <stdio.h>
#include <math.h>
#define PI 3.1414592

void calculo_esfera(float r, float *a, float *v){
    *v = (4.0 * PI * pow(r, 3)/3.0);
    *a = ((4.0 * PI) * (float)pow(r, 2));
}

int main(){

    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calculo_esfera(raio, &area, &volume);

    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}