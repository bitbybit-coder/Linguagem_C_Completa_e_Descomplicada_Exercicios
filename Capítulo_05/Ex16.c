#include <stdio.h>

int main(){

    float hn;
    int enesimo;

    do{
        printf("Digite o enésimo termo da séria harmônica: ");
        scanf("%d", &enesimo);
    }while(enesimo <= 0);

    for(int i = 1; i <= enesimo; i++){
        if(i == 1){
            hn = 1;
            continue;
        }
        hn = hn + 1.0/(float)i;
    }

    printf("%.2f\n", hn);

    return 0;
}