#include <iostream>
#include <string>

using namespace std;

void generaMatriceDiagonali() {
    int latoQuadrato;
    cout << "Inserisci la dimensione della matrice quadrata: ";
    cin >> latoQuadrato;

    int matriceX[100][100];

    for (int indiceR = 0; indiceR < latoQuadrato; indiceR++) {
        for (int indiceC = 0; indiceC < latoQuadrato; indiceC++) {
            if (indiceR == indiceC || indiceR + indiceC == latoQuadrato - 1)
                matriceX[indiceR][indiceC] = 1;
            else
                matriceX[indiceR][indiceC] = 0;
        }
    }

    cout << "Matrice:\n";
    for (int indiceR = 0; indiceR < latoQuadrato; indiceR++) {
        for (int indiceC = 0; indiceC < latoQuadrato; indiceC++) {
            cout << matriceX[indiceR][indiceC] << " ";
        }
        cout << endl;
    }
}

void generaMatriceRighePari() {
    int qtaRighe, qtaColonne;
    cout << "Inserisci numero righe: ";
    cin >> qtaRighe;
    cout << "Inserisci numero colonne: ";
    cin >> qtaColonne;

    int tabellaPari[100][100];

    for (int r = 0; r < qtaRighe; r++) {
        for (int c = 0; c < qtaColonne; c++) {
            if (r % 2 == 0)
                tabellaPari[r][c] = 1;
            else
                tabellaPari[r][c] = 0;
        }
    }

    cout << "Matrice:\n";
    for (int r = 0; r < qtaRighe; r++) {
        for (int c = 0; c < qtaColonne; c++) {
            cout << tabellaPari[r][c] << " ";
        }
        cout << endl;
    }
}

void generaMatriceColonneDispari() {
    int maxRighe, maxColonne;
    cout << "Inserisci numero righe: ";
    cin >> maxRighe;
    cout << "Inserisci numero colonne: ";
    cin >> maxColonne;

    int tabellaDispari[100][100];

    for (int y = 0; y < maxRighe; y++) {
        for (int x = 0; x < maxColonne; x++) {
            if (x % 2 != 0)
                tabellaDispari[y][x] = 1;
            else
                tabellaDispari[y][x] = 0;
        }
    }

    cout << "Matrice:\n";
    for (int y = 0; y < maxRighe; y++) {
        for (int x = 0; x < maxColonne; x++) {
            cout << tabellaDispari[y][x] << " ";
        }
        cout << endl;
    }
}

void analizzaVenditeSupermercato() {
    int numSezioni;
    cout << "Inserisci la quantità di reparti: ";
    cin >> numSezioni;

    string etichetteSezioni[100];
    float entrate[100];
    float incassoGlobale = 0;

    for (int k = 0; k < numSezioni; k++) {
        cout << "Nome reparto " << k + 1 << ": ";
        cin >> etichetteSezioni[k];
        cout << "Vendite del reparto " << k + 1 << ": ";
        cin >> entrate[k];

        incassoGlobale += entrate[k];
    }

    cout << "\nTotale vendite: " << incassoGlobale << endl;
    cout << "Dati dei reparti:\n";

    for (int k = 0; k < numSezioni; k++) {
        cout << etichetteSezioni[k] << " - vendite: " << entrate[k]
             << " - percentuale: " << (entrate[k] * 100) / incassoGlobale << "%\n";
    }
}

int main() {
    int sceltaMenu;

    do {
        cout << "\n--- MENU ---\n";
        cout << "5. Matrice con 1 sulle due diagonali\n";
        cout << "6. Matrice con 1 nelle righe pari e 0 nelle altre\n";
        cout << "7. Matrice con 1 nelle colonne dispari e 0 nelle altre\n";
        cout << "8. Reparti supermercato: totale vendite e percentuali\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> sceltaMenu;

        switch (sceltaMenu) {
            case 5:
                generaMatriceDiagonali();
                break;
            case 6:
                generaMatriceRighePari();
                break;
            case 7:
                generaMatriceColonneDispari();
                break;
            case 8:
                analizzaVenditeSupermercato();
                break;
            case 0:
                cout << "Programma terminato.\n";
                break;
            default:
                cout << "Scelta non valida.\n";
        }
    } while (sceltaMenu != 0);

    return 0;
}