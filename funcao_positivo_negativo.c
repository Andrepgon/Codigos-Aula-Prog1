#include <stdio.h>
#include <math.h>

int soma(int base, int expoente);

int main()
{
    int base, expoente;
    scanf("%d %d", &base ,&expoente);
    if (!(expoente % 2 == 0))
    {
        return 1;
    }
    printf("%d\n", soma(base, expoente));
}

int soma(int base, int expoente)
{
    if (expoente == 2)
    {
        return base;
    }
    return pow(base, expoente)*(pow(-1, expoente)) + (soma(base, expoente - 1));
}
