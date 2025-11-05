#include <iostream>
using namespace std;

int main() {
    double monto, tipoCambio;
    int opcion;

    cout << "Tipo de cambio (Soles por Dolar): ";
    cin >> tipoCambio;

    cout << "1. Soles a Dolares\n2. Dolares a Soles\nElige una opcion: ";
    cin >> opcion;

    cout << "Ingresa el monto: ";
    cin >> monto;

    if (opcion == 1)
        cout << "Equivalente en Dolares: " << monto / tipoCambio << endl;
    else if (opcion == 2)
        cout << "Equivalente en Soles: " << monto * tipoCambio << endl;
    else
        cout << "Opcion no valida." << endl;

    return 0;
}
