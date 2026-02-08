#include <stdio.h>

int main() {
    int N_reg, M_prov, ab, tot_reg, tot_globale = 0;
    char nome[50];

    printf("Numero regioni: "); scanf("%d", &N_reg);
    for(int i=0; i<N_reg; i++) {
        printf("Nome regione: "); scanf("%s", nome);
        printf("Numero province: "); scanf("%d", &M_prov);
        tot_reg = 0;
        for(int j=0; j<M_prov; j++) {
            printf("Abitanti provincia %d: ", j+1);
            scanf("%d", &ab);
            tot_reg += ab;
        }
        printf("Regione %s: %d abitanti\n", nome, tot_reg);
        tot_globale += tot_reg;
    }
    printf("Totale nazione: %d abitanti\n", tot_globale);
    return 0;
}