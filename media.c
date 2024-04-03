#include <stdio.h>

int main(){

    float nota1;
    float nota2;
    float nota3;
    float duplamaior;
   
    printf("digite as notas com espaço: \n");
    scanf ("%f %f %f", &nota1,&nota2,&nota3);

    // achar a maior dupla

    if (nota1 <= nota2 && nota1 <= nota3) {

        duplamaior= nota2 + nota3;
    }
    if (nota2<=nota1 && nota2<=nota3){

        duplamaior= nota1 + nota3;
    }
    if (nota3<=nota1 && nota3<=nota2){

        duplamaior= nota1 + nota2;
    }
 
    // fazer a média

    duplamaior= duplamaior/2;

    printf("Sua média é: %f", duplamaior);

    return 0;
}
