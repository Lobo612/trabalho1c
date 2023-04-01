#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("%d eh positivo\n", numero);
    } else if (numero < 0) {
        printf("%d eh negativo\n", numero);
    } else {
        printf("%d eh zero\n", numero);
    }
    
    return 0;
}
