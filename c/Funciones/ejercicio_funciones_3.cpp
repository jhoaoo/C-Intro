#include <iostream>
using namespace std;

float multiplicar(float a, float b) {
    return a * b;
}

int main() {
    float x, y;
    cout << "Ingrese primer número: ";
    cin >> x;
    cout << "Ingrese segundo número: ";
    cin >> y;
    cout << "Resultado: " << multiplicar(x, y) << endl;
    return 0;
}