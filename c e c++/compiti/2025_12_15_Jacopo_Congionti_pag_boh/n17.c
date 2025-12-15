#include <stdio.h>
#include <string.h>

// Costante per la lunghezza massima del nome del quotidiano
#define LUNGHEZZA_MAX_NOME 50
// Numero di quotidiani da processare
#define NUMERO_QUOTIDIANI 3

// Funzione per calcolare il guadagno in base alle copie vendute
float calcola_guadagno(int copie) {
    float commissione;

    // A. Fino a 200 copie (<= 200) -> 0.10 a copia
    if (copie <= 200) {
        commissione = 0.10f;
    } 
    // B. Più di 200 ma meno di 300 (201 a 299) -> 0.20 a copia
    // Nota: Ho interpretato "meno di 300" come < 300
    else if (copie < 300) {
        commissione = 0.20f;
    }
    // C. 300 o più (>= 300) -> 0.30 a copia
    // Ho corretto la tua indicazione da "3000 copie o più" a "300 copie o più" per coerenza logica con le fasce precedenti.
    // Se volessi usare 3000, l'istruzione sarebbe 'else if (copie >= 3000)' e ci sarebbe una fascia vuota tra 300 e 2999.
    else { 
        commissione = 0.30f;
    }
    
    return (float)copie * commissione;
}

int main() {
    char nomi_quotidiani[NUMERO_QUOTIDIANI][LUNGHEZZA_MAX_NOME];
    int copie_vendute[NUMERO_QUOTIDIANI];
    float guadagno_totale = 0.0f;
    int i;

    printf("--- Calcolo del Guadagno dell'Edicolante ---\n");
    printf("Tariffe di commissione:\n");
    printf("- Fino a 200 copie: 0.10 EUR/copia\n");
    printf("- Da 201 a 299 copie: 0.20 EUR/copia\n");
    printf("- 300 o più copie: 0.30 EUR/copia\n");
    printf("--------------------------------------------\n");


    // 1. Input dei dati
    for (i = 0; i < NUMERO_QUOTIDIANI; i++) {
        printf("\nQuotidiano %d:\n", i + 1);
        
        // Input Nome
        printf("Inserisci il nome del quotidiano: ");
        // Uso scanf con %s e una limitazione per evitare buffer overflow
        if (scanf("%49s", nomi_quotidiani[i]) != 1) {
             printf("Errore di input o nome troppo lungo. Uscita.\n");
             return 1;
        }

        // Input Copie Vendute
        printf("Inserisci il numero di copie vendute: ");
        if (scanf("%d", &copie_vendute[i]) != 1 || copie_vendute[i] < 0) {
             printf("Errore di input: Il numero di copie deve essere un intero non negativo. Uscita.\n");
             return 1;
        }
    }

    // 2. Output e Calcolo
    printf("\n\n--- Riepilogo Vendite e Guadagno ---\n");
    printf("-------------------------------------\n");
    printf("%-20s %10s %10s\n", "QUOTIDIANO", "COPIE", "GUADAGNO (€)");
    printf("-------------------------------------\n");

    for (i = 0; i < NUMERO_QUOTIDIANI; i++) {
        // Calcolo il guadagno utilizzando la funzione
        float guadagno_quotidiano = calcola_guadagno(copie_vendute[i]);
        
        // Stampo il nome, le copie e il guadagno
        printf("%-20s %10d %10.2f\n", 
               nomi_quotidiani[i], 
               copie_vendute[i], 
               guadagno_quotidiano);
               
        // Aggiorno il guadagno totale
        guadagno_totale += guadagno_quotidiano;
    }

    printf("-------------------------------------\n");
    printf("%-31s %10.2f\n", "GUADAGNO TOTALE COMPLESSIVO:", guadagno_totale);
    printf("-------------------------------------\n");

    return 0;
}