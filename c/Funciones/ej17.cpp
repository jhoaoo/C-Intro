#include <iostream>
#include <cmath>
using namespace std;
double evaluarPolinomio(double x) {
    return 3 * pow(x, 5) - 5 * pow(x, 3) + 2 * x - 7;
}
int main() {
    double x;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    double r = evaluarPolinomio(x);
    cout << "r = " << r << endl;
    return 0;
}
