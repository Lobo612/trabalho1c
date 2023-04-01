#include <stdio.h>

int main() {
    float valor_unitario, valor_total = 0;
    int quantidade = 0, opcao_pagamento, opcao_desconto;
    float percentual_desconto, valor_desconto;

    int total_itens_vendidos = 0;
    float total_vendas = 0;

    do {
        printf("Informe o valor unitario do produto: ");
        scanf("%f", &valor_unitario);

        if (valor_unitario > 0) {
            printf("Informe a quantidade comprada: ");
            scanf("%d", &quantidade);

            valor_total += valor_unitario * quantidade;
            total_itens_vendidos += quantidade;
        }
    } while (valor_unitario > 0);

    if (valor_total > 0) {
        printf("Valor total da compra: R$%.2f\n", valor_total);

        printf("Informe a opcao de pagamento:\n");
        printf("1. Dinheiro\n");
        printf("2. Cartao debito\n");
        printf("3. Cartao credito\n");
        scanf("%d", &opcao_pagamento);

        switch (opcao_pagamento) {
            case 1:
                printf("Opcao escolhida: Dinheiro\n");
                percentual_desconto = 10;
                break;
            case 2:
                printf("Opcao escolhida: Cartao debito\n");
                percentual_desconto = 5;
                break;
            case 3:
                printf("Opcao escolhida: Cartao credito\n");
                percentual_desconto = 0;
                break;
            default:
                printf("Opcao invalida!\n");
                return 1;
        }

        if (percentual_desconto > 0) {
            printf("Deseja aplicar o desconto de %.2f%%?\n", percentual_desconto);
            printf("1. Sim\n");
            printf("2. Nao\n");
            scanf("%d", &opcao_desconto);

            if (opcao_desconto == 1) {
                valor_desconto = valor_total * percentual_desconto / 100;
                valor_total -= valor_desconto;

                printf("Desconto de R$%.2f aplicado\n", valor_desconto);
            }
        }

        printf("Valor a pagar: R$%.2f\n", valor_total);
        total_vendas += valor_total;
    }

    printf("Total de itens vendidos no dia: %d\n", total_itens_vendidos);
    printf("Total das vendas no dia: R$%.2f\n", total_vendas);

    return 0;
}
