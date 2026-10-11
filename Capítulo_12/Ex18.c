#include <stdio.h>
#include <stdlib.h>

int main(){

    int FirstNumber;
    int HighestValue, LowestValue;
    FILE *NumberFile = fopen("arq1.bin", "rb");
    if(NumberFile == NULL){
        perror("Erro: ");
        exit(1);
    }

    fread(&FirstNumber, sizeof(int), 1, NumberFile);
    int SearchVector[FirstNumber];
    fread(SearchVector, sizeof(int), FirstNumber, NumberFile);

    HighestValue = LowestValue = SearchVector[0];

    for(int i = 0; i < FirstNumber; i++){
        if(HighestValue < SearchVector[i]){
            HighestValue = SearchVector[i];
        }
        if(LowestValue > SearchVector[i]){
            LowestValue = SearchVector[i];
        }
    }

    printf("O MAIOR valor presente no arquivo é %d.\n", HighestValue);
    printf("O MENOR valor presente no arquivo é %d.\n", LowestValue);

    fclose(NumberFile);
    NumberFile = NULL;

    return 0;
}