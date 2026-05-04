#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int N, i, contatore = 0;
    float peso, altezza, k, rapporto;

    // Apertura del file in modalità lettura ("r")
    fp = fopen("persone.txt", "r");

    if (fp == NULL) {
        printf("Errore: impossibile aprire il file persone.txt\n");
        return 1; // Termina il programma con errore
    }

    // Input dei parametri N e k
    printf("Quante persone vuoi analizzare (N)? ");
    scanf("%d", &N);

    printf("Inserisci il valore di soglia k: ");
    scanf("%f", &k);

    // Ciclo di lettura e calcolo
    for (i = 0; i < N; i++) {
        // Leggiamo peso e altezza dal file
        if (fscanf(fp, "%f %f", &peso, &altezza) == 2) {
            
            // Evitiamo divisioni per zero se l'altezza fosse 0
            if (altezza != 0) {
                rapporto = peso / altezza;

                // Verifichiamo se il rapporto è maggiore di k
                if (rapporto > k) {
                    contatore++;
                }
            }
        } else {
            printf("Avviso: il file contiene meno di %d coppie di dati.\n", N);
            break; 
        }
    }

    // Chiusura del file e stampa dei risultati
    fclose(fp);

    printf("\n--- Analisi completata ---\n");
    printf("Persone con rapporto peso/altezza > %.2f: %d\n", k, contatore);

    return 0;
}