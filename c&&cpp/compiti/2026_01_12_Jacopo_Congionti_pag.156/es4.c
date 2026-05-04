#include <stdio.h>

int main() {
    FILE *fp = fopen("voti_es4.txt", "r");
    if (fp == NULL) return 1;

    float v, maxS = -1.0, minI = 11.0;

    while (fscanf(fp, "%f", &v) != EOF) {
        if (v >= 6) { // Sufficienza
            if (v > maxS) maxS = v;
        } else {      // Insufficienza
            if (v < minI) minI = v;
        }
    }
    fclose(fp);

    if (maxS != -1) printf("Miglior voto sufficiente: %.1f\n", maxS);
    if (minI != 11) printf("Peggior voto insufficiente: %.1f\n", minI);

    return 0;
}