#include <stdio.h>
#include <stdlib.h>

int* retorna_ptr(int n){
    int *ptr;
    if(n <= 0){
        return ptr = NULL;
    }
    ptr = (int *) calloc(n, sizeof(int));
    if(ptr == NULL){
        printf("Erro. Memória Insuficiente!\n");
        return ptr;
    }else{
        printf("Memória alocada com sucesso.\n");
    }
    return ptr;

}

int main(){

    int n, *vetor;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    vetor = retorna_ptr(n);

    free(vetor);
    vetor = NULL;

    return 0;
}