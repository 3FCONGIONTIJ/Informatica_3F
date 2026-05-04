#include <stdio.h>
void succArit(){// funzione che verifica se 3 numeri sono in successione aritmetica
    int numero, numero2, numero3;
    printf("inserisci un primo numero: ");
    scanf("%d", &numero);// funzione che legge il numero
    printf("inserisci un secondo numero: ");
    scanf("%d", &numero2);// funzione che legge il secondo numero
    printf("inserisci un terzo numero: ");
    scanf("%d", &numero3);// funzione che legge il terzo numero
    if((numero2 - numero == numero3 - numero2)){// controllo se i numeri sono in successione aritmetica
        printf("I numeri %d, %d e %d sono in successione aritmetica\n", numero, numero2, numero3);
    } else {// altrimenti
        printf("I numeri %d, %d e %d non sono in successione aritmetica\n", numero, numero2, numero3);
    }
}
int main() {// funzione principale
    succArit();
    return 0;
}