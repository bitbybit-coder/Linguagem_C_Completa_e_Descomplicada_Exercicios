#include <stdio.h>
#include <string.h>

int main(){

    char str[200];

    printf("Digite uma string para codficação: ");
    fgets(str, 200, stdin);

    str[strlen(str)-1] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            str[i] = str[i]+3;
        }
    }

    printf("%s", str);
    printf("\n");

    return 0;
}