#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50];
}cadastro;

cadastro* retornaPtrVetor(int n){
    cadastro *aux;
    aux = malloc(n*sizeof(cadastro));
    if(aux == NULL){
        printf("Erro. Memória insuficiente!\n");
    }else{
        for(int i = 0; i < n; i++){
            printf("=== %d CADASTRO ===\n", i+1);
            setbuf(stdin, NULL);
            printf("NOME: ");
            fgets((aux+i)->nome, 50, stdin);
            printf("IDADE: ");
            scanf("%d", &(aux+i)->idade);
            setbuf(stdin, NULL);
            printf("ENDEREÇO: ");
            fgets((aux+i)->endereco, 50, stdin);
        }
    }
    return aux;
};

int main(){

    int n;
    cadastro *alunos;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    alunos = retornaPtrVetor(n);

    free(alunos);
    alunos = NULL;

    return 0;
}