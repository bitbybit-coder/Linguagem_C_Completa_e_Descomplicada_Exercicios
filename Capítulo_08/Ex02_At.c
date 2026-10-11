#include <stdio.h>
#include <math.h>

struct coordenadas{
    int x;
    int y;
};

int main(){
    
    struct coordenadas ponto;
    int distancia;

    printf("***COORDENADAS***\n");
    printf("X: ");
    scanf("%d", &ponto.x);
    printf("Y: ");
    scanf("%d", &ponto.y);

    distancia = sqrt(pow((ponto.x - 0), 2) + pow((ponto.y - 0), 2));

    printf("A distância entre a origem e o ponto é de: %d\n", distancia);

    return 0;
}