#include <iostream>
#include <string>

using namespace std;

long long minsecondi(int ore, const string& tipoConversione) {
    long long risultato = 0;
    
    if (tipoConversione == "minuti") {
        risultato = (long long)ore * 60;
    } else if (tipoConversione == "secondi") {
        risultato = (long long)ore * 60 * 60;
    } else {
        risultato = -1;
    }

    return risultato;
}

int main() {
    int oreInput;
    string sceltaConversione;

    cout << "Inserisci il numero di ore da convertire: ";
    if (!(cin >> oreInput) || oreInput < 0) {
        cout << "Input ore non valido. Uscita dal programma." << endl;
        return 1;
    }
    
    cout << "Vuoi convertire le ore in 'minuti' o in 'secondi'? Inserisci la tua scelta (deve essere in minuscolo): ";
    cin >> sceltaConversione;

    long long risultato = minsecondi(oreInput, sceltaConversione);

    if (risultato == -1) {
        cout << "Scelta di conversione non valida. Inserisci esattamente 'minuti' o 'secondi'." << endl;
    } else {
        cout << oreInput << " ore convertite in " << sceltaConversione << " sono: " << risultato << endl;
    }

    return 0;
}