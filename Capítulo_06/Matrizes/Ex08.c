#include <stdio.h>
#include <math.h>

int main(){

    int a[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(i > j){
                a[i][j] = (2*i) + (7*j) - 2;
            }else{
                if(i < j){
                    a[i][j] = (3*pow(i, 2)) - 1;
                }else{
                    a[i][j] = (4*pow(i, 3)) + (5*j) + 1;
                }
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}