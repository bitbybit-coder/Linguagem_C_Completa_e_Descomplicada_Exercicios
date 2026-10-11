#include <stdio.h>
#include <stdlib.h>

struct st_cadAluno{
    int matricula;
    char nome[20];
    float notas[3];
}aluno;

int main(){

    printf("Bytes ocupados por struct st_cadAluno: %ld\n", sizeof(struct st_cadAluno));

    return 0;
}