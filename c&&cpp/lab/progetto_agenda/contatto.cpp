#include "contatto.h"

using namespace std;

Contatto::Contatto() : nome(""), telefono("") {}
Contatto::Contatto(string n, string t) : nome(n), telefono(t) {}

string Contatto::getNome() const { return nome; }
string Contatto::getTelefono() const { return telefono; }
void Contatto::setNome(string n) { nome = n; }
void Contatto::setTelefono(string t) { telefono = t; }