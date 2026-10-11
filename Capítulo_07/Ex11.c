#include <stdio.h>

int main(){

    char str[20];

    printf("Digite uma string qualquer: ");
    fgets(str, 20, stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);

    return 0;
}