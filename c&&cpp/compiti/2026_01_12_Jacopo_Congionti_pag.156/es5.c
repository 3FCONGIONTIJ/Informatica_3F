#include <stdio.h>

int main() {
    int n;
    float a, b, m_max = -1e9; // Valore molto piccolo
    float b_a, b_b; // Variabili per memorizzare la coppia migliore

    printf("Quante coppie vuoi inserire? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Inserisci coppia %d: ", i + 1);
        scanf("%f %f", &a, &b);
        float media = (a + b) / 2;

        if (media > m_max) {
            m_max = media;
            b_a = a;
            b_b = b;
        }
    }

    printf("La coppia con media piu' alta e' (%.1f, %.1f) con media %.2f\n", b_a, b_b, m_max);
    return 0;
}