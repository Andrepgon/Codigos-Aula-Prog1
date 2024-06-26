#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

long long valores[MAX] = { 0 }; //Global
int calculos = 0 ;
int calculos_smart = 0;
long long fib(int n)
{
    calculos++;
    return (n == 1 || n == 0) ? n : fib(n - 1) + fib(n - 2);
}
long long smartFib(int n) 
{
    if (n == 1 || n == 0)
        return n;

    if (!valores[n]) 
    {
        calculos_smart++;
        valores[n] = smartFib(n - 1) + smartFib(n - 2);
    }
    return valores[n];
}

int main(int argc, char* argv[]) 
{
    if (argc != 2)
    {
        return 1;
    }

    int n = atoi(argv[1]);

    if (!( n <= 50))
    {
        return 2;
    }

    int f1, f2;
    double tempoGasto;
    clock_t inicio;

    //RECEBER n pela main!!
    inicio = clock(); //Inicia contagem de tempo
    f1 = fib(n);
    tempoGasto = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    printf("Fib(%d) = %d (calculado em %.2fs) e fez %d calculos\n", n, f1, tempoGasto, calculos);
    //Alocação dinâmica de um vetor de inteiros de 64 bits:
    //long long* valores = (long long*)calloc(MAX, sizeof(long long));
    inicio = clock();
    f2 = smartFib(n);
    tempoGasto = ((double)(clock() - inicio)) / CLOCKS_PER_SEC;
    printf("smartFib(%d) = %d(calculado em %.2fs) e fez %d calculos\n", n, f2, tempoGasto, calculos_smart);
    return 0;
}
