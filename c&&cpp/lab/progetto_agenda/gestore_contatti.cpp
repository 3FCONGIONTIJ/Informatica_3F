#include "gestore_contatti.h"
#include <iostream>
#include <cstring> // Necessario per strcmp

using namespace std;

GestoreContatti::GestoreContatti() {
    numContatti = 0;
}

void GestoreContatti::inserimentoOrdinato(Contatto nuovo) {
    if (numContatti >= MAX_CONTATTI) {
        cout << "Errore: Agenda piena!\n";
        return;
    }

   for (int i = numContatti - 1; i >= 0 && strcmp(agenda[i].getNome(), nuovo.getNome()) > 0; i--) {
    agenda[i + 1] = agenda[i];
}   agenda[i + 1] = nuovo;
    numContatti++; 
}
int GestoreContatti::ricercaBinaria(const char* nomeCercato) {
    int sx = 0;
    int dx = numContatti - 1;

    while (sx <= dx) {
        int medio = sx + (dx - sx) / 2;
        int comparazione = strcmp(agenda[medio].getNome(), nomeCercato);

        if (comparazione == 0)
            return medio; // Trovato

        if (comparazione < 0)
            sx = medio + 1; // nomeCercato viene "dopo"
        else
            dx = medio - 1; // nomeCercato viene "prima"
    }
    return -1;
}

void GestoreContatti::visualizzaAgenda() {
    cout << "\n--- Elenco Contatti (Gestore) ---\n";
    for (int i = 0; i < numContatti; i++) {
        cout << i << ". " << agenda[i].getNome() << " - " << agenda[i].getTelefono() << "\n";
    }
}