#include <stdio.h>

float converte_FpC(float F){
   float C;
   C = (F - 32.0)*(5.0/9.0);
   return C;
}

 int main(){

   float fahreinheit, celcius;

   printf("Digite uma temperatura em graus fahrenheit: ");
   scanf("%f", &fahreinheit);

   celcius = converte_FpC(fahreinheit);

   printf("O equivalente em celcius é %.3f°C.\n", celcius);

   return 0;
}