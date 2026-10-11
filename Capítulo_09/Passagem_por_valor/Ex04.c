#include <stdio.h>
#define PI 3.1414592

float volume_cilindro(float altura, float raio){
    float volume;
    volume = PI * (raio*raio) * altura;
    return volume;
}

int main(){

    float h, r, v;

    printf("Digite o raio do cilindro(cm): ");
    scanf("%f", &r);
    printf("Digite a altura do cilindro(cm): ");
    scanf("%f", &h);

    v = volume_cilindro(h, r);

    printf("O volume do cilindro é de %.2fcm³.\n", v);

    return 0;
}