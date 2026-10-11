#include <stdio.h>
#include <stdlib.h>

struct ST_StudentData{
    int Matriculation;
    char Name[30];
    float TestResults[3];
}Data;

int main(){

    FILE *StudentData = fopen("studentdata.txt", "r");
    if(StudentData == NULL){
        perror("Erro: ");
        exit(1);
    }

    while(!feof(StudentData)){
        if(feof(StudentData)){
            break;
        }
        fscanf(StudentData, "%d", &Data.Matriculation);
        fgets(Data.Name, 30, StudentData);
        for(int i = 0; i < 3; i++){
            fscanf(StudentData, "%f", &Data.TestResults[i]);
        }
    }

    printf("Matrícula: %d\n", Data.Matriculation);
    printf("Nome: %s", Data.Name);
    for(int i = 0; i < 3; i++){
        printf("%dº Nota: %.2f\n", (i+1), Data.TestResults[i]); 
    }

    fclose(StudentData);
    StudentData = NULL;

    return 0;
}