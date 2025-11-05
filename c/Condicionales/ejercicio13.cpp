#include <iostream>
using namespace std;

int main() {
    int horas;
    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas;

    double pago;
    if (horas <= 40)
        pago = horas * 15;
    else
        pago = (40 * 15) + ((horas - 40) * 25);

    cout << "El salario semanal es: $" << pago;
    return 0;
}
