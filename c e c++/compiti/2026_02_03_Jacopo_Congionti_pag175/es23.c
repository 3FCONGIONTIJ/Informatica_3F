#include <stdio.h>
int potenza(int base, int esponente) {
    int risultato = 1;
    for (int i = 0; i < esponente; i++) {
        risultato *= base;
    }
    return risultato;
}
int main (){
    int base, esponente;
    printf("Inserisci base ed esponente: ");
    scanf("%d %d", &base, &esponente);
    printf("Risultato: %d\n", potenza(base, esponente));
    return 0;
}