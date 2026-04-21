#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Iscritto {
    string nome;
    string cognome;
    string telefono;
    float acconto;
    float saldo;
};

struct Agente {
    string nome;
    string indirizzo;
};

int main() {
    int scelta;

    do {
        // Corretti gli a capo \n
        cout << "\n---- MENU ----\n";
        cout << "17. Massimo e minimo della matrice\n";
        cout << "18. Statistiche voti studenti\n"; 
        cout << "19. Gestione iscritti (Acconto e Saldo)\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {

            // --- ESERCIZIO 17 ---
            case 17: {
                int m[4][4];
                cout << "Inserisci la matrice 4x4:\n";
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        cin >> m[i][j];
                    }
                }

                // Ricerca massimo e minimo
                int maxVal = m[0][0], minVal = m[0][0];
                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        if (m[i][j] > maxVal) {
                            maxVal = m[i][j];
                        }
                        if (m[i][j] < minVal) {
                            minVal = m[i][j];
                        }
                    }
                }

                cout << "Valore massimo: " << maxVal << endl;
                cout << "Valore minimo: " << minVal << endl;
                break;
            }

            // --- ESERCIZIO 18 ---
            case 18: {
                int n;
                string nome[100];
                float voto[100];

                cout << "Inserisci il numero di studenti: ";
                cin >> n;

                // Inserimento dati
                for (int i = 0; i < n; i++) {
                    cout << "Nome studente " << i + 1 << ": ";
                    cin >> nome[i];
                    cout << "Voto: ";
                    cin >> voto[i];
                }

                float somma = 0;
                int presenti = 0;
                int assenti = 0;
                float votoMax = -1;
                string nomeMax = "";

                // Calcoli principali
                for (int i = 0; i < n; i++) {
                    if (voto[i] == 0) {
                        assenti++;
                    } else {
                        somma += voto[i];
                        presenti++;

                        if (voto[i] > votoMax) {
                            votoMax = voto[i];
                            nomeMax = nome[i];
                        }
                    }
                }

                // Media dei presenti
                if (presenti > 0) {
                    cout << "\nMedia dei voti (senza assenti): " << somma / presenti << endl;
                    cout << "Studente con voto massimo: " << nomeMax << endl;
                } else {
                    cout << "\nNessun voto valido presente." << endl;
                }

                // Elenco insufficienti
                cout << "Studenti insufficienti:\n";
                for (int i = 0; i < n; i++) {
                    if (voto[i] > 0 && voto[i] < 6) {
                        cout << nome[i] << " - " << voto[i] << endl;
                    }
                }

                // Percentuale assenti
                cout << "Percentuale studenti assenti: " << (assenti * 100.0) / n << "%" << endl;
                break;
            }

            // --- ESERCIZIO 19 ---
            case 19: {
                int n;
                Iscritto iscritti[100];

                cout << "Inserisci il numero di iscritti: ";
                cin >> n;

                // Inserimento dati iniziali
                for (int i = 0; i < n; i++) {
                    cout << "\nIscritto " << i + 1 << endl;
                    cout << "Nome: ";
                    cin >> iscritti[i].nome;
                    cout << "Cognome: ";
                    cin >> iscritti[i].cognome;
                    cout << "Telefono: ";
                    cin >> iscritti[i].telefono;
                    cout << "Acconto versato: ";
                    cin >> iscritti[i].acconto;
                    cout << "Saldo da versare/versato: ";
                    cin >> iscritti[i].saldo;
                }

                int scelta19;
                do {
                    cout << "\n--- MENU ESERCIZIO 19 ---\n";
                    cout << "1. Aggiorna pagamento\n";
                    cout << "2. Stampa iscritti che devono ancora versare il saldo\n";
                    cout << "0. Torna al menu principale\n";
                    cout << "Scelta: ";
                    cin >> scelta19;

                    switch (scelta19) {
                        case 1: {
                            string cerca;
                            cout << "Inserisci il cognome dell'iscritto da aggiornare: ";
                            cin >> cerca;

                            bool trovato = false;
                            for (int i = 0; i < n; i++) {
                                if (iscritti[i].cognome == cerca) {
                                    float nuovoAcconto, nuovoSaldo;
                                    cout << "Nuovo importo acconto: ";
                                    cin >> nuovoAcconto;
                                    cout << "Nuovo importo saldo: ";
                                    cin >> nuovoSaldo;

                                    iscritti[i].acconto += nuovoAcconto;
                                    iscritti[i].saldo += nuovoSaldo;
                                    trovato = true;
                                }
                            }

                            if (!trovato) {
                                cout << "Iscritto non trovato.\n";
                            }
                            break;
                        }

                        case 2: {
                            cout << "Iscritti che devono ancora versare il saldo:\n";
                            for (int i = 0; i < n; i++) {
                                // Presumo che saldo == 0 significhi che non hanno versato nulla
                                if (iscritti[i].saldo == 0) { 
                                    cout << iscritti[i].nome << " " << iscritti[i].cognome << endl;
                                }
                            }
                            break;
                        }

                        case 0:
                            break;

                        default:
                            cout << "Scelta non valida.\n";
                    }
                } while (scelta19 != 0);
                
                break; // Fine case 19
            }

            case 0:
                cout << "Uscita dal programma in corso...\n";
                break;

            default:
                cout << "Scelta non valida, riprova.\n";
                break;
        }

    } while (scelta != 0);

    return 0;
}