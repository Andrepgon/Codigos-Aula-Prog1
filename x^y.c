#include <stdio.h>

int main()
{
    int x;
    int y;
    long int resultado;
    printf("digite os numeros x e y, sendo x diferente de 0 e y maior ou igual  0 \n");
    scanf("%d %d", &x, &y);
    
    if (x == 0){
        printf("x deve ser diferente de 0");
        return 0;
    }
    if ( y < 0){
        printf("y deve ser maior ou igual a 0");
        return 0;
    }
    if (y == 0){
        
        printf("o resultado eh: 1 \n");
        return 0;
    }
    if (y == 1){
        printf("o resultado eh: %d \n", x);
        return 0;
    }
    else  
    
    resultado = x;
   
    int n = 1;
    
    do{
        resultado = resultado * x;
        n++;
    }
    while (n < y);
    
    
    printf("o resultado eh: %ld \n", resultado);
    
    return 0;
    
    
    
    
    
}
