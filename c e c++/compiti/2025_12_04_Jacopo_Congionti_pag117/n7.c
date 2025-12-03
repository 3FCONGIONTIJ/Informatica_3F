#include <stdio.h>
void controllo(float numero){// funzione che constrolla se iil numero è nell'intervallo [-5,+10]
    printf("inserisci un numero: ");
    scanf("%f", &numero);// funzione che legge il numero
    if(numero >= -5 && numero <= 10){// controllo se il numero è nell'intervallo
        printf("ok");
    } else {// altrimenti
        printf("Il numero %.2f non è nell'intervallo [-5,+10]\n", numero);
    }
}
int main() {// funzione principale
    float numero;
    controllo(numero);
    return 0;
}