#include <stdio.h>

int main() {
    int N, a=1, b=1, temp;
    printf("Quanti termini? "); scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}