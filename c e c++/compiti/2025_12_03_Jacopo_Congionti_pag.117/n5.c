#include <stdio.h>
#include <math.h>
void equazioni(double a, double b, double c){// funzione che calcola le radici di un'equazione di secondo grado
    printf("inserisci i coefficienti a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);// funzione che legge i coefficienti
    if (a != 0){// controllo se a è diverso da 0
        double delta = b*b - 4*a*c;
        if (delta > 0){// controllo se il delta è maggiore di 0
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);
            printf("Le soluzioni sono reali e distinte: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        } else if (delta == 0){// controllo se il delta è uguale a 0
            double x = -b / (2*a);
            printf("Le soluzioni sono reali e coincidenti: x = %.2lf\n", x);
        } else {// altrimenti il delta è minore di 0
            printf("l'equazione non ha radici reali.\n");
        }
    }
}
int main() {// funzione principale
    double a, b, c;
    equazioni(a, b, c);
    return 0;
}