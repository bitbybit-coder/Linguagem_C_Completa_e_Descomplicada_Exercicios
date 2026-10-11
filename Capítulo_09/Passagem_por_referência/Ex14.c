#include <stdio.h>
#include <math.h>

int equacao_segundo_grau(int a, int b, int c, float *x1, float *x2){
    if(a == 0){
        printf("Não é aquação de segundo grau.\n");
        return -1;
    }else{

        int delta = (pow(b, 2) - (4 * a * c));

        if(delta < 0){
            printf("Não existe raíz!\n");
        }else{
            if(delta == 0){
                *x1 = - b / 2 * a;
                printf("Raíz única: %f\n", *x1);
            }else{
                *x1 = (-b + sqrt(delta)) / (2 * a);
                *x2 = (-b - sqrt(delta)) / (2 * a);
                printf("Valor x1: %f\nValor x2: %f\n", *x1, *x2);
            }
        }
    }

}

int main(){

    int a, b, c;
    float x1, x2;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    equacao_segundo_grau(a, b, c, &x1, &x2);

    return 0;
}