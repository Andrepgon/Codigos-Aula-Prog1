#include <stdio.h>

float prodInterno(float *v1, float *v2, int a);
void array( float *v1, int tamanho);

int main()
{
    int tamanhoN;
    printf("Qual o tamanho do seu vetor?");
    scanf("%d", &tamanhoN);

    if ((tamanhoN < 0) || (tamanhoN > 10))
    {
        printf("O tamanho do vetor deve ser: 0 < N <= 10");
        return 1;
    }
    float v1[tamanhoN];
    float v2[tamanhoN];
    array(v1, tamanhoN);
    array(v2, tamanhoN);
    printf("Produto interno: %.1f", prodInterno(v1,v2,tamanhoN));
    return 0;
}

float prodInterno(float *v1, float *v2, int a)
{
    float produto = 0;
    for( int i = 0; i < a; i++)
    {
        produto += v1[i] * v2[i]; 
    }
    return produto;
}

void array(float *v1, int tamanho)
{
    printf("Digite os valores do vetor");
    for( int i = 0; i < tamanho; i++)
    {
        scanf("%f", &v1[i]);
    }
}
