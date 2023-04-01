#include <stdio.h>

int main() {
   int i, idade;
   char nome[50], sexo;
   
   for (i = 1; i <= 20; i++) {
      printf("Digite o nome da %dª pessoa: ", i);
      scanf("%s", nome);
      printf("Digite a idade da %dª pessoa: ", i);
      scanf("%d", &idade);
      printf("Digite o sexo da %dª pessoa (M/F): ", i);
      scanf(" %c", &sexo);
      
      if (sexo == 'M' && idade > 21) {
         printf("%s\n", nome);
      }
   }
   
   return 0;
}
