#include "gestore_contatti.h"
#include <iostream>

using namespace std;

int main() {
    GestoreContatti miaAgenda; //creazione oggetto normale
    int scelta;

    do {
        cout << "\n1. Aggiungi Contatto\n2. Cerca Contatto\n3. Mostra Tutti\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            char nomeInput[50];
            char telInput[20];
            
            cout << "Nome: "; 
            cin >> nomeInput; 
            cout << "Telefono: "; 
            cin >> telInput; 
            
            Contatto c(nomeInput, telInput);
            miaAgenda.inserimentoOrdinato(c);
        } 
        else if (scelta == 2) {
            char nome[50];
            cout << "Inserisci nome da cercare: "; 
            cin >> nome;
            
            int pos = miaAgenda.ricercaBinaria(nome);
            if (pos != -1)
                cout << "Trovato! (Indice interno: " << pos << ")\n";
            else
                cout << "Contatto non trovato.\n";
        }
        else if (scelta == 3) {
            miaAgenda.visualizzaAgenda();
        }

    } while (scelta != 0);

    return 0;
}