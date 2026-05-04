#include <iostream>
#include <string>
using namespace std;

float triangolo(float h, float b, string &figura) {
    float area;
    cout << "Base: ";
    cin >> b;
    cout << "Altezza: ";
    cin >> h;
    area = (b * h) / 2;
    figura = "TRIANGOLO";
    return area;
}

float rettangolo(float h, float b, string &figura) {
    float area;
    cout << "Base: ";
    cin >> b;
    cout << "Altezza: ";
    cin >> h;
    area = b * h;
    figura = "RETTANGOLO";
    return area;
}

float rombo(float h, float b, string &figura) {
    float area;
    cout << "Diagonale maggiore: ";
    cin >> b;
    cout << "Diagonale minore: ";
    cin >> h;
    area = (b * h) / 2;
    figura = "ROMBO";
    return area;
}
float quadrato(float lato, string &figura) {
    float area;
    cout << "Lato: ";
    cin >> lato;
    area = lato * lato;
    figura = "QUADRATO";
    return area;
}

int stampa(float area, string &figura) {
    cout << "\nFigura: " << figura << endl;
    cout << "Area: " << area << endl;
    return 0;
}

int main() {
    float area = 0;
    string figura;
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
        stampa(area, figura);
        break;

    case 2:
        area = rettangolo(0, 0, figura);
        stampa(area, figura);
        break;

    case 3:
        area = rombo(0, 0, figura);
        stampa(area, figura);
        break;

    case 4:
        area = quadrato(0, figura);
        stampa(area, figura);
        break;

    case 5:
        cout << "\nUscita dal programma.\n";
        break;

    default:
        cout << "\nScelta non valida!\n";
}
    return 0;
}
