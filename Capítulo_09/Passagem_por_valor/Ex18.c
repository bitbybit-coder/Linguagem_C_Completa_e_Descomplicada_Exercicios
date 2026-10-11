#include <stdio.h>
#include <math.h>
#define pi 3.1414592
int fatorial(int x);

float calcula_seno(int graus){
    float seno = 0, x_rad, exp = 3;
    x_rad = graus * (pi/180);
    for(int i = 0; i <= 5; i++){
        seno += ((float)pow(-1.0, i)/(float)fatorial(2 * 1 + 1)) * pow(x_rad, 2 * i + 1);
    }
    
    return seno;
}

int main(){

    float angulo, seno_angulo;

    printf("Digite o valor de um ângulo em graus: ");
    scanf("%f", &angulo);

    seno_angulo = calcula_seno(angulo);

    printf("O seno de %.2fº é %f.\n", angulo, seno_angulo);
    
    return 0;
}
int fatorial(int x){
    int fat = 1;
    for(int i = 1; i <= x; i++){
        fat *= i;
    }
    return fat;
}