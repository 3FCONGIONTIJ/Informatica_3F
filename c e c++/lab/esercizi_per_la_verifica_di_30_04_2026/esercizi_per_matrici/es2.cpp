#include <iostream>
using namespace std;
void Trasposizione(int matrice[3][3], int matriceTrasposta[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            matriceTrasposta[j][i]=matrice[i][j];
        }
    }
}
void StampaMatrice(int matrice[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<matrice[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int matrice[3][3];
    int matriceTrasposta[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"inserire l'elemento della matrice alla posizione "<<i+1<<","<<j+1<<endl;
            cin>>matrice[i][j];
        }
    }
    Trasposizione(matrice,matriceTrasposta);
    cout<<"La matrice trasposta è: "<<endl;
    StampaMatrice(matriceTrasposta);
}