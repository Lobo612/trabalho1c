#include <stdio.h>

int main() {
   int i, n;
   float num, soma = 0, media;
   
   for (i = 1; i <= 10; i++) {
      printf("Digite o %d° numero: ", i);
      scanf("%f", &num);
      
      printf("Metade do %d° numero: %.2f\n", i, num/2);
      
      soma += num; // acumula a soma dos números lidos
   }
   
   media = soma/10; // calcula a média
   
   printf("A média dos números lidos é: %.2f", media);
   
   return 0;
}
