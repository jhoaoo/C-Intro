#include <iostream>
using namespace std;

void tabla(int n) {
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
}

int main() {
    int numero;
    do {
        cout << "Ingrese un número natural: ";
        cin >> numero;
    } while (numero < 0);

    tabla(numero);
    return 0;
}