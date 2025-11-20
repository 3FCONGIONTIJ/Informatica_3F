#include <stdio.h>
#include <stdlib.h>
#define CK 1.20

void importo(){
    char nome[15];
    float kminizio, kfinale, kmpercorsi, importo;
    printf("Inserire il nome del cliente: ");
    scanf("%s", nome);
    printf("Inserire il chilometraggio iniziale: ");
    scanf("%f", &kminizio);
    printf("Inserire il chilometraggio finale: ");
    scanf("%f", &kfinale);
    kmpercorsi = kfinale - kminizio;
    importo = kmpercorsi * CK;
    printf("Il cliente %s deve pagare un importo di: %3.2f euro\n", nome, importo);
}
int main(int argc, char *argv[]) {
    importo();
    system("pause");
    return 0;
}