#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void analizzaGrigliaCasuale() {
    int tabellaNumeri[10][10];
    int totaleZeri = 0;

    srand(time(0));

    for (int riga = 0; riga < 10; riga++) {
        for (int colonna = 0; colonna < 10; colonna++) {
            tabellaNumeri[riga][colonna] = rand() % 10;

            if (tabellaNumeri[riga][colonna] == 0) {
                totaleZeri++;
            }
        }
    }

    cout << "Matrice generata:\n";
    for (int riga = 0; riga < 10; riga++) {
        for (int colonna = 0; colonna < 10; colonna++) {
            cout << tabellaNumeri[riga][colonna] << " ";
        }
        cout << endl;
    }

    cout << "Quantità di zeri presenti: " << totaleZeri << endl;
}

void generaTabellaPitagorica() {
    int grandezza;

    cout << "Inserisci la dimensione della matrice: ";
    cin >> grandezza;

    int grigliaPitagorica[100][100];

    for (int riga = 0; riga < grandezza; riga++) {
        for (int colonna = 0; colonna < grandezza; colonna++) {
            grigliaPitagorica[riga][colonna] = (riga + 1) * (colonna + 1);
        }
    }

    cout << "Tavola pitagorica:\n";
    for (int riga = 0; riga < grandezza; riga++) {
        for (int colonna = 0; colonna < grandezza; colonna++) {
            cout << grigliaPitagorica[riga][colonna] << "\t";
        }
        cout << endl;
    }
}

void calcolaSommaIndici() {
    int numeroRighe, numeroColonne;

    cout << "Inserisci il numero di righe: ";
    cin >> numeroRighe;
    cout << "Inserisci il numero di colonne: ";
    cin >> numeroColonne;

    int schemaSomma[100][100];

    for (int riga = 0; riga < numeroRighe; riga++) {
        for (int colonna = 0; colonna < numeroColonne; colonna++) {
            schemaSomma[riga][colonna] = riga + colonna;
        }
    }

    cout << "Matrice delle somme:\n";
    for (int riga = 0; riga < numeroRighe; riga++) {
        for (int colonna = 0; colonna < numeroColonne; colonna++) {
            cout << schemaSomma[riga][colonna] << " ";
        }
        cout << endl;
    }
}

void creaMatriceIdentita() {
    int ampiezza;

    cout << "Inserisci la grandezza della matrice quadrata: ";
    cin >> ampiezza;

    int schemaIdentita[100][100];

    for (int riga = 0; riga < ampiezza; riga++) {
        for (int colonna = 0; colonna < ampiezza; colonna++) {
            if (riga == colonna) {
                schemaIdentita[riga][colonna] = 1;
            } else {
                schemaIdentita[riga][colonna] = 0;
            }
        }
    }

    cout << "Matrice identità:\n";
    for (int riga = 0; riga < ampiezza; riga++) {
        for (int colonna = 0; colonna < ampiezza; colonna++) {
            cout << schemaIdentita[riga][colonna] << " ";
        }
        cout << endl;
    }
}

int main() {
    int selezione;

    do {
        cout << "\nMenu principale:\n";
        cout << "1. Genera matrice casuale e conta zeri\n";
        cout << "2. Stampa tavola pitagorica\n";
        cout << "3. Crea matrice con somma degli indici\n";
        cout << "4. Genera matrice identità\n";
        cout << "0. Esci dal programma\n";
        cout << "Fai una scelta: ";
        cin >> selezione;

        switch (selezione) {
            case 1:
                analizzaGrigliaCasuale();
                break;
            case 2:
                generaTabellaPitagorica();
                break;
            case 3:
                calcolaSommaIndici();
                break;
            case 4:
                creaMatriceIdentita();
                break;
            case 0:
                cout << "Chiusura in corso...\n";
                break;
            default:
                cout << "Selezione non valida, riprova.\n";
        }
    } while (selezione != 0);

    return 0;
}