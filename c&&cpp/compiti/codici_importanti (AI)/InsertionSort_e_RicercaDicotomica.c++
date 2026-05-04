#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. INSERTION SORT RICORSIVO
void insertionSortRicorsivo(vector<string>& v, int n) {
    // CASO BASE: Se il vettore ha dimensione 1 o 0, è già ordinato
    if (n <= 1) return;

    // Ordina ricorsivamente i primi n-1 elementi
    insertionSortRicorsivo(v, n - 1);

    // Inseriamo l'ultimo elemento (v[n-1]) nella posizione corretta 
    // della parte già ordinata (da 0 a n-2)
    string ultimo = v[n - 1];
    int j = n - 2;

    // Spostiamo in avanti gli elementi maggiori di 'ultimo'
    while (j >= 0 && v[j] > ultimo) {
        v[j + 1] = v[j];
        j--;
    }
    // Inseriamo la parola nella sua posizione corretta
    v[j + 1] = ultimo;
}

// 2. RICERCA DICOTOMICA RICORSIVA
int ricercaDicotomicaRicorsiva(const vector<string>& v, int inizio, int fine, string bersaglio) {
    // CASO BASE 1: Elemento non trovato
    if (inizio > fine) return -1;

    int medio = inizio + (fine - inizio) / 2;

    // CASO BASE 2: Trovato!
    if (v[medio] == bersaglio) return medio;

    // PASSO RICORSIVO
    if (v[medio] < bersaglio) {
        return ricercaDicotomicaRicorsiva(v, medio + 1, fine, bersaglio);
    } else {
        return ricercaDicotomicaRicorsiva(v, inizio, medio - 1, bersaglio);
    }
}

int main() {
    vector<string> nomi = {"Zaino", "Albero", "Libro", "Dante", "Gatto"};

    // A. Ordinamento ricorsivo
    insertionSortRicorsivo(nomi, nomi.size());

    cout << "Vettore ordinato con Insertion Sort: ";
    for (const string& s : nomi) cout << s << " ";
    cout << endl;

    // B. Ricerca
    string daCercare;
    cout << "Cosa vuoi cercare? ";
    cin >> daCercare;

    int pos = ricercaDicotomicaRicorsiva(nomi, 0, nomi.size() - 1, daCercare);

    if (pos != -1) {
        cout << "Trovato all'indice: " << pos+1<< endl;
    } else {
        cout << "Elemento non trovato." << endl;
    }

    return 0;
}