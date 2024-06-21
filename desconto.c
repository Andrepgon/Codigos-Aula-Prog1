#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    float desconto;
    float preco;
    char* codigo = malloc (sizeof(char)*MAX);
    char* tudo = malloc(sizeof(char)*MAX*10);

    if (codigo == NULL || tudo == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite os dados do produto: (codigo, preco, desconto) \n");
    fgets(tudo, MAX*10, stdin);
    sscanf(tudo, "%s %f %f", codigo, &preco, &desconto );

    float novo_preco = preco * (1 - desconto/100);
    sprintf(tudo, "Codigo: %s ; Novo Preco com desconto: %0.2f", codigo, novo_preco);
    printf("%s", tudo);

    free(codigo);
    free(tudo);
    return 0;
}
