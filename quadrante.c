#include<stdio.h>

int main(){

int x;
int y;

printf("Insira o valor de x, sendo ele um valor inteiro: \n");
scanf("%d", &x);

printf("Insira o valor de y, sendo ele um valor inteiro: \n");
scanf("%d", &y);

//defesa do código

if ( x == 0 || y == 0){

    printf("O numero nao pertence a nenhum quadrante \n");
    return 0;
}

if (x > 0 && y > 0){

    printf("O ponto esta no Quadrante 1");
}

if (x < 0 && y < 0){

    printf("O ponto esta no Quadrante 3");
}

if (x > 0 && y < 0){

    printf("O ponto esta no Quadrante 4");
}

if ( x < 0 && y > 0){

    printf("O ponto esta no Quadrante 2");
}


}