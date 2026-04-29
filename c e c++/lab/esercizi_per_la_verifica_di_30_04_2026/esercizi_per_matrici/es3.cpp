#include <iostream>
using namespace std;
void InserimentoCampoMinato(int matrice[3][3], int campoMinato[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"inserire 1 se c'è un campo minato alla posizione "<<i+1<<","<<j+1<<" altrimenti inserire 0"<<endl;
            cin>>campoMinato[i][j];
        }
    }
}
void ControlloCampoMinato(int matrice[3][3], int campoMinato[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (campoMinato[i][j]==1){
                matrice[i][j]=-1;
            } else {
                matrice[i][j]=0;
                if (i-1>=0 && j-1>=0 && campoMinato[i-1][j-1]==1){
                    matrice[i][j]++;
                }
                if (i-1>=0 && campoMinato[i-1][j]==1){
                    matrice[i][j]++;
                }
                if (i-1>=0 && j+1<3 && campoMinato[i-1][j+1]==1){
                    matrice[i][j]++;
                }
                if (j-1>=0 && campoMinato[i][j-1]==1){
                    matrice[i][j]++;
                }
                if (j+1<3 && campoMinato[i][j+1]==1){
                    matrice[i][j]++;
                }
                if (i+1<3 && j-1>=0 && campoMinato[i+1][j-1]==1){
                    matrice[i][j]++;
                }
                if (i+1<3 && campoMinato[i+1][j]==1){
                    matrice[i][j]++;
                }
                if (i+1<3 && j+1<3 && campoMinato[i+1][j+1]==1){
                    matrice[i][j]++;
                }
            }
        }
    }
}
void StampaMatrice(int matrice[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (matrice[i][j]==-1){
                cout<<"* ";
            } else {
                cout<<matrice[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int matrice[3][3];
    int campoMinato[3][3];
    InserimentoCampoMinato(matrice,campoMinato);
    ControlloCampoMinato(matrice,campoMinato);
    cout<<"La matrice con i campi minati è: "<<endl;
    StampaMatrice(matrice);
}