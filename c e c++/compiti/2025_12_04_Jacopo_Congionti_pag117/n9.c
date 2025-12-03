#include <stdio.h>
void temperature(){// funzione che legge le temperature di 3 punti diversi della fabbr. e accende sistema di riscaldamento se la media è inferiore a un numero inserito di gradi
    float temp1, temp2, temp3, soglia, media;
    printf("inserisci la temperatura del primo punto: ");
    scanf("%f", &temp1);// funzione che legge la temperatura del primo punto
    printf("inserisci la temperatura del secondo punto: ");
    scanf("%f", &temp2);// funzione che legge la temperatura del secondo punto
    printf("inserisci la temperatura del terzo punto: ");
    scanf("%f", &temp3);// funzione che legge la temperatura del terzo punto
    printf("inserisci la soglia di temperatura: ");
    scanf("%f", &soglia);// funzione che legge la soglia di temperatura
    media = (temp1 + temp2 + temp3) / 3;// calcolo della media delle temperature
    if(media < soglia){// controllo se la media è inferiore alla soglia
        printf("La media delle temperature è %.2f, accendo il sistema di riscaldamento.\n", media);
    } else {// altrimenti
        printf("La media delle temperature è %.2f, il sistema di riscaldamento rimane spento.\n", media);
    }
}
int main() {// funzione principale
    temperature();
    return 0;
}