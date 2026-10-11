#include <stdio.h>

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
    
    int n, enesimo;
    printf("Digite o enésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    enesimo = fibonacci(n - 1);

    printf("O enésimo valor da sequência é %d.\n", enesimo);

    return 0;
}