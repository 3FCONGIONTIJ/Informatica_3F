#include "gestore_contatti.h"
#include <iostream>

using namespace std;

int main() {
    // Usiamo GestoreMirroredRAM invece di GestoreRAMOrdinata
    GestoreContatti* miaAgenda = new GestoreMirroredRAM(); 
    
    int scelta;
    do {
        cout << "\n1. Aggiungi\n2. Cerca\n3. Mostra\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            char n[50], t[20];
            cout << "Nome: "; cin >> n;
            cout << "Tel: "; cin >> t;
            miaAgenda->inserimentoOrdinato(Contatto(n, t));
        } 
        else if (scelta == 2) {
            char n[50];
            cout << "Cerca nome: "; cin >> n;
            int pos = miaAgenda->ricercaBinaria(n);
            if (pos != -1) cout << "Trovato!\n";
            else cout << "Non trovato.\n";
        }
        else if (scelta == 3) {
            miaAgenda->visualizzaAgenda();
        }

    } while (scelta != 0);

    delete miaAgenda; // QUI scatta il distruttore e salva il file!
    return 0;
}