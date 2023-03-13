#include<stdio.h>

int main(void) {

    float area, raio, pi;
    pi=3.14;

    printf("===CALCULE A AREA DO CIRCULO===\n\n");

    printf("Qual e o raio do circulo: ");
    scanf("%f",&raio);

    area=raio*raio*pi;

    printf("\nValor da area do circulo: %0.2f", area);

    return 0;
}