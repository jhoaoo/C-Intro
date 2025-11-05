#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponente;
    cout << "Ingresa base y exponente: ";
    cin >> base >> exponente;

    double resultado = pow(base, exponente);
    cout << "Resultado: " << resultado << endl;
    return 0;
}
