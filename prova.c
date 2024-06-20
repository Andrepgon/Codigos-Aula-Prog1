#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, nota = 0;
    char* prova = malloc (sizeof(char)*80);
    char* resposta = malloc (sizeof(char)*80);

    printf("Digite a quantidade de questoes da prova: ");
    scanf("%d", &N);
    if (!(1 <= N || N <= 80))
    {
        printf("A questão deve ter de de 1 a 80 questões");
    }
    printf("Digite o gabarito da prova: \n");
    scanf("%s", prova);
    printf("Digite as respostas da prova: \n");
    scanf("%s", resposta);
    for (int i = 0; i < N; i++)
    {
        if (!(prova[i] == 'A' || prova[i] == 'B' || prova[i] == 'C' || prova[i] == 'D' || prova[i] == 'E') || !(resposta[i] == 'A' || resposta[i] == 'B' || resposta[i] == 'C' || resposta[i] == 'D' || resposta[i] == 'E'))
        {
            printf("As alternativas devem ir de A a E e estarem na letra maiuscula \n");
            return 1;
        }
    }
    for(int i = 0; i < N; i++)
    {
        if (prova[i] == resposta[i])
        {
            nota++;
        }
    }
    printf("nota: %d \n", nota);
    return 0;

    free(prova);
    free(resposta);
}
