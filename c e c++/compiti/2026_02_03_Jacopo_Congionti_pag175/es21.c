#include <stdio.h>

int main() {
    int n1, n2;
    printf("Inserimento coppie di numeri\n");
    while (1) {
        printf("\nInserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);
        if (n1 == n2) {
            printf("\n L'inserimento è terminato perchè i numeri sono uguali (%d == %d)\n", n1, n2);
            break; 
        } 
        if (n2 > n1) {
            printf("\n L'inserimento è terminato perchè il secondo numero (%d) è maggiore del primo (%d).\n", n2, n1);
            break;
        }
        printf("Coppia valida\n");
    }
    return 0;
}