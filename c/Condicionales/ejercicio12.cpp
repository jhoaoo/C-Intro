#include <iostream>
using namespace std;

int main() {
    int cantidad;
    const double precio = 50.0;
    cout << "Ingrese la cantidad de pares de calzado: ";
    cin >> cantidad;

    double total = cantidad * precio;
    double descuento = 0;

    if (cantidad > 30)
        descuento = 0.40;
    else if (cantidad > 20)
        descuento = 0.25;
    else if (cantidad > 10)
        descuento = 0.15;

    double totalFinal = total - (total * descuento);
    cout << "Total a pagar: $" << totalFinal;
    return 0;
}
