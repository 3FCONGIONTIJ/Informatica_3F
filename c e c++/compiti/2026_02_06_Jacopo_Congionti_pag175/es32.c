#include <stdio.h>

int main() {
    int attuale, precedente, diff, diff_iniziale, count = 1;
    int costante = 1;
    
    printf("Inserisci numeri (999 per finire):\n");
    scanf("%d", &precedente);
    scanf("%d", &attuale);
    if(attuale == 999) return 0;
    
    diff_iniziale = attuale - precedente;
    count++;
    
    while(1) {
        precedente = attuale;
        scanf("%d", &attuale);
        if(attuale == 999) break;
        count++;
        if(attuale - precedente != diff_iniziale) costante = 0;
    }
    
    if(costante) printf("La differenza è costante: %d\n", diff_iniziale);
    else printf("La differenza NON è costante.\n");
    printf("Numeri inseriti: %d\n", count);
    return 0;
}