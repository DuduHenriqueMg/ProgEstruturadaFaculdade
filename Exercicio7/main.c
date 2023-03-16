#include <stdio.h>

int main() {
    
    float custo_fabrica, custo_distribuidor, custo_impostos, custo_novo;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    custo_distribuidor = 0.28*custo_fabrica;
    custo_impostos = 0.45*custo_fabrica;

    custo_novo = custo_fabrica+custo_distribuidor+custo_impostos;

    printf("O custo final do carro ao consumidor e de R$%.2f\n", custo_novo);

    return 0;
}
