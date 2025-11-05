#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    do {
        cout << "Ingrese la cantidad de números impares a sumar: ";
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= 2 * n - 1; i += 2)
        suma += i;

    cout << "La suma de los " << n << " primeros números impares es: " << suma << endl;

    return 0;
}
