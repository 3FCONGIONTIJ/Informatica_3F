#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. BUBBLE SORT RICORSIVO
void bubbleSortRicorsivo(vector<string>& v, int n) {
    // Caso base: se la dimensione da ordinare è 1, abbiamo finito
    if (n == 1) return;

    // Un passaggio del bubble sort: sposta il "più grande" alla fine del segmento attuale
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            // Scambio manuale senza utility
            string temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }

    // Passo ricorsivo: ordina i primi n-1 elementi
    bubbleSortRicorsivo(v, n - 1);
}

// 2. RICERCA DICOTOMICA RICORSIVA
int ricercaDicotomicaRicorsiva(const vector<string>& v, int inizio, int fine, string bersaglio) {
    // Caso base 1: l'elemento non esiste (area di ricerca esaurita)
    if (inizio > fine) return -1;

    int medio = inizio + (fine - inizio) / 2;

    // Caso base 2: elemento trovato!
    if (v[medio] == bersaglio) return medio;

    // Passo ricorsivo: decidiamo in quale metà cercare
    if (v[medio] < bersaglio) {
        // Cerca nella metà destra
        return ricercaDicotomicaRicorsiva(v, medio + 1, fine, bersaglio);
    } else {
        // Cerca nella metà sinistra
        return ricercaDicotomicaRicorsiva(v, inizio, medio - 1, bersaglio);
    }
}

int main() {
    vector<string> nomi = {"Pippo", "Pluto", "Paperino", "Topolino", "Minni"};

    // A. Ordinamento (Passiamo la dimensione iniziale)
    bubbleSortRicorsivo(nomi, nomi.size());

    cout << "Vettore ordinato ricorsivamente: ";
    for (const string& s : nomi) cout << s << " ";
    cout << "\n" << endl;

    // B. Input utente
    string daCercare;
    cout << "Quale nome vuoi cercare? ";
    cin >> daCercare;

    // C. Ricerca (Passiamo inizio 0 e fine size-1)
    int risultato = ricercaDicotomicaRicorsiva(nomi, 0, nomi.size() - 1, daCercare);

    if (risultato != -1) {
        cout << "Elemento '" << daCercare << "' trovato all'indice: " << risultato << endl;
    } else {
        cout << "Elemento non trovato." << endl;
    }

    return 0;
}