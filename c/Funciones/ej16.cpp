#include <iostream>
using namespace std;
double calcularInteres(double capital, double tasa, int dias) {
    return (capital * tasa * dias) / (360.0 * 100.0);
}
int main() {
    double capital, tasa;
    int dias;
    cout << "Capital: ";
    cin >> capital;
    cout << "Tasa de interes nominal (% anual): ";
    cin >> tasa;
    cout << "Periodo en dias: ";
    cin >> dias;
    double interes = calcularInteres(capital, tasa, dias);
    cout << "Interes producido: " << interes << endl;
    return 0;
}
