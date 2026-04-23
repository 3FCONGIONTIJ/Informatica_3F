#include "agenda.h"
using namespace std;

int main() {
    Contatto agenda[MAX_CONTATTI];
    int numContatti = 0;
    int scelta;

    do {
        cout << "\n1. Aggiungi Contatto\n2. Cerca Contatto (Ricerca Binaria)\n3. Mostra Tutti\n0. Esci\nScelta: ";
        cin >> scelta;
        cin.ignore(); // Pulisce il buffer

        if (scelta == 1) {
            Contatto c;
            cout << "Nome: "; getline(std::cin, c.nome);
            cout << "Telefono: "; getline(std::cin, c.telefono);
            inserimentoOrdinato(agenda, numContatti, c);
        } 
        else if (scelta == 2) {
            string nome;
            cout << "Inserisci nome da cercare: "; getline(std::cin, nome);
            int pos = ricercaBinaria(agenda, numContatti, nome);
            if (pos != -1)
                cout << "Trovato! Telefono: " << agenda[pos].telefono << "\n";
            else
                cout << "Contatto non trovato.\n";
        }
        else if (scelta == 3) {
            visualizzaAgenda(agenda, numContatti);
        }

    } while (scelta != 0);

    return 0;
}