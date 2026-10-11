#include <stdio.h>
#include <stdlib.h>

int* RetornaPtrC(int a[], int b[], int n){
    int *c;
    c = (int*) malloc(n * sizeof(int));
    if(c == NULL){
        return NULL;
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                c[i * n +j] = a[i * n +j] * b[i * n + j];
            }
        }
    }
    return c;
}

int main(){

    int *a, *b, *c, n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    a = (int*) malloc(n * n * sizeof(int));
    b = (int*) malloc(n * n * sizeof(int));

    if(a == NULL || b == NULL){
        printf("Erro. Memória Insuficiente!\n");
        exit(1);
    }else{
        //Preenche as matrizes A e B com alguns valores quaisquer
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
               a[i * n +j] = 2;//(10 + i * j);
               b[i * n +j] = 2;//(2 + i - j); 
            }
        }
        c = RetornaPtrC(a, b, n);
    }

    printf("Amostra matriz C[n][n]: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%5d ", c[i * n + j]);
        }printf("\n");
    }

    free(c);
    c = NULL;

    return 0;
}