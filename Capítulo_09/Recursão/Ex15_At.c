#include <stdio.h>

float retorna_hn(int n){
    if(n == 1){
        return 1;
    }
    float s = (float) 1 / n;
    return s + retorna_hn(--n);
}

int main(){

    float hn;
    int enesimo_termo;
    printf("Digite um valor: ");
    scanf("%d", &enesimo_termo);

    hn = retorna_hn(enesimo_termo);

    printf("O valor harmônico do enésimo termo é: %f", hn);

    printf("\n");

    return 0;
}