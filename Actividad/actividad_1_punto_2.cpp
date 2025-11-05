#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float cat1, cat2, hipo;

    cout << "Ingrese el primer cateto del triángulo: ";
    cin >> cat1;
    cout << "Ingrese el segundo cateto del triángulo: ";
    cin >> cat2;

    hipo = sqrt(pow(cat1, 2) + pow(cat2, 2));

    cout.precision(2);
    cout << fixed;
    cout << "La hipotenusa del triángulo es: " << hipo << endl;

    return 0;
}










