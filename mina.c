#include <stdio.h>
#include <stdlib.h>

void mina( int *arr, int tamanho);

int main()
{
    int tamanho;
    
    printf("Digite o tamanho da sua grade de minas:  ");
    scanf("%d", &tamanho);
    
    int *arr =(int*) malloc (sizeof(int) * tamanho); 
    
    if (arr == NULL) 
    {
        // Verificação de falha na alocação de memória
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite sua grade de minas: Bomba = 1, Vazio = 0 \n");
    
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &arr[i]);
    }

    mina(arr, tamanho);
    free(arr);
    return 0;
}

void mina (int *arr, int tamanho)
{
    int *mina =calloc(tamanho, sizeof(int));   //criou uma array de tamanho n cheia de zeros

    if (mina == NULL) 
    {
        // Verificação de falha na alocação de memória
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)   //o loop soma 1 em cada elemento de zeros desse array caso tenha uma bomba nos arredores
    {
        for (int j = -1; j <= 1; j++)
        {
            int pos = i + j;

            if (pos >= 0 && pos < tamanho && arr[pos] == 1) //verifica se a posição está dentro do arr e soma a quantidade de bombas na array mina
            {
                mina[i]++;  
            }
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", mina[i]);
    }
    printf("\n");
    free(mina);
    return;
}
