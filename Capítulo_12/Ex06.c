#include <stdio.h>
#include <stdlib.h>

int main(){ 

    char Product[20];
    int ProductQuantity;
    float ProductValue, AmountToPay = 0.0;

    FILE *ShoppingList = fopen("arq1.txt", "r");
    if(ShoppingList == NULL){
        perror("Erro: ");
    }

    while(!feof(ShoppingList)){
        fscanf(ShoppingList, "%s %d %f ", Product, &ProductQuantity, &ProductValue);
        AmountToPay += ((float)ProductQuantity * ProductValue);
    }

    printf("O valor total da lista é de R$%.2f.\n", AmountToPay);

    fclose(ShoppingList);
    ShoppingList = NULL;

    return 0;
}