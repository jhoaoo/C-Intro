#include <iostream>
using namespace std;

void maximoYProducto(float a, float b, float c, float d, float e, float &maximo, float &producto) {
    maximo = a;
    producto = a * b * c * d * e;
    if (b > maximo) maximo = b;
    if (c > maximo) maximo = c;
    if (d > maximo) maximo = d;
    if (e > maximo) maximo = e;
}

int main() {
    float v1, v2, v3, v4, v5, maximo, producto;
    cout << "Ingrese 5 valores: ";
    cin >> v1 >> v2 >> v3 >> v4 >> v5;
    maximoYProducto(v1, v2, v3, v4, v5, maximo, producto);
    cout << "Máximo: " << maximo << " | Producto: " << producto << endl;
    return 0;
}