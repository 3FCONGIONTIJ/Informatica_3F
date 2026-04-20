#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int scelta;

    do {
        cout << "\n--- MENU ---\n";
        cout << "13. Ricerca voto di un esame\n";
        cout << "14. Riga o colonna con somma piu' alta\n";
        cout << "15. Verifica somma celle precedenti sulla stessa riga\n";
        cout << "16. Matrice 4x4 casuale con 0 e 1\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {

            // Es 13 
            case 13: {
                int N;
                string nome[30], cerca;
                int voto[30];
                bool trovato = false;

                cout << "Inserisci il numero di esami (max 30): ";
                cin >> N;

                // Inserimento dati
                for (int i = 0; i < N; i++) {
                    cout << "Nome esame " << i + 1 << ": ";
                    cin >> nome[i];
                    cout << "Voto: ";
                    cin >> voto[i];
                }

                // Ricerca esame
                cout << "Inserisci il nome dell'esame da cercare: ";
                cin >> cerca;

                for (int i = 0; i < N; i++) {
                    if (nome[i] == cerca) {
                        cout << "Il voto di " << nome[i] << " e': " << voto[i] << endl;
                        trovato = true;
                    }
                }

                if (!trovato) {
                    cout << "Esame non presente." << endl;
                }

                break;
            }

            // Es 14 
            case 14: {
                int m[4][4];
                int maxRiga = 0, maxColonna = 0;
                int sommaMaxRiga = 0, sommaMaxColonna = 0;

                cout << "Inserisci la matrice 4x4:\n";
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        cin >> m[i][j];
                    }
                }

                // Ricerca riga con somma massima
                for (int i = 0; i < 4; i++) {
                    int somma = 0;
                    for (int j = 0; j < 4; j++) {
                        somma += m[i][j];
                    }

                    if (i == 0 || somma > sommaMaxRiga) {
                        sommaMaxRiga = somma;
                        maxRiga = i;
                    }
                }

                // Ricerca colonna con somma massima
                for (int j = 0; j < 4; j++) {
                    int somma = 0;
                    for (int i = 0; i < 4; i++) {
                        somma += m[i][j];
                    }

                    if (j == 0 || somma > sommaMaxColonna) {
                        sommaMaxColonna = somma;
                        maxColonna = j;
                    }
                }

                cout << "Riga con somma piu' alta: " << maxRiga
                     << " con somma " << sommaMaxRiga << endl;
                cout << "Colonna con somma piu' alta: " << maxColonna
                     << " con somma " << sommaMaxColonna << endl;

                break;
            }

            // Es 15
            case 15: {
                int m[4][5];
                bool ok = true;

                cout << "Inserisci la matrice 4x5:\n";
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 5; j++) {
                        cin >> m[i][j];
                    }
                }

                // Controllo proprietà
                for (int i = 0; i < 4; i++) {
                    int somma = m[i][0];

                    for (int j = 1; j < 5; j++) {
                        if (m[i][j] != somma) {
                            ok = false;
                        }
                        somma += m[i][j];
                    }
                }

                if (ok)
                    cout << "La proprieta' e' verificata." << endl;
                else
                    cout << "La proprieta' NON e' verificata." << endl;

                break;
            }

            // Es 16
            case 16: {
                int m[4][4];
                int contaUno[4];
                bool ok = true;

                srand(time(0));

                // Riempimento matrice casuale
                for (int i = 0; i < 4; i++) {
                    contaUno[i] = 0;

                    for (int j = 0; j < 4; j++) {
                        m[i][j] = rand() % 2;

                        if (m[i][j] == 1) {
                            contaUno[i]++;
                        }
                    }
                }

                // Stampa matrice
                cout << "Matrice:\n";
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        cout << m[i][j] << " ";
                    }
                    cout << endl;
                }

                // Controllo numero di 1
                for (int i = 1; i < 4; i++) {
                    if (contaUno[i] != contaUno[i - 1]) {
                        ok = false;
                    }
                }

                if (ok)
                    cout << "Ogni riga ha lo stesso numero di 1 della precedente." << endl;
                else
                    cout << "Le righe NON hanno lo stesso numero di 1." << endl;

                break;
            }

            case 0:
                cout << "Programma terminato." << endl;
                break;

            default:
                cout << "Scelta non valida." << endl;
        }

    } while (scelta != 0);

    return 0;
}