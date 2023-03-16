#include<stdio.h>
#include <math.h>

int main(void) {

    const double capacidade = 2.0, consumo = 0.3;
    float altura, largura, area, qtd_tinta, qtd_lata;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);
    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura );

    area = largura*altura;
    qtd_tinta = area*consumo;
    qtd_lata = ceil(qtd_tinta/capacidade);

    printf("Serao necessarias %.0f latas de tinta para pintar a parede.\n", qtd_lata);  

    return 0;

}