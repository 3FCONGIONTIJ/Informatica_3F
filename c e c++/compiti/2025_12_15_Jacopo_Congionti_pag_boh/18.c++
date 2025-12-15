#include <iostream>
#include <string>
using namespace std;

void residence (string lenzuola_str, int settimana) { 
    int servizio = 0; 
    
    if (lenzuola_str == "si") {
        servizio = 20; 
    } 
    
    float prezzo;

    if (settimana == 1) {
        prezzo = 600 + 100 + servizio; 
        cout << "prezzo totale: " << prezzo << "$" << endl;
    } else {
        prezzo = 1100 + 100 + servizio;
        cout << "prezzo totale: " << prezzo << "$" << endl;
    }
}

int main() {
    int n_settimana;
    cout << "inserire il numero di settimane di soggiorno: "; 
    cin >> n_settimana;
    
    string scelta_lenzuola;
    cout << "richiedi il servizio lenzuola? (si/no): "; 
    cin >> scelta_lenzuola;
    
    residence(scelta_lenzuola, n_settimana); 
    
    return 0; 
}