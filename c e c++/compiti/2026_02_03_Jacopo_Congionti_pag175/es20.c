# include <stdio.h>

int prodotto (int a, int b) {
    int i;
    int risultato = 0;
    for (i=0;i<b;i++){
        risultato += a;
    }
    return risultato;
}
int main() {
    printf("%d\n", prodotto(5, 3));
}