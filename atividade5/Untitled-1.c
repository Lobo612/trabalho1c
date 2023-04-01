#include <stdio.h>
#include <string.h>

int main() {
    char situacao_civil[20];
    int idade, qtde_filhos, idade_mais_velho;
    char sexo[10], nome_conjuge[50], cidade[50];
    float salario_atual;
    
    printf("Informe sua situacao civil (Solteiro, Casado, Divorciado, Viuvo): ");
    scanf("%s", situacao_civil);
    
    if (strcmp(situacao_civil, "Solteiro") == 0) {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("Situacao civil: %s, Idade: %d\n", situacao_civil, idade);
    } else if (strcmp(situacao_civil, "Casado") == 0) {
        printf("Informe o sexo do conjuge: ");
        scanf("%s", sexo);
        printf("Informe o nome do conjuge: ");
        scanf("%s", nome_conjuge);
        printf("Situacao civil: %s, Sexo do conjuge: %s, Nome do conjuge: %s\n", situacao_civil, sexo, nome_conjuge);
    } else if (strcmp(situacao_civil, "Divorciado") == 0) {
        printf("Informe a quantidade de filhos (0, caso nao possua): ");
        scanf("%d", &qtde_filhos);
        printf("Informe a idade do filho mais velho: ");
        scanf("%d", &idade_mais_velho);
        printf("Situacao civil: %s, Quantidade de filhos: %d, Idade do filho mais velho: %d\n", situacao_civil, qtde_filhos, idade_mais_velho);
    } else if (strcmp(situacao_civil, "Viuvo") == 0) {
        printf("Informe a cidade onde vive: ");
        scanf("%s", cidade);
        printf("Informe o salario atual: ");
        scanf("%f", &salario_atual);
        printf("Situacao civil: %s, Cidade: %s, Salario atual: R$ %.2f\n", situacao_civil, cidade, salario_atual);
    } else {
        printf("Opcao invalida\n");
        return 1;
    }
    
    return 0;
}
