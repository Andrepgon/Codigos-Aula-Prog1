#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    float nota1, nota2;
    char *nome = malloc (sizeof(char)*MAX);
    char *sobrenome = malloc (sizeof(char)*MAX);
    char *tudo = malloc (sizeof(char)*70);

    printf("Digite os dados do aluno: (Nome, Sobrenome, Nota1 e Nota2) \n");
    fgets(tudo, MAX*3, stdin);

    sscanf(tudo, "%s %s %f %f", nome, sobrenome, &nota1, &nota2);
    float media = (nota1 + nota2)/2.0;
    printf("Aluno:%s %s; Media: %.1f \n", nome, sobrenome, media);

    free(nome);
    free(sobrenome);
    free(tudo);
    return 0;
}
