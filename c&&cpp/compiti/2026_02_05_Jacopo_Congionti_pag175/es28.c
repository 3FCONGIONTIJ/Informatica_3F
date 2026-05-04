#include <stdio.h>

int main() {
    int N, a = 3;
    printf("Inserisci N: "); scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        a = 2 * a + i;
    }
    printf("Il termine a_%d è: %d\n", N, a);
    return 0;
}