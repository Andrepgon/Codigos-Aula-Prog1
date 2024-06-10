
#include <stdio.h>
#define  MAXIMO 20

typedef struct{
    int dimensao;
    int entrada[2*MAXIMO];
}vetor;

vetor intercalar (vetor a, vetor b);

int main()
{
    vetor array1,array2;
    printf("Digite o tamanho do vetor 1 e do vetor 2: ");
    scanf("%d%d", &array1.dimensao, &array2.dimensao);
    printf("Digite os elementos do vetor 1: \n");
    for(int i = 0; i < array1.dimensao; i++)
    {
        scanf("%d", &array1.entrada[i]);
    }
    printf("Digite os elementos do vetor 2: \n");
    for(int i = 0; i < array2.dimensao; i++)
    {
        scanf("%d", &array2.entrada[i]);
    }
    
    vetor c = intercalar (array1, array2);
    for( int i = 0; i < c.dimensao; i++)
    {
        printf("%d ", c.entrada[i]);
    }
    return 0;
}

vetor intercalar (vetor a, vetor b)
{
    vetor c;
    c.dimensao = a.dimensao + b.dimensao;
    int pa = 0, pb = 0, pc = 0;
    while (pc < c.dimensao)
    {
        if (a.entrada[pa] < b.entrada[pb])
        {
            c.entrada[pc] = a.entrada[pa];
            pa++;
            pc++;
        }
        else
        c.entrada[pc] = b.entrada[pb];
        pb++;
        pc++;
    }
    return c;
}
