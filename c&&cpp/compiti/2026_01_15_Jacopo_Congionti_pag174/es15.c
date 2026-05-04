#include <stdio.h>

int main() {
    int codice, maxCodice;
    float prezzo, maxPrezzo = -1.0; // Inizializzato a un valore negativo

    printf("Inserimento prodotti (inserisci codice 0 per terminare)\n");

    // Leggiamo il primo codice per avviare il ciclo
    printf("\nInserisci il codice del prodotto: ");
    scanf("%d", &codice);

    while (codice != 0) {
        printf("Inserisci il prezzo del prodotto %d: ", codice);
        scanf("%f", &prezzo);

        // Se il prezzo appena inserito è maggiore del massimo attuale
        if (prezzo > maxPrezzo) {
            maxPrezzo = prezzo;
            maxCodice = codice;
        }

        // Chiediamo il codice successivo
        printf("\nInserisci il codice del prossimo prodotto (0 per uscire): ");
        scanf("%d", &codice);
    }

    // Controllo finale: se maxPrezzo è ancora -1, non sono stati inseriti prodotti
    if (maxPrezzo != -1.0) {
        printf("\n--- Risultato ---");
        printf("\nIl prodotto piu' costoso e' il numero: %d", maxCodice);
        printf("\nCon un prezzo di: %.2f Euro\n", maxPrezzo);
    } else {
        printf("\nNessun prodotto inserito.\n");
    }

    return 0;
}