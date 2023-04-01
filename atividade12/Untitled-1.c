#include <stdio.h>

int main() {
    int quantidade, preco = 3, pagamento, troco, nota50, nota20, nota10, nota5, nota2, moeda1;

    printf("Quantos chocolates voce deseja comprar? ");
    scanf("%d", &quantidade);

    pagamento = 0;
    while (pagamento < quantidade * preco) {
        printf("Insira uma cedula de 2, 5, 10, 20 ou 50 reais: ");
        scanf("%d", &pagamento);
    }

    troco = pagamento - quantidade * preco;
    nota50 = troco / 50;
    troco %= 50;
    nota20 = troco / 20;
    troco %= 20;
    nota10 = troco / 10;
    troco %= 10;
    nota5 = troco / 5;
    troco %= 5;
    nota2 = troco / 2;
    troco %= 2;
    moeda1 = troco;

    printf("Troco: %d cedulas de 50 reais, %d cedulas de 20 reais, %d cedulas de 10 reais, %d cedulas de 5 reais, %d cedulas de 2 reais, %d moedas de 1 real", nota50, nota20, nota10, nota5, nota2, moeda1);

    return 0;
}
