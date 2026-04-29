#include <iostream>
#include <string>
using namespace std;
class Canzone{
private:
    string titolo;
    string artista;
    int durata;
public:
    Canzone(string titolo, string artista, int durata){
        this->titolo=titolo;
        this->artista=artista;
        this->durata=durata;
    }
    void stampa(){
        cout<<"Titolo: "<<titolo<<endl;
        cout<<"Artista: "<<artista<<endl;
        cout<<"Durata: "<<durata<<" secondi"<<endl;
    }
};
class Playlist{
private:
    Canzone* canzoni[100];
    int numCanzoni;
public:
    Playlist(){
        numCanzoni=0;
    }
    void aggiungiCanzone(Canzone* canzone){
        if (numCanzoni<100){
            canzoni[numCanzoni]=canzone;
            numCanzoni++;
        } else {
            cout<<"Playlist piena!"<<endl;
        }
    }
    void stampa(){
        cout<<"Playlist: "<<endl;
        for (int i=0;i<numCanzoni;i++){
            canzoni[i]->stampa();
            cout<<endl;
        }
    }
};
int main(){
    Canzone* c1 = new Canzone("Bohemian Rhapsody", "Queen", 354);
    Canzone* c2 = new Canzone("Imagine", "John Lennon", 183);
    Playlist p;
    p.aggiungiCanzone(c1);
    p.aggiungiCanzone(c2);
    p.stampa();
    delete c1;
    delete c2;
    return 0;
}