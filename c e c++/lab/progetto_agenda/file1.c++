#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Contatto {
    string nome;
    string età;
    string cognome;
};

void aggiungiContatto(vector<Contatto> &agenda, string n, string e, string c) {
    Contatto nuovo;
    nuovo.nome = n;
    nuovo.età = e;
    nuovo.cognome = c;
    agenda.push_back(nuovo);
}

int ricercaSequenziale(vector<Contatto> &agenda, string daTrovare) {
    for (int i = 0; i < agenda.size(); i++) {
        if (agenda[i].nome == daTrovare) {
            return i; 
        }
    }
    return -1;
}
 int r=1;
int main() {
    do { 
    int Ncontatti;
    int scelta;
    string daTrovare;
    vector<Contatto> agenda;
    for (int i = 1; i <= 10; i++) {
        aggiungiContatto(agenda, "Contatto_" + to_string(i), "20", "Cognome_" + to_string(i));
        Ncontatti=i;
    }
    cout << "10 contatti caricati in RAM." << endl;
    cout << "dimensione attuale agenda: " << agenda.size() << endl;
    cout <<"1.vuoi aggiungere un contatto?"<<endl;
    cout <<"2.ricerca un contatto"<<endl;
    cin>>scelta;
    if (scelta==1){
        string n, e, c;
        cout << "Nome: "; cin >> n;
        cout << "Eta': "; cin >> e;
        cout << "Cognome: "; cin >> c;
        aggiungiContatto(agenda, n, e, c);
        cout << "Contatto inserito correttamente." << endl;
        cout << "Nuova dimensione: " << agenda.size() << endl;
    }else if (scelta==2){
        cout << "Inserisci nome da cercare: ";
        cin>>daTrovare;
        int pos = ricercaSequenziale(agenda, daTrovare);
        if (pos != -1) {
            cout << "\ncontatto trovato!" << endl;
        } else {
            cout << "\ncontatto non trovato." << endl;
        }
    }else{
        cout <<"errore"<<endl;
    }
    cout<<"vuoi continuare? 1=si 0=no"<<endl;
    cin>>r;
    } while (r=1);

}