#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>

#define MAX_CONTATTI 100

using namespace std;
struct Contatto {
    string nome;
    string telefono;
};

// Prototipi delle funzioni
void inserimentoOrdinato(Contatto agenda[], int &n, Contatto nuovo);
int ricercaBinaria(Contatto agenda[], int n, string nomeCercato);
void visualizzaAgenda(Contatto agenda[], int n);

#endif