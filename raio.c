#include <stdio.h>

int main() {

    float Rmaior, Rmenor, pi, area;
    pi = 3.14;

        printf( "Escreva o numero do raio maior: \n");
        scanf("%f", &Rmaior);

        printf( "Escreva o numero do raio menor: \n");
        scanf("%f", &Rmenor);

    if (Rmenor < Rmaior )
    {
    area = pi*((Rmaior*Rmaior) - (Rmenor*Rmenor) );
    printf(" A area da coroa : %.2lf \n", area);
    }
    else
    {
    printf("O raio maior precisa ser maior que o menor.");
    }
    return 0;
