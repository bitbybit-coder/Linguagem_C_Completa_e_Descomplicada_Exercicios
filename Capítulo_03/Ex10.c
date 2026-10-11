#include <stdio.h>
#define importancia 78000000

int main(){

    float ganhador1, ganhador2, ganhador3;

    ganhador1 = (importancia/100) * 46;
    ganhador2 = (importancia/100) * 32;
    ganhador3 = importancia - (ganhador1 + ganhador2);

    printf("1° ganhador R$ %f\n", ganhador1);
    printf("2° ganhador R$ %f\n", ganhador2);
    printf("3° ganhador R$ %f\n", ganhador3);

    printf("Premio total de %f\n", ganhador1 + ganhador2 + ganhador3);

    return 0;
}