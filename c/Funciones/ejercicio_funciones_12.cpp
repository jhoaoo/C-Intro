#include <iostream>
#include <cmath>
using namespace std;

float parteDecimal(float n) {
    return fabs(n - (int)n);
}

int main() {
    float x;
    cout << "Ingrese un número: ";
    cin >> x;
    cout << "Parte decimal: " << parteDecimal(x) << endl;
    return 0;
}