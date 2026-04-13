#include <iostream>
#include <string>
using namespace std;

int main() {
    int numPersone;

    cout << "inserisci il numero di persone: ";
    cin >> numPersone;

    string listaCognomi[100], listaCitta[100], listaTel[100];
    int ggNascita[100], mmNascita[100];

    for (int idx = 0; idx < numPersone; idx++) {
        cout << "\npersona " << idx + 1 << endl;

        cout << "cognome: ";
        cin >> listaCognomi[idx];

        cout << "città di residenza: ";
        cin >> listaCitta[idx];

        cout << "telefono: ";
        cin >> listaTel[idx];

        cout << "giorno di nascita: ";
        cin >> ggNascita[idx];

        cout << "mese di nascita: ";
        cin >> mmNascita[idx];
    }

    string targetCitta;
    cout << "\ninserisci una città da cercare: ";
    cin >> targetCitta;

    cout << "residenti a " << targetCitta << " nati in agosto:" << endl;
    for (int idx = 0; idx < numPersone; idx++) {
        if (listaCitta[idx] == targetCitta && mmNascita[idx] == 8) {
            cout << listaCognomi[idx] << endl;
        }
    }

    string cercaTel;
    cout << "\ninserisci un numero di telefono da cercare: ";
    cin >> cercaTel;

    for (int idx = 0; idx < numPersone; idx++) {
        if (listaTel[idx] == cercaTel) {
            cout << "dati della persona trovata:" << endl;
            cout << "cognome: " << listaCognomi[idx] << endl;
            cout << "citta': " << listaCitta[idx] << endl;
            cout << "telefono: " << listaTel[idx] << endl;
            cout << "data di nascita: " << ggNascita[idx] << "/" << mmNascita[idx] << endl;
        }
    }

    string cercaCognome;
    cout << "\ninserisci il cognome da cercare: ";
    cin >> cercaCognome;

    for (int idx = 0; idx < numPersone; idx++) {
        if (listaCognomi[idx] == cercaCognome) {
            cout << "numero telefonico di " << listaCognomi[idx] << ": " << listaTel[idx] << endl;
        }
    }

    int oggiGG, oggiMM;
    cout << "\ninserisci il giorno corrente: ";
    cin >> oggiGG;
    cout << "inserisci il mese corrente: ";
    cin >> oggiMM;

    for (int idx = 0; idx < numPersone; idx++) {
        if (ggNascita[idx] == oggiGG && mmNascita[idx] == oggiMM) {
            cout << "buon compleanno a " << listaCognomi[idx] << endl;
        }
    }

    return 0;
}