#include <stdio.h>

int main(){

    int x, y;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    int *px = &x, *py = &y;

    if(px > py){
        printf("PX(%p) > PY(%p)\n", px, py);
    }else if(py > px){
        printf("PY(%p) > PX(%p)\n", py, px);
    }else{
        //Ocasião improvavel
        printf("PY(%p) = PX(%p)\n", py, px);
    }

    return 0;
}