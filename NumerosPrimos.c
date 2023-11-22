#include <stdio.h>

int main() {
    int vetor[15];

    printf("Digite 15 valores:\n");
    for (int i = 0; i < 15; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Números primos no vetor:\n");
    for (int i = 0; i < 15; i++) {
        int ehPrimo = 1;

        if (vetor[i] <= 1) {
            ehPrimo = 0;
        } else {
            for (int j = 2; j * j <= vetor[i]; j++) {
                if (vetor[i] % j == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
