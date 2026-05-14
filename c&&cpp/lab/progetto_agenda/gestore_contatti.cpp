#include "gestore_contatti.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// --- IMPLEMENTAZIONE GestoreRAMOrdinata ---
GestoreRAMOrdinata::GestoreRAMOrdinata() { numContatti = 0; }

void GestoreRAMOrdinata::inserimentoOrdinato(Contatto nuovo) {
    if (numContatti >= MAX_CONTATTI) return;
    int i = numContatti - 1;
    while (i >= 0 && strcmp(agenda[i].getNome(), nuovo.getNome()) > 0) {
        agenda[i + 1] = agenda[i];
        i--;
    }
    agenda[i + 1] = nuovo;
    numContatti++;
}

int GestoreRAMOrdinata::ricercaBinaria(const char* nomeCercato) {
    int sx = 0, dx = numContatti - 1;
    while (sx <= dx) {
        int medio = sx + (dx - sx) / 2;
        int comp = strcmp(agenda[medio].getNome(), nomeCercato);
        if (comp == 0) return medio;
        if (comp < 0) sx = medio + 1; else dx = medio - 1;
    }
    return -1;
}

void GestoreRAMOrdinata::visualizzaAgenda() {
    cout << "\n--- Agenda Attuale ---\n";
    for (int i = 0; i < numContatti; i++)
        cout << agenda[i].getNome() << " : " << agenda[i].getTelefono() << endl;
}

// --- IMPLEMENTAZIONE GestoreMirroredRAM ---

GestoreMirroredRAM::GestoreMirroredRAM() : GestoreRAMOrdinata() {
    ifstream f(nomeFile);
    if (f.is_open()) {
        f.close();
        caricaDaFile();
    } else {
        cout << "File non trovato. Creo 10 contatti di default...\n";
        char nTemp[50], tTemp[20];
        for (int i = 0; i < 10; i++) {
            sprintf(nTemp, "Contatto_%d", i);
            sprintf(tTemp, "000000%d", i);
            inserimentoOrdinato(Contatto(nTemp, tTemp));
        }
        salvaSuFile();
    }
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
    cout << "Chiusura programma: mirroring dati su file...\n";
    salvaSuFile();
}

void GestoreMirroredRAM::salvaSuFile() {
    ofstream f(nomeFile);
    for (int i = 0; i < numContatti; i++) {
        f << agenda[i].getNome() << " " << agenda[i].getTelefono() << endl;
    }
    f.close();
}

void GestoreMirroredRAM::caricaDaFile() {
    ifstream f(nomeFile);
    char n[50], t[20];
    while (f >> n >> t && numContatti < MAX_CONTATTI) {
        inserimentoOrdinato(Contatto(n, t));
    }
    f.close();
}