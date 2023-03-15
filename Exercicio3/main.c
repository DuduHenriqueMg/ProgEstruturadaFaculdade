#include<stdio.h>
#include <math.h>

int main(void) {

    const float capacidade = 2.0, consumo = 0.3;
    float altura, largura, area, qtd_tinta, qtd_lata;

    printf("===SAIBA A QUANTIDADE DE TINTA CERTA PRA PINTAR UMA PAREDE===\n");

    printf("Qual a largura da parede (em metros)?");
    scanf("%f", &largura);
    printf("Qual a altura da parede (em metros)? ");
    scanf("%f", &altura );

    area = largura*altura;
    qtd_tinta = area*consumo;
    qtd_lata = ceil(qtd_tinta/capacidade);

    printf("Serao necessarias %.0f latas de tinta para pintar a parede.\n", qtd_lata);  

    return 0;

}