#include <iostream>
#include <cstring>
using namespace std;

float triangolo(float h, float b, char figura[20]) {
    float area;
    cout << "Base: ";
    cin >> b;
    cout << "Altezza: ";
    cin >> h;
    area = (b * h) / 2;
    strcpy(figura, "TRIANGOLO");
    return area;
}

float rettangolo(float h, float b, char figura[20]) {
    float area;
    cout << "Base: ";
    cin >> b;
    cout << "Altezza: ";
   cin >> h;
    area = b * h;
    strcpy(figura, "RETTANGOLO");
    return area;
}

float rombo(float h, float b, char figura[20]) {
    float area;
    cout << "Diagonale maggiore: ";
    cin >> b;
    cout << "Diagonale minore: ";
    cin >> h;
    area = (b * h) / 2;
    strcpy(figura, "ROMBO");
    return area;
}
float quadrato(float lato, char figura[20]) {
    float area;
    cout << "Lato: ";
    cin >> lato;
    area = lato * lato;
    strcpy(figura, "QUADRATO");
    return area;
}

int stampa(float area, char figura[20]) {
    cout << "\nFigura: " << figura << endl;
    cout << "Area: " << area << endl;
    return 0;
}

int main() {
    float area = 0;
    char figura[20];
    int scelta;
    int s = 0;

    cout << "Scegli una figura geometrica:\n";
    cout << "1 - Triangolo\n";
    cout << "2 - Rettangolo\n";
    cout << "3 - Rombo\n";
    cout << "4 - Quadrato\n";
    cout << "5 - Uscita\n";
    cout << "Scelta: ";
    cin >> scelta;
   switch (scelta) {
        case 1:
            area = triangolo(0, 0, figura);
            s = stampa(area, figura);
            break;
        case 2:
            area = rettangolo(0, 0, figura);
            s = stampa(area, figura);
            break;
        case 3:
            area = rombo(0, 0, figura);
            s = stampa(area, figura);
            break;
        case 4:
            area = quadrato(0, figura);
            s = stampa(area, figura);
            break;
        case 5:
            cout << "uscita";
        default:
            cout << "Scelta non valida!" << endl;
            return 1;
    }

    stampa(area, figura);
    return 0;
}
