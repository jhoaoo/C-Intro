#include <iostream>
using namespace std;

int main() {
    int numero, sumaPositivos = 0, sumaNegativos = 0;
    
    cout << "Ingrese valores enteros (0 para terminar):" << endl;
    
    do {
        cin >> numero;
        if (numero > 0) {
            sumaPositivos += numero;
        } else if (numero < 0) {
            sumaNegativos += numero;
        }
    } while (numero != 0);
    
    cout << "Sumatoria de positivos: " << sumaPositivos << endl;
    cout << "Sumatoria de negativos: " << sumaNegativos << endl;
    
    return 0;
}