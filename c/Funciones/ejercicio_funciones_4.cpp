#include <iostream>
using namespace std;

int potenciaCubo(int n) {
    return n * n * n;
}

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;
    cout << "El cubo del número es: " << potenciaCubo(num) << endl;
    return 0;
}