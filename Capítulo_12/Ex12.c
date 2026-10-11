#include <stdio.h>
#include <stdlib.h>
#define VectorSize 5

void SaveVectorToFile(int *Vector, int VectorSz){
    FILE *VectorFile = fopen("vetor.txt", "w");
    if(VectorFile == NULL){
        perror("Erro: ");
        exit(1);
    }

    for(int i = 0; i < VectorSz; i++){
        fprintf(VectorFile, "%d\n", Vector[i]);
    }

    fclose(VectorFile);
    VectorFile = NULL;
}

int main(){

    int Vector[VectorSize] = {1, 2, 3, 4, 5};

    SaveVectorToFile(&Vector[0], VectorSize);

    return 0;
}