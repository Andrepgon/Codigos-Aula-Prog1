#include <stdio.h>
int main() {
char letra;
char cifrada;


for (int i = 0; i < 3; i++) {
        printf("Digite uma letra: ");
        letra = getchar();
        getchar();
        //Defesa:
        if (!((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))) {
            printf("Caractere invalido\n");
            continue; // Vai para a próxima iteração do loop
        }

        if (letra >= 'A' && letra <= 'Z') {
            cifrada = letra + 12;

            if (cifrada > 'Z') {
                cifrada = (cifrada - 'Z') + 'A' - 1;
            }
        }
        if (letra >= 'a' && letra <= 'z') {
            cifrada = letra + 12;

            if (cifrada > 'z') {
                cifrada = (cifrada - 'z') + 'a' - 1;
            }
        }

        printf("Sua letra eh %c e sua forma cifrada eh %c \n", letra, cifrada);
    }

    return 0;
}
