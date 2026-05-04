#include <stdio.h>
void mezzi(){//funzione per calcolare e vedere quali mezzi può prendere una persona
    int età;
    printf("Inserisci la tua età: ");//chiede l'età
    scanf("%d", &età);//legge l'età
    if (età < 0) {//controlla se l'età è valida
        printf("Età non valida.\n");
    } else if (13<età && età<15) {//controlla quali mezzi può prendere in base all'età
        printf("Puoi prendere scooter fino a 50cc.\n");
    } else if (15<età && età<17) {//controlla quali mezzi può prendere in base all'età
        printf("Puoi prendere un mezzo fino a 125 cc.\n");
    } else if (17<età && età<20) {//controlla quali mezzi può prendere in base all'età
        printf("Puoi prendere un mezzo fino a 95 cv.\n");
    } else if (età > 20) {//controlla quali mezzi può prendere in base all'età
        printf("Puoi prendere tutti i mezzi senza limitazioni.\n");
    }
}
int main() {//programma principale
    mezzi();
    return 0;
}