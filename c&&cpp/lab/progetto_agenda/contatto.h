#ifndef CONTATTO_H
#define CONTATTO_H

#include <string>

using namespace std;

class Contatto {
private:
    string nome;
    string telefono;

public:
    Contatto();
    Contatto(string n, string t);
    string getNome() const;
    string getTelefono() const;
    void setNome(string n);
    void setTelefono(string t);
};

#endif