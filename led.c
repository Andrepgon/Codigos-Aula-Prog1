#include <stdio.h>

int totalLEDS (int n);
int algarismoLEDS (int a);


int main()
{
    int numero;
    printf("Digite o numero que voce quer escrever em LEDS \n");
    scanf("%d", &numero );

   

    printf("Voce precisa de %d led(s)", totalLEDS(numero));
}

int totalLEDS (int n)
{
   int soma_led = 0;
   do
   {
    soma_led += algarismoLEDS(n%10);
    n = n/10;
   } while (n != 0 );
   
   return soma_led;
}

int algarismoLEDS (int a)
{
    switch (a)
    {

        case 1 :
            return a = 2;
        case 2:
            return a = 5;
        case 3:
            return a = 5;
        case 4:
            return a = 4;
        case 5:
            return a = 5;
        case 6:
            return a = 6;
        case 7:
            return a = 3;
        case 8:
            return a = 7;
        case 9:
            return a = 6;
        case 0:
            return a = 6;
        default:
        printf("Numero invalido");
        break;

    }
return 0;
}
