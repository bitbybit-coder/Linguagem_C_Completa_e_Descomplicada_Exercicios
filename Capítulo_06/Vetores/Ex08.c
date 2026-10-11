#include <stdio.h>

int main(void) {

  int vetor[10], cont_neg = 0, soma_pos = 0;

  for(int i = 0; i < 10; i++){
    printf("%dº valor: ", i + 1);
    scanf("%d", &vetor[i]);
    if(vetor[i] < 0){
      cont_neg++;
    }else{
      soma_pos += vetor[i];
    }
  }

  printf("Quantidade de negativos: %d.\n", cont_neg);
  printf("Soma dos positivs: %d.\n", soma_pos);
  
  return 0;
}