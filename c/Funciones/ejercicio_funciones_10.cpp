#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.1416;

float perimetro(float r) {
    return 2 * PI * r;
}

float area(float r) {
    return PI * pow(r, 2);
}

int main() {
    float r;
    do {
        cout << "Ingrese el radio (>0): ";
        cin >> r;
    } while (r <= 0);

    cout << "Perímetro: " << perimetro(r) << " | Área: " << area(r) << endl;
    return 0;
}