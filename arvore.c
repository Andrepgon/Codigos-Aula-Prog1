#include <stdio.h>


void arvore(int tamanho, int invertido);

int main()
{
    int tamanho_main;
    int invertido_main;
    
    printf("Digite o tamanho da arvore e se ela tem o parametro invertido(qualquer numero negativo) \n");
    scanf("%d %d", &tamanho_main, &invertido_main);
    
    if (invertido_main > 0)
    {
        printf("O parametro invertido deve ser negativo ou zero(para arvore normal)");
        return 1;
    }  
    if (tamanho_main > 10 || tamanho_main < 1)
    {
        printf("Esse tamanho de piramide eh invalido");
        return 2;
    }  
    arvore(tamanho_main, invertido_main);
}

void arvore(int tamanho, int invertido)
{
    if (invertido == 0)
    {
        for (int linha = 0; linha < tamanho; linha++)
        {
    
            for (int espaco = 0; tamanho - linha > espaco; espaco++)
            {
                printf(" ");
            }
            for (int asteristico = 0; 2*linha+1 > asteristico; asteristico++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    if (invertido < 0)
    {
        int largura = tamanho-1;
        for(int linha = 0; linha < tamanho; linha++)
        {
            
            
            for (int espaco = 0; espaco < linha ; espaco++)
            {
                printf(" ");
            }
            
            for (int asteristico = 0; asteristico < 2*largura+1; asteristico++)
            {
                printf("*");
                
            }
            printf("\n");
            largura --;

        }

    }


}
