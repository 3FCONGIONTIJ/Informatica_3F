#include <stdio.h>
void diffEtà(){//funzione per calcolare la differenza di età
    int età1, età2, diff;
    printf("Inserisci le età dei due fratelli (legge solo i primi 2 numeri inseriti): ");//chiede le età
    scanf("%d %d", &età1, &età2);//legge le età
    diff = età1 - età2;
    if(diff < 0){
        diff = -diff;//prende il valore assoluto della differenza
    }
    printf("La differenza di età è di %d anni.\n", diff);
}
int main() {//programma principale
    diffEtà();
    return 0;
}