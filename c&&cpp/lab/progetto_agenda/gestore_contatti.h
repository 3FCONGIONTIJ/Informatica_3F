#ifndef GESTORE_CONTATTI_H
#define GESTORE_CONTATTI_H

#include "contatto.h"
#include <iostream>

#define MAX_CONTATTI 100

using namespace std;

class GestoreContatti {
private:
    Contatto agenda[MAX_CONTATTI]; // L'attributo privato (il vettore ordinato)
    int numContatti;               // Numero attuale di contatti inseriti

public:
    // Costruttore: inizializza numContatti a 0
    GestoreContatti();

    // Metodi CRUD (ex funzioni globali)
    void inserimentoOrdinato(Contatto nuovo);
    int ricercaBinaria(string nomeCercato);
    void visualizzaAgenda();
};

#endif