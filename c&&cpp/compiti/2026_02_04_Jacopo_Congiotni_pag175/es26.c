#include <stdio.h>

int main() {
    int N, somma = 0, dispari = 1;
    printf("Inserisci N: "); scanf("%d", &N);
    for(int i=0; i<N; i++) {
        somma += dispari;
        dispari += 2;
    }
    printf("%d al quadrato è: %d\n", N, somma);
    return 0;
}