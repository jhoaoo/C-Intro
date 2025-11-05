#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Ingrese cinco numeros: ";
    cin >> a >> b >> c >> d >> e;
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;
    if (d > mayor) mayor = d;
    if (e > mayor) mayor = e;
    cout << "El mayor es: " << mayor;
    return 0;
}
