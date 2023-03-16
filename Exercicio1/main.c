#include <stdio.h>

int main(void) {
    
    float mercadoria, frete, despesas, venda, custos, lucro, porcentagem;

    printf("valor da mercadoria: ");
    scanf("%f",&mercadoria);

    printf("valor do frete: ");
    scanf("%f",&frete);
  
    printf("valor de despesas eventuais: ");
    scanf("%f",&despesas);

    printf("valor da venda: ");
    scanf("%f",&venda);

    custos = mercadoria+frete+despesas;
    lucro= venda-custos;
    porcentagem = (lucro/custos)*100;
    
    if(venda>custos){
        printf("O lucro foi de %0.2f por cento!", porcentagem);
    }else{
        printf("Teve um prejuizo de:%0.2f reais", lucro);
    }

    return 0;
}