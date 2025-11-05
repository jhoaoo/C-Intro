#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Ingresa tres notas: ";
    cin >> n1 >> n2 >> n3;

    double promedio = (n1 + n2 + n3) / 3;
    cout << "Promedio: " << promedio << endl;
    return 0;
}
