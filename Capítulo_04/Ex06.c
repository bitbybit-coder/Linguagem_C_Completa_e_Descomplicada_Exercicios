#include <stdio.h>
#include <ctype.h>

int main(){

    float altura, peso_ideal;
    char sexo;

    printf("Digite seu sexo M/F: ");
    sexo = getchar();

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || 'm'){
        peso_ideal = (72.7 * altura) - 58;
    }else{
        peso_ideal = (62.1 * altura) - 44.7;
    }
    
    printf("Seu peso ideal é de %fkg.\n", peso_ideal);
    
    return 0;
}