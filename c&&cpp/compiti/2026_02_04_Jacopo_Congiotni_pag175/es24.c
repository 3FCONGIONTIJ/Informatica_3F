#include <stdio.h>

int main() {
    int N, iscritti, votanti, nulle, bianche;
    FILE *fp = fopen("Risultati.txt", "r");
    if (fp == NULL) return 1;

    fscanf(fp, "%d", &N); 
    for(int i=0; i<N; i++) {
        fscanf(fp, "%d %d %d %d", &iscritti, &votanti, &nulle, &bianche);
        printf("Seggio %d:\n", i+1);
        printf("Votanti: %.2f%%\n", (float)votanti/iscritti*100);
        printf("Bianche: %.2f%%\n", (float)bianche/votanti*100);
        printf("Nulle: %.2f%%\n", (float)nulle/votanti*100);
    }
    fclose(fp);
    return 0;
}