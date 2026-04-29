#include <iostream>
using namespace std;
void MediaTemperaturaXgiorno(float matrice[4][3]){
    float media=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            media+=matrice[i][j];
        }
        cout << "La media del giorno "<<i+1<<" è: "<<media/3<<endl;
        media=0;
    }
}
void MassimaAssoluta(float matrice[4][3]){
    float massima=0;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            if (matrice[i][j]>massima){
                massima=matrice[i][j];
            }
        }
    }
    cout<<"La temperatura massima è: "<<massima<<endl;
}
int main(){
    float matrice[4][3];
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cout<<"inserire la temperatura del giorno "<<i+1<<" alla mattina, pomeriggio e sera"<<endl;
            cin>>matrice[i][j];
        }
    }
    MediaTemperaturaXgiorno(matrice);
    MassimaAssoluta(matrice);
}