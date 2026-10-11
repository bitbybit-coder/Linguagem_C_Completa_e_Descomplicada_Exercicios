#include <stdio.h>

int main(){

    char s[50];
    int i, j;

    printf("Digite uma string qualquer: ");
    fgets(s, 50, stdin);

    do{
        printf("Digite o valor de i: ");
        scanf("%d", &i);
        printf("Digite o valor de j: ");
        scanf("%d", &j);
    }while(i < 0 || j < 0);

    for(int k = 0; s[k] != '\0'; k++){
        if(k >= i && k <= j){
            printf("%c", s[k]);
        }
    }
    printf("\n");

    return 0;
}