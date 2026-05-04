#include <stdio.h>
void equazione_primogrado(){//funzione per risolvere equazioni di primo grado
    float a, b, x;
    printf("Inserisci i coefficienti a e b dell'equazione ax + b = 0 (legge solo i primi 2 numeri insreiti): ");//chiede i coefficienti
    scanf("%f %f", &a, &b);//legge i coefficienti
    if(a == 0){
        if(b == 0){//se a e b sono entrambi 0
            printf("L'equazione ha infinite soluzioni.\n");
        } else {//se a è 0 e b non è 0
            printf("L'equazione non ha soluzioni.\n");
        }
    } else {//se a non è 0
        x = -b / a;
        printf("La soluzione dell'equazione è x = %.2f\n", x);
    }
}
int main() {//programma principale
    equazione_primogrado();
    return 0;
}