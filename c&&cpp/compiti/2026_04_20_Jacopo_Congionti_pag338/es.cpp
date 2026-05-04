#include <iostream>
#include <string>
using namespace std;

struct Libro {
    int codice;
    int pagine;
    float costo;
};

int main() {

    int scelta;

    do {
        cout << "\n--- MENU ---\n";
        cout << "9. Somma di due matrici\n";
        cout << "10. Numeri pari e dispari in una matrice\n";
        cout << "11. Gestione libri\n";
        cout << "12. Listino bevande\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch(scelta) {

        //  Es 9 
        case 9: {
            int r, c;
            cout << "Righe e colonne: ";
            cin >> r >> c;

            int A[100][100], B[100][100], S[100][100];

            cout << "Matrice A:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    cin >> A[i][j];

            cout << "Matrice B:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    cin >> B[i][j];

            // Somma
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    S[i][j] = A[i][j] + B[i][j];

            cout << "Matrice somma:\n";
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++)
                    cout << S[i][j] << " ";
                cout << endl;
            }
            break;
        }

        //  Es 10
        case 10: {
            int r,c;
            cout<<"Righe e colonne: ";
            cin>>r>>c;

            int m[100][100];

            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    cin>>m[i][j];

            cout<<"Pari:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    if(m[i][j]%2==0)
                        cout<<m[i][j]<<" ";

            cout<<"\nDispari:\n";
            for(int i=0;i<r;i++)
                for(int j=0;j<c;j++)
                    if(m[i][j]%2!=0)
                        cout<<m[i][j]<<" ";
            cout<<endl;

            break;
        }

        //  Es 11
        case 11: {
            int N;
            cout<<"Numero libri: ";
            cin>>N;

            Libro libri[100];

            for(int i=0;i<N;i++){
                cin>>libri[i].codice;
                cin>>libri[i].pagine;
                cin>>libri[i].costo;
            }

            float somma=0;
            float max=libri[0].costo;
            int codMax=libri[0].codice;

            for(int i=0;i<N;i++){
                somma += libri[i].costo / libri[i].pagine;

                if(libri[i].costo > max){
                    max = libri[i].costo;
                    codMax = libri[i].codice;
                }
            }

            cout<<"Costo medio per pagina: "<<somma/N<<endl;
            cout<<"Libro piu' caro (codice): "<<codMax<<endl;

            break;
        }

        //  Es 12
        case 12: {
            string nome[10];
            float prezzo[10];

            for(int i=0;i<10;i++){
                cin>>nome[i];
                cin>>prezzo[i];
            }

            // Ordinamento per prezzo
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    if(prezzo[j] > prezzo[j+1]){
                        swap(prezzo[j], prezzo[j+1]);
                        swap(nome[j], nome[j+1]);
                    }
                }
            }

            cout<<"Ordinati per prezzo:\n";
            for(int i=0;i<10;i++){
                cout<<nome[i]<<" "<<prezzo[i]<<endl;
            }

            break;
        }

        }

    } while(scelta != 0);

    return 0;
}