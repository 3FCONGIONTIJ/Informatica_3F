#include <iostream>
using namespace std;
int main() {

    int numeri[10];
    int j=0;
    int scambio=0;

    cout<<"Inserisci 10 numeri interi:"<<endl;
    for(int i=0;i<10;i++){
        cin>>numeri[i];
    }

    for(int i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(numeri[j]>numeri[j+1]){
                scambio=numeri[j];
                numeri[j]=numeri[j+1];
                numeri[j+1]=scambio;
            }
        }
    }
    cout<<"===================="<<endl;
cout<<"Numeri ordinati in ordine crescente:"<<endl;
    for(int i=0;i<10;i++){
        cout<<numeri[i]<<endl;
    }
cout<<"===================="<<endl;
cout<<"Il numero più grande è:" <<numeri[9] <<endl;
cout<<"===================="<<endl;
cout<<"Il numero più piccolo è:" <<numeri[0] <<endl;

 return 0;   
}