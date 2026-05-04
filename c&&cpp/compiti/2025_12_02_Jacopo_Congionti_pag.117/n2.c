#include <stdio.h>
void crescente(int a, int b){
    if(a < b){
        printf("I numeri in ordine crescente sono: %d, %d\n", a, b);
    } else {
        printf("I numeri in ordine crescente sono: %d, %d\n", b, a);
    }
}
int main(){
    int num1, num2;
    printf("Inserire il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserire il secondo numero intero: ");
    scanf("%d", &num2);
    crescente(num1, num2);
    return 0;
}