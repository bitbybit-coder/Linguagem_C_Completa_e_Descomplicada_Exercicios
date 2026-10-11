#include <stdio.h>

int main(){

    float k, m;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &k);
    m = k / 3.6;
    printf("M/S: %f\n", m);

    return 0;
}