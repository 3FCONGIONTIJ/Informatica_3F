#include <iostream>
#include <string> 
using namespace std;

class Arma {
private:    
    string nome;
    int danno;
public:
    Arma(string nome, int danno) {
        this->nome = nome;
        this->danno = danno;
    }

    string getNome() { return nome; }
    int getDanno() { return danno; }
};

class Personaggio {
private:
    string nome;
    int salute;
    Arma* arma;
public:
    Personaggio(string nome, int salute, Arma* arma) {
        this->nome = nome;
        this->salute = salute;
        this->arma = arma;
    }

    // Aggiungiamo un Getter per la salute
    int getSalute() { return salute; }
    string getNome() { return nome; }

    void riceviDanno(int danno) {
        salute -= danno;
        if (salute < 0) salute = 0; // Evitiamo salute negativa
    }

    void attacca(Personaggio* bersaglio) {
        if (arma != nullptr && bersaglio != nullptr) {
            // Invece di modificare direttamente la variabile dell'altro,
            // chiamiamo un metodo del bersaglio. È più elegante!
            bersaglio->riceviDanno(arma->getDanno());
            
            cout << nome << " attacca " << bersaglio->getNome() 
                 << " con " << arma->getNome() 
                 << " causando " << arma->getDanno() << " danni!" << endl;
        }
    }
};

int main() {
    // Creazione oggetti
    Arma* spada = new Arma("Spada", 25);
    Arma* arco = new Arma("Arco", 15);

    Personaggio* eroe = new Personaggio("Eroe", 100, spada);
    Personaggio* mostro = new Personaggio("Mostro", 80, arco);

    // Azione
    eroe->attacca(mostro);
    
    // Usiamo il getter getSalute() invece di mostro->salute
    cout << "Salute del Mostro dopo l'attacco: " << mostro->getSalute() << endl;

    // Pulizia della memoria
    delete spada;
    delete arco;
    delete eroe;
    delete mostro;

    return 0;
}