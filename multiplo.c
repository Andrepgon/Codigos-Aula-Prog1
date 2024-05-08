#include <stdio.h>

int ehMultiplo ( int natural, int numero);
void multiplos (int quantidade, int variavel1, int variavel2);

int main()
{
    int a, b, n;
    
    printf("Digite as varaveis A e B voce quer descobrir os n primeiros multiplos? \n");
    scanf("%d %d", &a, &b);

    if ((a < 0) || (b < 0))
    {
        printf("Esse programa imprime apenas os multiplos naturais ");
        return 1;
    }

    printf("Digite a quantidade de multiplos que serao obtidos \n");
    scanf("%d", &n);

    multiplos(n,a,b);
}

int ehMultiplo (int natural, int numero)
{
    if ((natural % numero) == 0 )
    {
        return 1;
    }
    return 0;
}

void multiplos (int quantidade, int variavel1, int variavel2)
{
  int a = 0;
  do
  {
    if (ehMultiplo(a, variavel1) || ehMultiplo(a, variavel2) )
    {
        printf("%d ", a);
        quantidade--;
    }
    a++;
  } while (quantidade >= 0);
  
}
