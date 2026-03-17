#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void calcolaStipendi() {
    int n;
    cout << "Inserisci il numero di dipendenti: ";
    cin >> n;

    int stipendi[n];

    for(int i = 0; i < n; i++){
        cout << "Stipendio dipendente " << i+1 << ": ";
        cin >> stipendi[i];
    }

    int max = -1;        
    int min = 10000;    

    for(int i = 0; i < n; i++){
        if(stipendi[i] >= 1500 && stipendi[i] <= 2000){
            if(stipendi[i] > max){
                max = stipendi[i];
            }
            if(stipendi[i] < min){
                min = stipendi[i];
            }
        }
    }

    if(max == -1){
        cout << "Nessuno stipendio nell'intervallo 1500-2000" << endl;
    } else {
        cout << "Stipendio massimo: " << max << endl;
        cout << "Stipendio minimo: " << min << endl;
    }
}

void sommaPariDispari() {
    int n;
    cout << "Inserisci un numero: ";
    cin >> n;

    int numeri[n];

    for(int i = 0; i < n; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> numeri[i];
    }

    int somma_pari = 0;
    int somma_dispari = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){   
            somma_pari += numeri[i];
        } else {          
            somma_dispari += numeri[i];
        }
    }

    cout << "Somma posizioni pari: " << somma_pari << endl;
    cout << "Somma posizioni dispari: " << somma_dispari << endl;
}

void coppieConsecutive() {
    int n;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
    }

    int cont = 0;

    for(int i = 1; i < n; i++){
        if(v[i] == v[i-1]){
            cont++;
        }
    }

    cout << "Coppie consecutive uguali: " << cont << endl;
}

void numeriCasuali() {
    int v[20];
    bool trovato = false;

    srand(time(0));

    for(int i = 0; i < 20; i++){
        v[i] = rand() % 100 + 1;  
        cout << v[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 20; i++){
        if(v[i] < 10){
            trovato = true;
        }
    }

    if(trovato)
        cout << "Esiste almeno un numero minore di 10" << endl;
    else
        cout << "NON esiste alcun numero minore di 10" << endl;
}

void analizzaVoti() {
    int n;
    float voti[100];
    int cont_insufficienti = 0;
    float somma = 0;

    cout << "Quanti voti vuoi inserire? ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Voto " << i+1 << ": ";
        cin >> voti[i];
        somma += voti[i];   
    }

    cout << "\nVoti insufficienti:\n";

    for(int i = 0; i < n; i++){
        if(voti[i] < 6){
            cout << voti[i] << " ";
            cont_insufficienti++;
        }
    }

    float media = somma / n;

    cout << "\nNumero voti insufficienti: " << cont_insufficienti << endl;
    cout << "Media: " << media << endl;
}

int main() {
    
    cout << "--- ESECUZIONE PROGRAMMA 1 (Stipendi) ---" << endl;
    calcolaStipendi();
    cout << endl;

    cout << "--- ESECUZIONE PROGRAMMA 2 (Somma Pari/Dispari) ---" << endl;
    sommaPariDispari();
    cout << endl;

    cout << "--- ESECUZIONE PROGRAMMA 3 (Coppie Consecutive) ---" << endl;
    coppieConsecutive();
    cout << endl;

    cout << "--- ESECUZIONE PROGRAMMA 4 (Numeri Casuali) ---" << endl;
    numeriCasuali();
    cout << endl;

    cout << "--- ESECUZIONE PROGRAMMA 5 (Analisi Voti) ---" << endl;
    analizzaVoti();
    cout << endl;

    return 0;
}