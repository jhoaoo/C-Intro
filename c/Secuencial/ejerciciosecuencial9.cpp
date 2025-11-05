#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingresa los valores de a, b y c: ";
    cin >> a >> b >> c;

    double discriminante = b*b - 4*a*c;

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raices reales: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Raiz doble: x = " << x << endl;
    } else {
        cout << "No hay raices reales." << endl;
    }
    return 0;
}
