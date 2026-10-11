#include <stdio.h>

 int main(){

    float *p[10];

    for(int i = 0; i < 10; i++){
        //ou p[i]
        printf("*p[%d] = %p\n", i, *(p+i));
    }

    return 0;
 }