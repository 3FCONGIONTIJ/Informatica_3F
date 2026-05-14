#include "contatto.h"
#include <cstring> // Necessario per strncpy

Contatto::Contatto() {
    nome[0] = '\0';     // Stringa vuota
    telefono[0] = '\0'; // Stringa vuota
}

Contatto::Contatto(const char* n, const char* t) {
    strncpy(nome, n, 49);
    nome[49] = '\0'; // Garantisce la terminazione
    
    strncpy(telefono, t, 19);
    telefono[19] = '\0';
}

const char* Contatto::getNome() const {
    return nome;
}

const char* Contatto::getTelefono() const {
    return telefono;
}

void Contatto::setNome(const char* n) {
    strncpy(nome, n, 49);
    nome[49] = '\0';
}

void Contatto::setTelefono(const char* t) {
    strncpy(telefono, t, 19);
    telefono[19] = '\0';
}