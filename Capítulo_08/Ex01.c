#include <stdio.h>
#include <stdlib.h>

struct ender{
    char rua[50];
    int numero;
};
struct cad{
    char nome[50];
    int idade;
    struct ender endereco;
};

int main(){

    struct cad cadastro;

    printf("*****CADASTRO*****\n");
    printf("Nome: ");
    fgets(cadastro.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &cadastro.idade);
    printf("Endereço\n");
    printf("Rua: ");
    setbuf(stdin, NULL);
    fgets(cadastro.endereco.rua, 50, stdin);
    printf("Número: ");
    scanf("%d", &cadastro.endereco.numero);

    printf("*****CONSULTA DADOS CADASTRADOS*****\n");
    printf("Nome: %s", cadastro.nome);
    printf("Idade: %d\n", cadastro.idade);
    printf("Rua: %s", cadastro.endereco.rua);
    printf("Número: %d\n", cadastro.endereco.numero);
    
    return 0;
}
