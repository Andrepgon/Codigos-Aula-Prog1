#include <stdio.h>

void tabuada(int a, int b);

int main()
{
    int numero, falta;
    scanf("%d %d", &numero, &falta);
    if (falta > 10 || falta < 1)
    {
        return 1;
    }
    tabuada(numero, falta);
}

void tabuada(int a, int b)
{
   if (b == 0)
   {
    return;
   }
   printf ("%d x %d = %d\n", a,b, a*b);
   return tabuada(a, b-1);
}
