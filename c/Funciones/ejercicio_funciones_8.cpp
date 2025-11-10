#include <iostream>
using namespace std;

float potencia(float base, int exp) {
    float resultado = 1;
    for (int i = 0; i < exp; i++)
        resultado *= base;
    return resultado;
}

int main() {
    float base;
    int exp;
    cout << "Base: ";
    cin >> base;
    do {
        cout << "Exponente (>=0): ";
        cin >> exp;
    } while (exp < 0);

    cout << "Resultado: " << potencia(base, exp) << endl;
    return 0;
}