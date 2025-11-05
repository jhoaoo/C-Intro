#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    cout << "Ingrese las tres notas: ";
    cin >> n1 >> n2 >> n3;

    double promedio = (n1 + n2 + n3) / 3;
    cout << "Promedio: " << promedio << endl;

    if (promedio >= 10.5)
        cout << "Aprobado";
    else
        cout << "Desaprobado";
    return 0;
}
