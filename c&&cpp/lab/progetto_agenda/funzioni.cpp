#include "agenda.h"
using namespace std;

// Inserisce un contatto mantenendo l'ordine alfabetico per nome
void inserimentoOrdinato(Contatto agenda[], int &n, Contatto nuovo) {
    if (n >= MAX_CONTATTI) {
        cout << "Errore: Agenda piena!\n";
        return;
    }

    int i = n - 1;
    // Sposta gli elementi a destra finché non trova la posizione corretta
    while (i >= 0 && agenda[i].nome > nuovo.nome) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    
    agenda[i + 1] = nuovo;
    n++;
}

// Algoritmo di ricerca binaria (dicotomica)
int ricercaBinaria(Contatto agenda[], int n, string nomeCercato) {
    int sinistra = 0;
    int destra = n - 1;

    while (sinistra <= destra) {
        int medio = sinistra + (destra - sinistra) / 2;

        if (agenda[medio].nome == nomeCercato)
            return medio; // Trovato

        if (agenda[medio].nome < nomeCercato)
            sinistra = medio + 1;
        else
            destra = medio - 1;
    }

    return -1; // Non trovato
}

void visualizzaAgenda(Contatto agenda[], int n) {
    cout << "\n--- Elenco Contatti (Ordinati) ---\n";
    for (int i = 0; i < n; i++) {
        cout << i << ". " << agenda[i].nome << " - " << agenda[i].telefono << "\n";
    }
}