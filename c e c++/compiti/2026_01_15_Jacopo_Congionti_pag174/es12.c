#include <stdio.h>

int main() {
    int N, k, i;
    int maggiori = 0, uguali = 0, minori = 0;
    // Lettura di N e k
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &N);
    printf("Inserisci il valore di confronto k: ");
    scanf("%d", &k);
    // Dichiarazione dell'array di dimensione N
    int numeri[N];
    // Inserimento dei dati nell'array
    printf("Inserisci i %d numeri:\n", N);
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }
    // Analisi dei dati memorizzati
    for (i = 0; i < N; i++) {
        if (numeri[i] > k) {
            maggiori++;
        } else if (numeri[i] == k) {
            uguali++;
        } else {
            minori++;
        }
    }
    // Stampa dei risultati
    printf("\n--- Risultati ---\n");
    printf("Numeri maggiori di %d: %d\n", k, maggiori);
    printf("Numeri uguali a %d: %d\n", k, uguali);
    printf("Numeri minori di %d: %d\n", k, minori);
     return 0;
}