#include <stdio.h>

int main(void) {
    
    float salario_atual, reajuste, aumento, novo_salario;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    aumento = salario_atual * (reajuste / 100);
    novo_salario = salario_atual  + aumento;

    printf("O novo salario e R$%.2f", novo_salario);

    return 0;
}
