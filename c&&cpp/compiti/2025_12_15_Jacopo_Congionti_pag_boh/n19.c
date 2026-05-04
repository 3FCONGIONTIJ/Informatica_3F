#include <stdio.h>

int main() {
    int numero1, numero2;
    int somma_corretta;
    int tua_risposta;

    printf("--- Esercizio di Somma Mentale ---\n");

    // 1. Leggi i due numeri
    printf("Inserisci il primo numero intero: ");
    if (scanf("%d", &numero1) != 1) {
        printf("Errore nell'input del primo numero.\n");
        return 1;
    }

    printf("Inserisci il secondo numero intero: ");
    if (scanf("%d", &numero2) != 1) {
        printf("Errore nell'input del secondo numero.\n");
        return 1;
    }
    
    // Esegui la somma corretta sul computer
    somma_corretta = numero1 + numero2;

    printf("\nOra esegui MENTALMENTE la somma dei due numeri: %d + %d\n", numero1, numero2);
    printf("Inserisci il tuo risultato: ");
    
    // 2. Leggi la prima risposta dell'utente
    if (scanf("%d", &tua_risposta) != 1) {
        printf("Errore nell'input della risposta.\n");
        return 1;
    }

    // 3. Primo Tentativo
    if (tua_risposta == somma_corretta) {
        // Se la prima risposta è corretta
        printf("\nBravo, hai indovinato al primo tentativo.\n");
    } else {
        // Se la prima risposta è sbagliata
        printf("\nHai sbagliato, prova ancora.\n");
        
        // 4. Leggi il nuovo risultato per il secondo tentativo
        printf("Inserisci il nuovo risultato: ");
        if (scanf("%d", &tua_risposta) != 1) {
            printf("Errore nell'input della seconda risposta.\n");
            return 1;
        }

        // 5. Secondo Tentativo
        if (tua_risposta == somma_corretta) {
            // Se la seconda risposta è corretta
            printf("Bravino, hai indovinato al secondo tentativo.\n");
        } else {
            // Se la seconda risposta è sbagliata
            printf("Ti serve un ripasso di matematica\n");
        }
    }

    printf("\nLa somma corretta era: %d\n", somma_corretta);
    
    return 0;
}