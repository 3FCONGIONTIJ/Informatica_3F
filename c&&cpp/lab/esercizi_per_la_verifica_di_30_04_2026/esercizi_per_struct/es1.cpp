#include <iostream>
using namespace std;
struct libro
{
    string titolo;
    string autore;
    int anno;
    int prezzo;
};
void InserimentoTramiteUtente(libro v[], int dimensione){
    for (int i=0;i<dimensione;i++){
        cout<<"inserire titolo"<<endl;
        cin>>v[i].titolo;
        cout<<"inserire autore"<<endl;
        cin>>v[i].autore;
        cout<<"inserire anno"<<endl;
        cin>>v[i].anno;
        cout<<"inserire prezzo"<<endl;
        cin>>v[i].prezzo;
    }
}
void InserimentoTramiteCodice(libro v[], int dimensione){
    for (int i=0;i<dimensione;i++){
        v[i].titolo="marras";
        v[i].autore="moira"+to_string(i);
        v[i].anno=2009;
        v[i].prezzo=100000000000;
    }
}
int main (){
    int dimensione=5;
    libro v[dimensione];
    InserimentoTramiteUtente(v,dimensione);
    InserimentoTramiteCodice(v,dimensione);
}