#include <iostream>
#include <vector>
#include <string>
using namespace std;
int x2(int v[], int n) { 
    if (n == 0) {
        return 0;
    }
    v[n - 1] *= 2; 
    return x2(v, n - 1);
}
char ricerca (int v[], int n, char x) {
    if (n == 0) {
        return -1; 
    }
    if (v[n - 1] == x) {
        return n - 1;
    }
    return ricerca(v, n - 1, x); 
}
int ordinato(int v[], int n) { 
    if (n <= 1) {
        return 1; 
    }
    if (v[n - 1] < v[n - 2]) {
        return 0; 
    }
    return ordinato(v, n - 1); 
}
void stampaPremiInIntervallo(float premi[], int n, float min, float max) {
    cout << "Premi compresi nell'intervallo [" << min << ", " << max << "]:" << endl;
    
    for(int i = 0; i < n; i++) {
        if(premi[i] >= min && premi[i] <= max) {
            cout << "- " << premi[i] << endl;
        }
    }
}
int sommaDiVettori(int v1[], int v2[], int n) { 
    if (n == 0) {
        return 0;
    }
    return v1[n - 1] + v2[n - 1] + sommaDiVettori(v1, v2, n - 1); 
}
int main() {
    int v[] = {1, 2, 3, 4, 5};
    int n = sizeof(v) / sizeof(v[0]);
    
    cout << "Array originale: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    x2(v, n);
    
    cout << "Array raddoppiato: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    char x = 6;
    int index = ricerca(v, n, x);
    if (index != -1) {
        cout << "Elemento " << x << " trovato all'indice: " << index << endl;
    } else {
        cout << "Elemento " << x << " non trovato nell'array." << endl;
    }
    
    if (ordinato(v, n)) {
        cout << "L'array è ordinato." << endl;
    } else {
        cout << "L'array non è ordinato." << endl;
    }
    
    float premi[] = {100.5, 200.0, 150.75, 300.25};
    int m = sizeof(premi) / sizeof(premi[0]);
    float min = 150.0, max = 250.0;
    
    stampaPremiInIntervallo(premi, m, min, max);
    
    int v1[] = {1, 2, 3};
    int v2[] = {4, 5, 6};
    int p = sizeof(v1) / sizeof(v1[0]);
    
    int somma = sommaDiVettori(v1, v2, p);
    cout << "Somma dei due array: " << somma << endl;
    
    return 0;
}