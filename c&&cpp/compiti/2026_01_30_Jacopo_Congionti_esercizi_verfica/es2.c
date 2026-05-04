#include <stdio.h>

int main() {
    int n;
    float somma = 0;

    printf("Quanti numeri? ");
    scanf("%d", &n);

    if (n <= 0) return 1;

    float numeri[n];

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeri[i]);
        somma += numeri[i];
    }

    float massimo=numeri[0];
    for (int i = 1; i < n; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }

    if (somma != 0) {
        float percentuale=(massimo/somma) * 100;
        printf("Massimo: %.2f\n", massimo);
        printf("La percentuale sul totale è: %.2f%%\n", percentuale);
    }

    return 0;
}