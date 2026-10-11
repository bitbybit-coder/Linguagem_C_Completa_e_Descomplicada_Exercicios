#include <stdio.h>
#include <stdlib.h>
#define TotalNumberOfAthletes 5

struct ST_Athlete{
    char name[20];
    char sport[20];
    int Age;
    int height;
}Athlete[TotalNumberOfAthletes];

int main(){

    FILE *AthleteArchive = fopen("Athlete.bin", "a+b");
    if(AthleteArchive == NULL){
        perror("Erro: ");
        exit(1);
    }

    for(int i = 0; i < TotalNumberOfAthletes; i++){
        printf("==== %dº ATLETA ====\n", i+1);
        printf("Nome: ");
        fgets(Athlete[i].name, 20, stdin);

        printf("Esporte: ");
        fgets(Athlete[i].sport, 20, stdin);

        printf("Idade: ");
        scanf("%d", &Athlete[i].Age);

        printf("Altura (cm): ");
        scanf("%d", &Athlete[i].height);

        setbuf(stdin, NULL);
    }

    fwrite(&Athlete, sizeof(struct ST_Athlete), 5, AthleteArchive);

    fclose(AthleteArchive);
    AthleteArchive = NULL;

    return 0;
}