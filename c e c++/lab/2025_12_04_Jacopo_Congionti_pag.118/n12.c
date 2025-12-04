#include <stdio.h>
void diffEtà(){//funzione per calcolare la differenza di età di 3 fratelli
    int età1, età2, età3;
    printf("Inserisci l'età dei tre fratelli (legge solo i primi 3 numeri inseriti in ordine decrescente): ");//chiede le età
    scanf("%d %d %d", &età1, &età2, &età3);//legge le età
    int diff1 = età2 - età1;
    int diff2 = età3 - età2;
    printf("La differenza di età tra il primo e il secondo fratello è di %d anni.\n", diff1);
    printf("La differenza di età tra il secondo e il terzo fratello è di %d anni.\n", diff2);
}
int main() {//programma principale
    diffEtà();
    return 0;
}