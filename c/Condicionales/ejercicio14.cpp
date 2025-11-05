#include <iostream>
using namespace std;

int main() {
    char tipo;
    double total;
    cout << "Ingrese el tipo de membresia (A, B o C): ";
    cin >> tipo;
    cout << "Ingrese el monto de la compra: ";
    cin >> total;

    double descuento = 0;
    switch (toupper(tipo)) {
        case 'A': descuento = 0.10; break;
        case 'B': descuento = 0.15; break;
        case 'C': descuento = 0.20; break;
        default: cout << "Tipo de membresia invalido"; return 0;
    }

    double totalFinal = total - (total * descuento);
    cout << "Total a pagar: $" << totalFinal;
    return 0;
}
