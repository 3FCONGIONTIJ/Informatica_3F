#include <iostream>
#include <string>
using namespace std;

struct Prodotto {
    string nome;
    float prezzo;
};

// Funzione per aggiungere un prodotto
// Usiamo il riferimento (&) per il conteggio così si aggiorna anche nel main
void aggiungiProdotto(Prodotto inventario[], int &conteggio, int limiteMassimo) {
    if (conteggio < limiteMassimo) {
        string nomeNuovo;
        float prezzoNuovo;

        cout << "\nInserisci il nome del nuovo prodotto: ";
        cin >> nomeNuovo;
        cout << "Inserisci il prezzo: ";
        cin >> prezzoNuovo;

        // Inseriamo i dati nella prima posizione libera (quella indicata da conteggio)
        inventario[conteggio].nome = nomeNuovo;
        inventario[conteggio].prezzo = prezzoNuovo;

        // Incrementiamo il conteggio così il prossimo prodotto andrà nella cella successiva
        conteggio++;
        cout << "Prodotto aggiunto con successo!" << endl;
    } else {
        cout << "\nErrore: Il magazzino è pieno!" << endl;
    }
}

void stampaMagazzino(Prodotto inventario[], int conteggio) {
    cout << "\n--- STATO MAGAZZINO (" << conteggio << " prodotti) ---" << endl;
    for (int i = 0; i < conteggio; i++) {
        cout << i << ". " << inventario[i].nome << " | Prezzo: " << inventario[i].prezzo << " euro" << endl;
    }
}

int main() {
    const int MAX_PRODOTTI = 100;
    Prodotto magazzino[MAX_PRODOTTI]; // Array vuoto
    int numProdottiActuali = 0;       // All'inizio è vuoto

    int scelta;
    do {
        cout << "\n1. Aggiungi Prodotto\n2. Stampa Magazzino\n0. Esci\nScelta: ";
        cin >> scelta;

        if (scelta == 1) {
            aggiungiProdotto(magazzino, numProdottiActuali, MAX_PRODOTTI);
        } else if (scelta == 2) {
            stampaMagazzino(magazzino, numProdottiActuali);
        }

    } while (scelta != 0);

    return 0;
}