#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci numeri tra 2 e 20:\n");

    while (1) {
        printf("> ");
        scanf("%d", &numero);

        if (numero < 2 || numero > 20) {
            break;
        }

        printf("Multipli: ");
        for (int i = numero; i < 100; i += numero) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}