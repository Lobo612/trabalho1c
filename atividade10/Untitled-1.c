#include <stdio.h>

int main() {
    int n, i, max = 0, num;

    printf("Quantos numeros voce deseja fornecer? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("O maior numero fornecido foi: %d", max);

    return 0;
}
