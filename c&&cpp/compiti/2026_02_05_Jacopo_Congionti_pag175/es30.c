#include <stdio.h>

int main() {
    int N, termine = 1;
    printf("Inserisci N: "); scanf("%d", &N);
    while(termine <= N) {
        termine *= 2;
    }
    printf("Il primo termine maggiore di %d è: %d\n", N, termine);
    return 0;
}