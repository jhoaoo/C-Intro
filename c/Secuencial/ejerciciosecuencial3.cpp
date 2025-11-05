#include <iostream>
using namespace std;

int main() {
    double lado;
    cout << "Ingresa el lado del cuadrado: ";
    cin >> lado;

    double perimetro = 4 * lado;
    double area = lado * lado;

    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
    return 0;
}
