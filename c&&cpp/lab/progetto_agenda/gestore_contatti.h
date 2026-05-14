#ifndef GESTORE_CONTATTI_H
#define GESTORE_CONTATTI_H

#include "contatto.h"

#define MAX_CONTATTI 100

// Classe Base Astratta (Interfaccia)
class GestoreContatti {
public:
    virtual ~GestoreContatti() {} // Necessario per distruzione corretta delle derivate
    virtual void inserimentoOrdinato(Contatto nuovo) = 0;
    virtual int ricercaBinaria(const char* nomeCercato) = 0;
    virtual void visualizzaAgenda() = 0;
};

// Classe 1: Solo RAM (quella dello step precedente)
class GestoreRAMOrdinata : public GestoreContatti {
protected: // protected così la derivata può accedere ai dati
    Contatto agenda[MAX_CONTATTI];
    int numContatti;

public:
    GestoreRAMOrdinata();
    void inserimentoOrdinato(Contatto nuovo) override;
    int ricercaBinaria(const char* nomeCercato) override;
    void visualizzaAgenda() override;
};

// Classe 2: RAM con Mirroring su File
class GestoreMirroredRAM : public GestoreRAMOrdinata {
private:
    const char* nomeFile = "agenda.txt";
    void salvaSuFile(); // Metodo privato di utilità
    void caricaDaFile();

public:
    GestoreMirroredRAM();  // Qui avviene il caricamento
    ~GestoreMirroredRAM(); // Qui avviene il mirroring (salvataggio)
};

#endif