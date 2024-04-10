#include <stdio.h>
#include <math.h>

int main(){ 

    int n;
    int c, d, u;
    int n2;
    int metodo;

    printf("Uma curiosa propriedade matemática que um número inteiro N de 3 dígitos pode vir \
a possuir é a seguinte: \
\
    N = centenas³+ dezenas³+ unidades³ \n"); 
    printf("\n");
    printf("Agora, digite um número inteiro de 3 casas decimais para iniciar o tste: \n");
    scanf("%d", &n);

    // defesa

    if (n < 100 || n > 999) { 
        printf("erro, selecione um número com 3 algarismos \n");
        return 0;
    }

    // separar o n (agora n2) em c d u

    n2 = n;
    u = n2 % 10;
    n2 = n2 / 10;
    d = n2 % 10;
    n2 = n2 / 10;
    c = n2;

    // metodo

    metodo = pow(c,3) + pow(d,3) + pow(u,3);

    // prova real

    if (metodo == n) {
        printf("o teste foi concluído com sucesso \n");

    }

    else {
        printf("o teste deu erro \n");
    }

    return 0;


}
