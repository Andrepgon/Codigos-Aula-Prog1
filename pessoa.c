#include <stdio.h>
#include <stdlib.h>

int busca_binaria(float *arr, float a, int tamanho);

int main() {
    float pesos[] = {68.5, 72.3, 65.8, 80.1, 67.2, 75.6, 69.4, 71.9, 76.3, 64.7};

    // Aplicar o bubble sort
    int tamanho = sizeof(pesos) / sizeof(pesos[0]);
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (pesos[j] > pesos[j+1]) {
                float aux = pesos[j];
                pesos[j] = pesos[j+1];
                pesos[j+1] = aux;
            }
        }
    }
    printf("Pesos ordenados em ordem crescente:\n");
    
    for (int i = 0; i < tamanho; i++) {
        printf("%.1f ", pesos[i]);
    }
    printf("\n");
    
    float peso_procurado;
    printf("Digite o peso que você quer buscar: ");
    scanf("%f", &peso_procurado);
    
    int posicao = busca_binaria(pesos, peso_procurado, tamanho);

    if (posicao != -1) {
        printf("O peso que você está procurando está no índice %d do vetor.\n", posicao+1);
        return 0;
    } else {
        printf("O peso que você está procurando não está na lista de pesos.\n");
        return 1;
    }
}

int busca_binaria(float *arr, float a, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == a) {
            return meio;
        }

        if (a > arr[meio]) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

