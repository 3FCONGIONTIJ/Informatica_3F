# include <stdio.h>
// funzione che legge il carattere e stampa si o no o errore
void carattere (char c){
    printf("inserisci un cararattere:");
    scanf(" %c", &c);// funzione che legge un carattere
    if (c == 's' || c == 'S' ){// controllo se il carattere è s o S
        printf("sì");
    } else if (c == 'n' || c == 'N' ){// controllo se il carattere è n o N
        printf ("no");
    } else {// altrimenti stampo errore
        printf("errore");
    }
}
int main() { // funzione principale
    char c;
    carattere(c);
    return 0;
}