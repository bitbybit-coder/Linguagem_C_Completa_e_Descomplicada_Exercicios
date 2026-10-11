#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("\t\tEQUAÇÃO DO SEGUNDO GRAU\nDigite os valores de a, b e c respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a == 0){
        printf("Não é uma equação do segundo grau!\nValor de 'a' igual a zero!\n");
    }else{
        delta = pow(b, 2) - (4 * a * c);

        if(delta < 0){
            printf("Não existe raíz!\n");
        }else{
            if(delta == 0){
                x1 = - b / 2 * a;
                printf("Raíz única: %f\n", x1);
            }else{
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("1ª Raiz: %.2f\n2ª Raiz: %.2f\n", x1, x2);
            }
        }
    }

    return 0;
}
