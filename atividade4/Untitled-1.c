#include <stdio.h>

int main() {
    int quantidade, regiao;
    float preco = 5.0, total, frete, total_com_frete;
    
    printf("Quantidade de itens (maximo 100): ");
    scanf("%d", &quantidade);
    
    if (quantidade <= 0 || quantidade > 100) {
        printf("Quantidade invalida\n");
        return 1;
    }
    
    printf("Codigo da regiao (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);
    
    switch (regiao) {
        case 1:
            frete = 0.1 * preco * quantidade;
            printf("Regiao de entrega: Norte\n");
            break;
        case 2:
            frete = 0.08 * preco * quantidade;
            printf("Regiao de entrega: Nordeste\n");
            break;
        case 3:
            frete = 0.12 * preco * quantidade;
            printf("Regiao de entrega: Centro-Oeste\n");
            break;
        case 4:
            frete = 0.15 * preco * quantidade;
            printf("Regiao de entrega: Sudeste\n");
            break;
        case 5:
            frete = 0.11 * preco * quantidade;
            printf("Regiao de entrega: Sul\n");
            break;
        default:
            printf("Codigo de regiao invalido\n");
            return 1;
    }
    
    total = preco * quantidade;
    total_com_frete = total + frete;
    
    printf("Total a pagar (sem frete): R$ %.2f\n", total);
    printf("Total a pagar (com frete): R$ %.2f\n", total_com_frete);
    
    return 0;
}
