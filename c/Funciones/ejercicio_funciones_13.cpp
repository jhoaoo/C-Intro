#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    n = abs(n);
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "Suma de dígitos: " << sumaDigitos(num) << endl;
    return 0;
}