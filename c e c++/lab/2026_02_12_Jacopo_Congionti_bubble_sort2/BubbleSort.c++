#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int scambio;
    bool scambiato = true;
    int fine = n - 1;

    while (scambiato) {
        scambiato = false;
        for (int a = 0; a < fine; a++) {
            if (arr[a] > arr[a + 1]) {
                scambio = arr[a];
                arr[a] = arr[a + 1];
                arr[a + 1] = scambio;
                scambiato = true;
            }
        }
        fine--;
    }
}
int main() {
    int n;
    cout << "Inserisci lunghezza array: ";
    cin >> n;
    int arr[n]; 
    cout << "Inserire i numeri dell'array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "\n--- RISULTATI ---\n";
    cout << "Numeri ordinati: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i < n - 1 ? ", " : "");
    }
    cout << "\nNumero minore: " << arr[0];
    cout << "\nNumero maggiore: " << arr[n - 1] << endl;
    return 0;
}