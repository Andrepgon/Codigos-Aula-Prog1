#include <stdio.h>

void tabuada(int a);

int main ()
{
    int numero;
    printf("Qual tabuada voce quer saber?");
    scanf("%d", &numero);
    tabuada(numero);
}

void tabuada (int a)

{ 
    for (int i = 1; i <= 10; i++)
    {
        int resultado = i*a;

        printf ("%d x %d = %d", a, i, resultado);
        printf ("\n");
    }
    return;
}
