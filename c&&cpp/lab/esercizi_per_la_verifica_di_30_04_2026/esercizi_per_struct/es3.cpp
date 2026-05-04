#include <iostream>
#include <cmath>
using namespace std;
struct Punto
{
    int x;
    int y;
};
struct Percorso
{
    Punto p1;
    Punto p2;
};
float distanza(Percorso p){
    return sqrt(pow(p.p2.x-p.p1.x,2)+pow(p.p2.y-p.p1.y,2));
}
void distanzaPunti(Percorso v[], int dimensione){
    for (int i=0;i<dimensione;i++){
        cout<<"la distanza tra i punti è "<<distanza(v[i])<<endl;
    }
}
int main (){
    int dimensione=3;
    Percorso v[dimensione];
    for (int i=0;i<dimensione;i++){
        cout<<"inserire x1"<<endl;
        cin>>v[i].p1.x;
        cout<<"inserire y1"<<endl;
        cin>>v[i].p1.y;
        cout<<"inserire x2"<<endl;
        cin>>v[i].p2.x;
        cout<<"inserire y2"<<endl;
        cin>>v[i].p2.y;
    }
    distanzaPunti(v,dimensione);
}