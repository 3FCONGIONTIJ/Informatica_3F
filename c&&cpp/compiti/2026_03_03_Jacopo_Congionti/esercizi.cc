#include <iostream>
using namespace std;

const int N = 4; // righe
const int M = 4; // colonne 

// Stampa matrice
void Stampa(int mat[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

// Somma diagonale principale (mat[i][i])
int SommaDiagonale(int mat[N][M]) {
    int tot = 0;
    for (int i = 0; i < N; i++) {
        tot += mat[i][i];
    }
    return tot;
}

// Trasposta: matT[j][i] = mat[i][j]
void Trasposta(int mat[N][M], int matT[M][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matT[j][i] = mat[i][j];
        }
    }
}

// Totale di una riga r
int TotRiga(int mat[N][M], int r) {
    int tot = 0;
    for (int j = 0; j < M; j++) {
        tot += mat[r][j];
    }
    return tot;
}

// Totale di una colonna c
int TotColonna(int mat[N][M], int c) {
    int tot = 0;
    for (int i = 0; i < N; i++) {
        tot += mat[i][c];
    }
    return tot;
}

// Totale generale
int Totale(int mat[N][M]) {
    int tot = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            tot += mat[i][j];
        }
    }
    return tot;
}

int main() {
    
    int mat[N][M] = {
        {1, 3, 4, 5},
        {6, 57, 8, 9},
        {10, 11, 12, 13},
        {3, 5, 6, 9}
    };

    int scelta;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1) Stampa matrice\n";
        cout << "2) Somma diagonale principale\n";
        cout << "3) Trasposta (stampa anche la trasposta)\n";
        cout << "4) Totali righe\n";
        cout << "5) Totali colonne\n";
        cout << "6) Totale generale\n";
        cout << "0) Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        if (scelta == 1) {
            cout << "\nMatrice:\n";
            Stampa(mat);

        } else if (scelta == 2) {
            cout << "\nSomma diagonale principale = " << SommaDiagonale(mat) << endl;

        } else if (scelta == 3) {
            int matT[M][N];
            Trasposta(mat, matT);

            cout << "\nMatrice data:\n";
            Stampa(mat);

            cout << "\nMatrice trasposta:\n";
            // stampa matT (che è MxN)
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    cout << matT[i][j] << "\t";
                }
                cout << endl;
            }

        } else if (scelta == 4) {
            cout << "\nTotali righe:\n";
            for (int i = 0; i < N; i++) {
                cout << "Totale riga " << (i + 1) << " = " << TotRiga(mat, i) << endl;
            }

        } else if (scelta == 5) {
            cout << "\nTotali colonne:\n";
            for (int j = 0; j < M; j++) {
                cout << "Totale colonna " << (j + 1) << " = " << TotColonna(mat, j) << endl;
            }

        } else if (scelta == 6) {
            cout << "\nTotale generale = " << Totale(mat) << endl;

        } else if (scelta == 0) {
            cout << "Uscita...\n";

        } else {
            cout << "Scelta non valida!\n";
        }

    } while (scelta != 0);

    return 0;
}