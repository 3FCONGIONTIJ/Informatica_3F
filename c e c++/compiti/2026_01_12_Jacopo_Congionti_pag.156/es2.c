#include <stdio.h>

int main() {
    float max, num;
    int c;

    printf("Inserisci il 1° numero: ");
    scanf("%f", &max); // Inizializzo max con il primo numero

    c = 1; // Il contatore parte da 1 perché abbiamo già letto il primo
    while (c < 4) {
        printf("Inserisci il prossimo numero: ");
        scanf("%f", &num);
        if (num > max) {
            max = num; // Correzione dell'assegnazione
        }
        c++;
    }

    printf("Il valore massimo e': %.2f\n", max);
    return 0;
}