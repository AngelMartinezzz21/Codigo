#include <iostream>
#include <algorithm>  // Para std::sort

using namespace std;

int main() {
    const float TAM = 10;
    float numeros[TAM];

    // Captura de 10 números
    cout << "Ingrese 10 numeros:" << endl;
    for (float i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Ordenar el arreglo en orden ascendente
    sort(numeros, numeros + TAM);

    // Mostrar el arreglo ordenado
    cout << "\nNumeros ordenados en forma ascendente:" << endl;
    for (float i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

