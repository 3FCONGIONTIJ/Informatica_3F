#include <stdio.h>
void posneg(int n){
    if(n<0){
        printf("Il numero %d e' negativo.\n", n);
    } else {
        printf("Il numero %d e' positivo.\n", n);
    }
}
int main(){
    int numero;
    printf("Inserire un numero intero: ");
    scanf("%d", &numero);
    posneg(numero);
    return 0;
}