#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {
private:
    char nome[50];
    char telefono[20];

public:
    // Costruttori
    Contatto();
    Contatto(const char* n, const char* t);

    // Getters (ritornano puntatori costanti a char)
    const char* getNome() const;
    const char* getTelefono() const;

    // Setters
    void setNome(const char* n);
    void setTelefono(const char* t);
};

#endif