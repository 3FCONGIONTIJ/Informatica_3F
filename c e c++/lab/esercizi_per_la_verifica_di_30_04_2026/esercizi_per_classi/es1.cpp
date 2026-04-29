#include <iostream>
#include <string>  
using namespace std;
class processore
{
private:
    string modello;
    int frequenza;
public:
    processore(string modello, int frequenza){
        this->modello=modello;
        this->frequenza=frequenza;
    }
    void stampa(){
        cout<<"Il modello del processore è: "<<modello<<endl;
        cout<<"La frequenza del processore è: "<<frequenza<<" GHz"<<endl;
    }
};
class computer
{
private:
    processore* cpu;
public:
    computer(processore* cpu){
        this->cpu=cpu;
    }
    void stampa(){
        cpu->stampa();
    }
};
int main(){
    processore* p1 = new processore("Intel Core i7", 3);
    computer c1(p1);
    c1.stampa();
    delete p1;
    return 0;
}