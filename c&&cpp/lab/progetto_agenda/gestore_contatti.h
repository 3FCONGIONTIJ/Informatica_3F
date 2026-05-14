#ifndef GESTORE_CONTATTI_H
#define GESTORE_CONTATTI_H

#include "contatto.h"

#define MAX_CONTATTI 100

class GestoreContatti {
private:
    /*iniziallizazzione delle due variabile per gestire i contatti
    Contatto agenda crea un vettore di contatti
    int numContatti è il numero di contatti
    */
    Contatto agenda[MAX_CONTATTI];
    int numContatti;

public:
    GestoreContatti();//creazione dell'oggetto tramite il costruttore
    //creazione metodi che servono per compilare e il compilatore non deve incollare il codice nel compilatore sempre
    virtual void inserimentoOrdinato(Contatto nuovo);
    virtual int ricercaBinaria(const char* nomeCercato);
    virtual void visualizzaAgenda();
};
class GestoreContattiRamOrdinata:public GestoreContatti {
    private:
    Contatto agenda[MAX_CONTATTI];
    int numContatti;

    public:
    void inserimentoOrdinato(Contatto nuovo) override;
    int ricercaBinaria(const char* nomeCercato) override;
    void visualizzaAgenda() override;
}
class Getsore MirorredRam {
    
}

#endif