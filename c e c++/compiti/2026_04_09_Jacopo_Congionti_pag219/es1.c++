#include <iostream>
#include <string>
using namespace std;

int main() {
    int qta;

    cout << "Inserisci il numero di persone: ";
    cin >> qta;

    string lista_cognomi[100], residenza[100], recapito[100];
    int gg_nascita[100], mm_nascita[100];

    for (int i = 0; i < qta; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Cognome: ";
        cin >> lista_cognomi[i];

        cout << "Città di residenza: ";
        cin >> residenza[i];

        cout << "Telefono: ";
        cin >> recapito[i];

        cout << "Giorno di nascita: ";
        cin >> gg_nascita[i];

        cout << "Mese di nascita: ";
        cin >> mm_nascita[i];
    }

    string cerca_citta;
    cout << "\nInserisci una città da cercare: ";
    cin >> cerca_citta;

    cout << "Residenti a " << cerca_citta << " nati in agosto:" << endl;
    for (int i = 0; i < qta; i++) {
        if (residenza[i] == cerca_citta && mm_nascita[i] == 8) {
            cout << lista_cognomi[i] << endl;
        }
    }

    string cerca_tel;
    cout << "\nInserisci un numero di telefono da cercare: ";
    cin >> cerca_tel;

    for (int i = 0; i < qta; i++) {
        if (recapito[i] == cerca_tel) {
            cout << "Dati della persona trovata:" << endl;
            cout << "Cognome: " << lista_cognomi[i] << endl;
            cout << "Citta': " << residenza[i] << endl;
            cout << "Telefono: " << recapito[i] << endl;
            cout << "Data di nascita: " << gg_nascita[i] << "/" << mm_nascita[i] << endl;
        }
    }

    string cerca_cognome;
    cout << "\nInserisci il cognome da cercare: ";
    cin >> cerca_cognome;

    for (int i = 0; i < qta; i++) {
        if (lista_cognomi[i] == cerca_cognome) {
            cout << "Numero telefonico di " << lista_cognomi[i] << ": " << recapito[i] << endl;
        }
    }

    int oggi_gg, oggi_mm;
    cout << "\nInserisci il giorno corrente: ";
    cin >> oggi_gg;
    cout << "Inserisci il mese corrente: ";
    cin >> oggi_mm;

    for (int i = 0; i < qta; i++) {
        if (gg_nascita[i] == oggi_gg && mm_nascita[i] == oggi_mm) {
            cout << "Buon compleanno a " << lista_cognomi[i] << "!" << endl;
        }
    }

    return 0;
}