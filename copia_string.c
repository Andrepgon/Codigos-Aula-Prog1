#include <stdio.h>
#include <stdlib.h>
#define max 10

void copiaString(char* palavra1, char* palavra2, int maximo2);

int main()
{
    char* palavra1 = malloc (sizeof(char)*20);
    char* palavra2 = malloc (sizeof(char)*max);

    puts("Digite a palavra que devera ser copiada");
    fgets(palavra1, 20, stdin);

    copiaString(palavra1, palavra2, max);
    printf("%s\n%s", palavra1, palavra2);
    
    free(palavra1);
    free(palavra2);
    
    return 0;
}

void copiaString(char* palavra1, char* palavra2, int maximo2)
{
    for(int i = 0; i < maximo2; i++)
    {
        palavra2[i] = palavra1[i];
    }
}   
