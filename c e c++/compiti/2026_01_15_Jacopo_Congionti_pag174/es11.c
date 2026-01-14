#include <stdio.h>

int main() {
    int N, i;
    int uguali = 0;

    printf("Quante coppie vuoi inserire? ");
    scanf("%d", &N);

    // Dichiarazione degli array di dimensione N
    int primoElemento[N];
    int secondoElemento[N];

    // Fase 1: Riempimento degli array
    for (i = 0; i < N; i++) {
        printf("Inserisci i due numeri della coppia %d: ", i + 1);
        scanf("%d %d", &primoElemento[i], &secondoElemento[i]);
    }

    // Fase 2: Confronto dei dati memorizzati
    for (i = 0; i < N; i++) {
        if (primoElemento[i] == secondoElemento[i]) {
            uguali++;
        }
    }

    printf("\nRisultato: hai inserito %d coppie con numeri uguali.\n", uguali);

    return 0;
}