#include "gestore_contatti.h"

using namespace std;

// Inizializzazione dell'agenda
GestoreContatti::GestoreContatti() {
    numContatti = 0;
}

// Inserimento mantenendo l'ordine
void GestoreContatti::inserimentoOrdinato(Contatto nuovo) {
    if (numContatti >= MAX_CONTATTI) {
        cout << "Errore: Agenda piena!\n";
        return;
    }

    int i = numContatti - 1;
    while (i >= 0 && agenda[i].getNome() > nuovo.getNome()) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    
    agenda[i + 1] = nuovo;
    numContatti++;
}

// Ricerca binaria all'interno dell'oggetto
int GestoreContatti::ricercaBinaria(string nomeCercato) {
    int sinistra = 0;
    int destra = numContatti - 1;

    while (sinistra <= destra) {
        int medio = sinistra + (destra - sinistra) / 2;

        if (agenda[medio].getNome() == nomeCercato)
            return medio;

        if (agenda[medio].getNome() < nomeCercato)
            sinistra = medio + 1;
        else
            destra = medio - 1;
    }
    return -1;
}

// Visualizzazione dell'elenco
void GestoreContatti::visualizzaAgenda() {
    cout << "\n--- Elenco Contatti (GestoreContatti) ---\n";
    for (int i = 0; i < numContatti; i++) {
        cout << i << ". " << agenda[i].getNome() << " - " << agenda[i].getTelefono() << "\n";
    }
}