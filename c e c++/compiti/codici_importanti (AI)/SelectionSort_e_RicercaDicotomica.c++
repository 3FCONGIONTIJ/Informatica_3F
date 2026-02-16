#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. SELECTION SORT RICORSIVO
void selectionSortRicorsivo(vector<string>& v, int inizio) {
    int n = v.size();

    // CASO BASE: Se abbiamo raggiunto la fine del vettore, è tutto ordinato
    if (inizio >= n - 1) return;

    // 1. Fase di SELEZIONE: cerchiamo l'indice della parola "minima"
    int indiceMinimo = inizio;
    for (int j = inizio + 1; j < n; j++) {
        // Confronto alfabetico
        if (v[j] < v[indiceMinimo]) {
            indiceMinimo = j;
        }
    }

    // 2. Fase di SCAMBIO: se il minimo non è già in posizione 'inizio'
    if (indiceMinimo != inizio) {
        string temp = v[inizio];
        v[inizio] = v[indiceMinimo];
        v[indiceMinimo] = temp;
    }

    // 3. PASSO RICORSIVO: ripeti per il resto del vettore (indice + 1)
    selectionSortRicorsivo(v, inizio + 1);
}

// 2. RICERCA DICOTOMICA RICORSIVA
int ricercaDicotomicaRicorsiva(const vector<string>& v, int inizio, int fine, string bersaglio) {
    if (inizio > fine) return -1; // Caso base: non trovato

    int medio = inizio + (fine - inizio) / 2;

    if (v[medio] == bersaglio) return medio; // Caso base: trovato

    if (v[medio] < bersaglio) {
        return ricercaDicotomicaRicorsiva(v, medio + 1, fine, bersaglio);
    } else {
        return ricercaDicotomicaRicorsiva(v, inizio, medio - 1, bersaglio);
    }
}

int main() {
    vector<string> nomi = {"Zaira", "Berto", "Carlo", "Attilio", "Dario"};

    // A. Ordinamento ricorsivo (partendo dall'indice 0)
    selectionSortRicorsivo(nomi, 0);

    cout << "Vettore ordinato con Selection Sort: ";
    for (const string& s : nomi) cout << s << " ";
    cout << endl;

    // B. Ricerca
    string daCercare;
    cout << "Chi vuoi cercare? ";
    cin >> daCercare;

    int pos = ricercaDicotomicaRicorsiva(nomi, 0, nomi.size() - 1, daCercare);

    if (pos != -1) {
        cout << "Trovato all'indice: " << pos << endl;
    } else {
        cout << "Nome non presente." << endl;
    }

    return 0;
}