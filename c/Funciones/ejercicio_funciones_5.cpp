#include <iostream>
using namespace std;

float convierteDolares(float soles, float tipoCambio) {
    return soles / tipoCambio;
}

int main() {
    float soles, tipo;
    do {
        cout << "Ingrese cantidad en soles (>0): ";
        cin >> soles;
    } while (soles <= 0);

    do {
        cout << "Ingrese tipo de cambio (>0): ";
        cin >> tipo;
    } while (tipo <= 0);

    cout << "Equivalente en dólares: $" << convierteDolares(soles, tipo) << endl;
    return 0;
}