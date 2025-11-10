#include <iostream>
#include <cmath>
using namespace std;

void ecuacionCuadratica(float a, float b, float c) {
    float disc = b*b - 4*a*c;
    if (disc > 0) {
        float x1 = (-b + sqrt(disc)) / (2*a);
        float x2 = (-b - sqrt(disc)) / (2*a);
        cout << "Raíces reales: x1=" << x1 << ", x2=" << x2 << endl;
    } else if (disc == 0) {
        float x = -b / (2*a);
        cout << "Raíz doble: x=" << x << endl;
    } else {
        cout << "No existen raíces reales.\n";
    }
}

int main() {
    float a, b, c;
    cout << "Ingrese coeficientes a, b, c: ";
    cin >> a >> b >> c;
    ecuacionCuadratica(a, b, c);
    return 0;
}