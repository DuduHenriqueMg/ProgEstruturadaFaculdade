#include <stdio.h>

int main(void){

    int car_vendidos;
    float salario_fixo, comissao, valor_total, salario_final;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d10", &car_vendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valor_total);
    printf("Digite o salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor recebido por carro vendido(comissao): ");
    scanf("%f", &comissao);

    salario_final = salario_fixo+(car_vendidos*comissao)+(valor_total*0.05);
    printf("O salario final do vendedor e: R$ %.2f\n", salario_final);
   
    return 0;
}