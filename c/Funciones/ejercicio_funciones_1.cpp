#include <iostream>
using namespace std;

float calculaArea(float lado) {
    return lado * lado;
}

float calculaPerimetro(float lado) {
    return 4 * lado;
}

int main() {
    float lado;
    do {
        cout << "Ingrese la longitud del lado del cuadrado (>0): ";
        cin >> lado;
        if (lado <= 0) cout << "Valor inválido. Debe ser positivo.\n";
    } while (lado <= 0);

    cout << "Área: " << calculaArea(lado) << endl;
    cout << "Perímetro: " << calculaPerimetro(lado) << endl;
    return 0;
}