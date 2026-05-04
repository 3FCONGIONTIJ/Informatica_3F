#include <stdio.h>

int main() {
    int N, i;
    long long corrente;

    // N deve essere maggiore di 0
    do {
        printf("Quanti numeri vuoi stampare (N > 0)? ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("Errore: inserisci un valore positivo.\n");
        }
    } while (N <= 0);

    // Chiediamo il valore di partenza
    printf("Inserisci il numero iniziale: ");
    scanf("%lld", &corrente);

    printf("\nSequenza generata:\n");

    // Ciclo per calcolare e stampare i numeri
    for (i = 0; i < N; i++) {
        // Stampiamo il numero attuale
        printf("Numero %d: %lld\n", i + 1, corrente);

        // Prepariamo il numero per il prossimo ciclo moltiplicandolo per 3
        corrente = corrente * 3;
    }

    return 0;
}