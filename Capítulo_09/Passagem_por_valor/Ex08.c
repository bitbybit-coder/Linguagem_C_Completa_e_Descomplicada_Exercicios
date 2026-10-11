#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int v){
    int verifica_raizq = 0;
    for(int i = 0; i <= v; i++){
        if((i*i) == v){
            verifica_raizq = 1;
            break;
        }
    }
    return verifica_raizq;
}

int main(){

    int valor;

    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &valor);

    if(quadrado_perfeito(valor) == 1){
        printf("O valor digitado é um quadrado perfeito.\n");
    }else{
        printf("O valor digitado não é um quadrado perfeito.\n");
    }

    return 0;
}