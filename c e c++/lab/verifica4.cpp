#include <iostream>
using namespace std;
void multipli (int v[], int dimensione){
    int multiplo;
    for (int i=0;i<dimensione;i++){
        multiplo=v[i]%3;
        if (multiplo==0){
                cout<<v[i]<<"è multiplo di 3";
        }
    }
}
int ricerca (int v[], int dimensione, int x){
    for (int i=0;i<dimensione;i++){
        if (v[i]==x){
            return 1;
        } 
    } return 0;
} 

long long fattoriale(int x){
    if (x<=1)
        return x;
    return x*fattoriale(x-1);
}
int ritorno(int v[], int dimensione, int x){
    int r=0;
    for (int i=0;i<dimensione;i++){
        if (v[i]==x){
            r++;
        } 
        return r;
    }
}
void picchi (int v[], int dimensione){
    for (int i=0;i<dimensione;i++){
        if (v[i]>v[i-1] && v[i]>v[i+1]){
        } else {
            cout<<v[i]<<endl;
        }
    }
}
int main (){
    int scelta=0;
    do{
    int v[]={13,34,46,32,56,32,56,33,21,56};
    int x;
    int dimensione = 10;
    cout<<"cosa vuoi fare"<<endl;
    cout<<"1. stampa gli elementi multipli di 3"<<endl;
    cout<<"2. ricerca di un valore nel vettore"<<endl;
    cout<<"3. fattoriale di un numero"<<endl;
    cout<<"4. quante volte Ã¨ presente un numero nel vettore"<<endl;
    cout<<"5. vedere se un numero Ã¨ un picco"<<endl;
    if (scelta==1){
        multipli(v,dimensione);
    } else if(scelta==2){
        cout<<"inserre il numero da cercare"<<endl;
        cin>>x;
        ricerca(v,dimensione,x);
    } else if(scelta==3){
        cout<<"numero per il fattoriale"<<endl;
        cin>>x;
        cout<<fattoriale(x);
    } else if(scelta==4){
        cout<<"inserire il numero per vedere quante volte occorre  nel vettore";
        cin>>x;
        ritorno(v,dimensione,x);
    } else if(scelta==5){
        picchi(v,dimensione);
    } else{
        cout<<"errrore"<<endl;
    }
}while(scelta<0&&scelta>5);
}