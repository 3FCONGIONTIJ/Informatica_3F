#include "gestore_contatti.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Creazione del gestore (chiama automaticamente il costruttore)
    GestoreContatti miaAgenda;
    int scelta;

    do {
        cout << "\n1. Aggiungi Contatto\n2. Cerca Contatto\n3. Mostra Tutti\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            string n, t;
            cout << "Nome: "; cin >> n;
            cout << "Telefono: "; cin >> t;
            
            Contatto c(n, t);
            miaAgenda.inserimentoOrdinato(c); // Chiamata al metodo dell'oggetto
        } 
        else if (scelta == 2) {
            string nome;
            cout << "Inserisci nome da cercare: "; cin >> nome;
            
            int pos = miaAgenda.ricercaBinaria(nome);
            // Nota: per accedere al telefono dobbiamo comunque usare i metodi di Contatto
            // ma l'indice lo ricaviamo dal gestore.
            if (pos != -1)
                cout << "Trovato!\n"; 
            else
                cout << "Contatto non trovato.\n";
        }
        else if (scelta == 3) {
            miaAgenda.visualizzaAgenda();
        }

    } while (scelta != 0);

    return 0;
}