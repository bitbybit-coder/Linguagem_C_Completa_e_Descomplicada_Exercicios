#include <stdio.h>

int main(){

    float s = 0, denominador = 1;
    int numerador;

    for(numerador = 1; numerador <= 99; numerador += 2){
        s = s + ((float)numerador / denominador);
        denominador++;
    }

    printf("%f\n", s);

    return 0;
}