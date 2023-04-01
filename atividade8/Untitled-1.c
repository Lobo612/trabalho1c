#include <stdio.h>

int main() {
   float inicio, fim;
   printf("Digite o valor inicial do intervalo (em polegadas): ");
   scanf("%f", &inicio);
   printf("Digite o valor final do intervalo (em polegadas): ");
   scanf("%f", &fim);
   
   printf("\nTabela de conversão de polegadas para centímetros:\n");
   printf("Polegadas   Centímetros\n");
   printf("------------------------\n");
   
   float polegadas = inicio;
   while (polegadas <= fim) {
      float cm = polegadas * 2.54;
      printf("%6.2f     %8.2f\n", polegadas, cm);
      polegadas++;
   }
   
   return 0;
}
