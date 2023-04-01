#include <stdio.h>

int main() {
    int popA = 90000, popB = 50000, anos = 0;

    while (popA >= popB) {
        popA += popA * 0.009;
        popB += popB * 0.015;
        anos++;
    }

    printf("Em %d anos, a populacao da cidade B (%d habitantes) sera maior do que a populacao da cidade A (%d habitantes)", anos, popB, popA);

    return 0;
}
