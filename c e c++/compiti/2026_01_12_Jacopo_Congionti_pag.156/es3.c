#include <stdio.h>
#include <limits.h>

int main() {
    FILE *file = fopen("numeri_es3.txt", "r");
    if (file == NULL) return 1;

    int n, max, min;
    int primo = 1;

    while (fscanf(file, "%d", &n) != EOF) {
        if (primo) {
            max = min = n;
            primo = 0;
        } else {
            if (n > max) max = n;
            if (n < min) min = n;
        }
    }
    fclose(file);

    printf("Differenza (Max - Min): %d\n", max - min);
    return 0;
}