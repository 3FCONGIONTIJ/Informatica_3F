#include <iostream>
using namespace std;

struct studente
{
   string nome;
   string cognome;
   int voti[3];
};
void InserimentoTramiteUtente(studente v[], int dimensione){
    for (int i=0;i<dimensione;i++){
        cout<<"inserire nome"<<endl;
        cin>>v[i].nome;
        cout<<"inserire cognome"<<endl;
        cin>>v[i].cognome;
        for (int j=0;j<3;j++){
            cout<<"inserire voto"<<endl;
            cin>>v[i].voti[j];
        }
    }
}
float MediaVoti(studente v[], int dimensione){
    float media=0;
    for (int i=0;i<dimensione;i++){
        for (int j=0;j<3;j++){
            media+=v[i].voti[j];
        }
    }
    return media/(dimensione*3);
}
int main (){
    int dimensione=3;
    studente v[dimensione];
    InserimentoTramiteUtente(v,dimensione);
    cout<<"la media dei voti è "<<MediaVoti(v,dimensione)<<endl;
}