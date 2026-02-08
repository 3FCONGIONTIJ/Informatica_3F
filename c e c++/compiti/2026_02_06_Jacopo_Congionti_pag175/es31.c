#include <stdio.h>

int main() {
    int giorno, sett, copie, max_copie = -1, giorno_max;
    int totale = 0, totale_dom = 0, count_dom = 0;
    
    for(int i=1; i<=31; i++) { // Assumiamo mese di 31 giorni
        printf("Giorno %d (settimana 1=Lun..7=Dom) e copie: ", i);
        scanf("%d %d", &sett, &copie);
        
        if(copie > max_copie) { max_copie = copie; giorno_max = i; }
        totale += copie;
        if(sett == 7) { totale_dom += copie; count_dom++; }
    }
    printf("Max vendite il giorno: %d\n", giorno_max);
    printf("Media giornaliera: %.2f\n", (float)totale/31);
    if(count_dom > 0) printf("Media domenicale: %.2f\n", (float)totale_dom/count_dom);
    return 0;
}