#include <iostream>
using namespace std;
void biglietto (int peso_Bagaglio, int prezzo_norm) {
    if (peso_Bagaglio > 20) {   
        float peso_extra = peso_Bagaglio - 20;
        float prezzo_extra = peso_extra * (prezzo_norm * 0.02);
        float prezzo_tot = prezzo_norm + prezzo_extra;
        cout << "prezzo totale: " << prezzo_tot << "$" << endl; 
 } 
    else {
        cout << "prezzo totale: " << prezzo_norm << "$" << endl; 
    }  
}
 int main() {
    int peso_Bagaglio;
    cout << "inserire peso bagaglio: ";
    cin >> peso_Bagaglio;
    int prezzo_norm;
    cout << "inserire prezzo normale biglietto: ";
    cin >> prezzo_norm;
    biglietto(peso_Bagaglio, prezzo_norm);
    return 0;
 }