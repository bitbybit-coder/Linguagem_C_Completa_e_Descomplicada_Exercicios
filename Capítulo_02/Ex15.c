#include <stdio.h>
#include <stdlib.h>

int main(){

    char x;
    int y;
    float z;

    scanf("%c", &x);
    scanf("%d", &y);
    scanf("%f", &z);

    printf("%c %d %f \n", x, y, z);
    printf("%c\t%d\t%f \n", x, y, z);
    printf("%c\n%d\n%f \n", x, y, z);

    return 0;
}