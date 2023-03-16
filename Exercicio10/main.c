#include <stdio.h>
#include <math.h>

int main(void){

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = pow(b, 2) -4*a*c;

    if(delta<0) {

        printf("A equacao nao possui resultados reais");

    }else{
        
        x1 = (-b+sqrt(delta)) / (2*a);
        x2 = (-b-sqrt(delta)) / (2*a);
        
        printf("As raizes da equacao sao: x1 = %.2f e x2 = %.2f", x1, x2);
    }

    return 0;
}
