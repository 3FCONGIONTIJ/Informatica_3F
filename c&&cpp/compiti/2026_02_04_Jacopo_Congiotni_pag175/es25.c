#include <stdio.h>

int main() {
    double paga = 10.0, totale = 0;
    for(int d=1; d<=22; d++) {
        totale += paga;
        paga *= 2;
    }
    printf("Dopo 22 giorni il lavoratore guadagna: %.2f Euro\n", totale);
    return 0;
}