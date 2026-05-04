#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void controllaPosizioniPari() {
    int v[10];
    bool ok = true;

    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }

    for (int i = 0; i < 10; i += 2) {
        if (v[i] % 2 != 0) {
            ok = false;
        }
    }

    if (ok)
        cout << "Nelle posizioni pari ci sono solo numeri pari." << endl;
    else
        cout << "Nelle posizioni pari NON ci sono solo numeri pari." << endl;
}

void stampaNumeriPrimi() {
    int n;

    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Numeri primi:" << endl;

    for (int i = 0; i < n; i++) {
        int divisori = 0;

        if (v[i] > 1) {
            for (int j = 1; j <= v[i]; j++) {
                if (v[i] % j == 0) {
                    divisori++;
                }
            }

            if (divisori == 2) {
                cout << v[i] << " ";
            }
        }
    }
    cout << endl;
}

void convertiInBinario() {
    int n;

    cout << "Inserisci un numero intero positivo: ";
    cin >> n;

    int binario[100];
    int i = 0;

    if (n == 0) {
        cout << "Binario: 0" << endl;
        return;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binario: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binario[j];
    }
    cout << endl;
}

void calcolaFrequenze() {
    int v[100];
    int frequenza[21] = {0};

    srand(time(0));

    for (int i = 0; i < 100; i++) {
        v[i] = rand() % 20 + 1;
        frequenza[v[i]]++;
    }

    cout << "Vettore generato:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "Il numero " << i << " compare " << frequenza[i] << " volte." << endl;
    }
}

void cercaAtleti() {
    int n1, n2;
    
    cout << "Quanti nomi nel primo vettore? ";
    cin >> n1;
    string a1[n1];

    for (int i = 0; i < n1; i++) {
        cout << "Nome atleta " << i + 1 << " del primo vettore: ";
        cin >> a1[i];
    }

    cout << "Quanti nomi nel secondo vettore? ";
    cin >> n2;
    string a2[n2];

    for (int i = 0; i < n2; i++) {
        cout << "Nome atleta " << i + 1 << " del secondo vettore: ";
        cin >> a2[i];
    }

    string nome;
    bool inA1 = false, inA2 = false;

    cout << "Inserisci il nome da cercare: ";
    cin >> nome;

    for (int i = 0; i < n1; i++) {
        if (a1[i] == nome) {
            inA1 = true;
        }
    }

    for (int i = 0; i < n2; i++) {
        if (a2[i] == nome) {
            inA2 = true;
        }
    }

    if (inA1 && inA2)
        cout << "Il nome compare in entrambi i vettori." << endl;
    else if (inA1)
        cout << "Il nome compare solo nel primo vettore." << endl;
    else if (inA2)
        cout << "Il nome compare solo nel secondo vettore." << endl;
    else
        cout << "Il nome non compare in nessuno dei due vettori." << endl;
}

int main() {
    cout << "--- PROGRAMMA 1 (Controllo posizioni pari) ---" << endl;
    controllaPosizioniPari();
    cout << endl;

    cout << "--- PROGRAMMA 2 (Numeri Primi) ---" << endl;
    stampaNumeriPrimi();
    cout << endl;

    cout << "--- PROGRAMMA 3 (Conversione Binaria) ---" << endl;
    convertiInBinario();
    cout << endl;

    cout << "--- PROGRAMMA 4 (Frequenza Numeri Casuali) ---" << endl;
    calcolaFrequenze();
    cout << endl;

    cout << "--- PROGRAMMA 5 (Ricerca Atleti) ---" << endl;
    cercaAtleti();
    cout << endl;

    return 0;
}