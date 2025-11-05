#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    double cubo = numero * numero * numero;
    double raizCubica = cbrt(numero);

    cout << "Cubo: " << cubo << endl;
    cout << "Raiz cubica: " << raizCubica << endl;
    return 0;
}
