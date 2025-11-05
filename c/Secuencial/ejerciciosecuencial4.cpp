#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, y, z;
    cout << "Ingresa a, b, c, x, y, z: ";
    cin >> a >> b >> c >> x >> y >> z;

    double A = (a + b / c) * (x + y) / z;
    cout << "El valor de A es: " << A << endl;
    return 0;
}
