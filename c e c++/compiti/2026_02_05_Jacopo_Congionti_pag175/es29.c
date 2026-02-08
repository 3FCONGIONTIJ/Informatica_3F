#include <stdio.h>

int main() {
    int N;
    float val, max, min, somma = 0;
    printf("Numero misurazioni: "); scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%f", &val);
        if(i==0) { max = min = val; }
        if(val > max) max = val;
        if(val < min) min = val;
        somma += val;
    }
    float m = somma / N;
    float ea = (max - min) / 2;
    float er = ea / m;
    printf("Err. Assoluto: %.2f, Relativo: %.2f, Percentuale: %.2f%%\n", ea, er, er*100);
    return 0;
}