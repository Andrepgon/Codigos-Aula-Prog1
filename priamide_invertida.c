int main()
{
    int coluna;
    int tamanho = 0;
    printf("Qual tamanho da pirâmide? \n");
    scanf("%d", &coluna);
    
     int horizontal = coluna;
    
    while (tamanho < coluna)
    {
    
         int horizontal = coluna;
        
        while (horizontal > tamanho)
        {
            printf("*");
            horizontal--;
        }
        printf("\n");
        
       tamanho++;
    }
    return 0;
}
