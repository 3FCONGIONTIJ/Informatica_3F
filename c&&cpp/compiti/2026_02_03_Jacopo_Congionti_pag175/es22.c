#include <stdio.h>
int quoziente(int a, int b) {
    int q = 0;
    while (a >= b) {
        a -= b;
        q++;
    }
    return q;
}
int resto(int a, int b) {
    while (a >= b) {
        a -= b;
    }
    return a;
}
int main () {
    int a, b;
    printf("Inserisci due numeri interi: ");
    scanf("%d %d", &a, &b);
    printf("Quoziente: %d\n", quoziente(a, b));
    printf("Resto: %d\n", resto(a, b));
    return 0;
}